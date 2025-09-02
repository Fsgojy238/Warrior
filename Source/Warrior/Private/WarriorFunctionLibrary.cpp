// Eric Chen 


#include "WarriorFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "Interface/PawnCombatInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "WarriorGameplayTags.h"

#include "WarriorDebugHelper.h"

UWarriorAbilitySystemComponent* UWarriorFunctionLibrary::NativeGetWarriorASCFromActor(AActor* InActor)
{
	check(InActor);

	return CastChecked<UWarriorAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

void UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
	UWarriorAbilitySystemComponent* ASC = NativeGetWarriorASCFromActor(InActor);
	
	if (!ASC->HasMatchingGameplayTag(TagToAdd))
	{
		ASC->AddLooseGameplayTag(TagToAdd);
	}
}

void UWarriorFunctionLibrary::RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
	UWarriorAbilitySystemComponent* ASC = NativeGetWarriorASCFromActor(InActor);

	if (ASC->HasMatchingGameplayTag(TagToRemove))
	{
		ASC->RemoveLooseGameplayTag(TagToRemove);
	}
}

bool UWarriorFunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
	UWarriorAbilitySystemComponent* ASC = NativeGetWarriorASCFromActor(InActor);

	return ASC->HasMatchingGameplayTag(TagToCheck);
}

void UWarriorFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EWarriorConfirmType& OutConfirmType)
{
	OutConfirmType = NativeDoesActorHaveTag(InActor, TagToCheck) ? EWarriorConfirmType::Yes : EWarriorConfirmType::No;
}

UPawnCombatComponent* UWarriorFunctionLibrary::NativeGetPawnCombatComponentFromActorInfo(AActor* InActor)
{
	check(InActor);

	if (IPawnCombatInterface* PawnCombatInterface = Cast<IPawnCombatInterface>(InActor))
	{
		return PawnCombatInterface->GetPawnCombatComponent();
	}

	return nullptr;
}

UPawnCombatComponent* UWarriorFunctionLibrary::BP_GetPawnCombatComponentFromActorInfo(AActor* InActor, EWarriorValidType& OutValidType)
{
	UPawnCombatComponent* CombatComponent = NativeGetPawnCombatComponentFromActorInfo(InActor);

	OutValidType = CombatComponent ? EWarriorValidType::Valid : EWarriorValidType::Invalid;

	return CombatComponent;
}

bool UWarriorFunctionLibrary::IsTargetPawnHostile(APawn* QueryPawn, APawn* TargetPawn)
{
	check(QueryPawn && TargetPawn);

	IGenericTeamAgentInterface* QueryTeamAgent = Cast<IGenericTeamAgentInterface>(QueryPawn->GetController());
	IGenericTeamAgentInterface* TargetTeamAgent = Cast<IGenericTeamAgentInterface>(TargetPawn->GetController());

	if (QueryTeamAgent && TargetTeamAgent)
	{
		return QueryTeamAgent->GetGenericTeamId() != TargetTeamAgent->GetGenericTeamId();
	}
	
	return false;
}

float UWarriorFunctionLibrary::GetScalableFloatValueAtLevel(const FScalableFloat& InScalableFloat, float InLevel)
{
	return InScalableFloat.GetValueAtLevel(InLevel);
}

FGameplayTag UWarriorFunctionLibrary::ComputeHitReacDirectionTag(AActor* InAttacker, AActor* InVictim, float& OutAngleDifference)
{
	check(InAttacker && InVictim);

	//受害者正前方
	const FVector VictimForward = InVictim->GetActorForwardVector();
	//从受害者位置到攻击者位置的向量
	const FVector VictimToAttackerNormalized = (InAttacker->GetActorLocation() - InVictim->GetActorLocation()).GetSafeNormal();

	//点积计算角度差，给机器看的
	const float DotResult = FVector::DotProduct(VictimForward, VictimToAttackerNormalized);
	//把点积结果换成人能看懂的实际角度（比如0度~180度）
	OutAngleDifference = UKismetMathLibrary::DegAcos(DotResult);

	const FVector CrossResult = FVector::CrossProduct(VictimForward, VictimToAttackerNormalized);

	if (CrossResult.Z < 0.f)
	{
		OutAngleDifference *= -1.f;
	}

	if (OutAngleDifference <= 45.f && OutAngleDifference >= -45.f)
	{
		return WarriorGameplayTags::Shared_Status_HitReact_Front;
	}
	else if (OutAngleDifference > 45.f && OutAngleDifference < 135.f)
	{
		return WarriorGameplayTags::Shared_Status_HitReact_Right;
	}
	else if (OutAngleDifference >= 135.f || OutAngleDifference <= -135.f)
	{
		return WarriorGameplayTags::Shared_Status_HitReact_Back;
	}
	else if (OutAngleDifference > -135.f && OutAngleDifference < -45.f)
	{
		return WarriorGameplayTags::Shared_Status_HitReact_Left;
	}
	return WarriorGameplayTags::Shared_Status_HitReact_Front;
}

bool UWarriorFunctionLibrary::IsValidBlock(AActor* InAttacker, AActor* InDefender)
{
	check(InAttacker && InDefender);

	// 点积计算，两个向量方向相反时，结果为负，方向垂直时结果为0，方向相同时结果为正
	const float DotResult = FVector::DotProduct(InAttacker->GetActorForwardVector(), InDefender->GetActorForwardVector());

	/*const FString DebugString = FString::Printf(TEXT("Dot Result: %f %s"), DotResult, DotResult < -0.1f ? TEXT("Valid Block") : TEXT("InvalidBlock"));

	Debug::Print(DebugString, DotResult < -0.1f ? FColor::Green : FColor::Red);*/

	return DotResult < -0.1f ? true : false;
}

bool UWarriorFunctionLibrary::ApplyGameplayEffectSpecHandleToTargetActor(AActor* InInstigator, AActor* InTargetActor, const FGameplayEffectSpecHandle& InSpecHandle)
{
	// 1. 从发起者（InInstigator）身上获取能力系统组件（ASC）
	//    能力系统组件是UE中处理技能、伤害、状态等的核心组件
	UWarriorAbilitySystemComponent* SourcASC = NativeGetWarriorASCFromActor(InInstigator);

	// 2. 从目标（InTargetActor）身上获取能力系统组件
	UWarriorAbilitySystemComponent* TargetASC = NativeGetWarriorASCFromActor(InTargetActor);

	// 3. 通过发起者的ASC，把效果配置（InSpecHandle）应用到目标的ASC上
	//    这一步是实际执行"施加效果"的操作（比如造成伤害）
	FActiveGameplayEffectHandle ActiveGameplayEffectHandle = SourcASC->ApplyGameplayEffectSpecToTarget(*InSpecHandle.Data, TargetASC);

	// 4. 返回效果是否成功施加的结果
	return ActiveGameplayEffectHandle.WasSuccessfullyApplied();
}

void UWarriorFunctionLibrary::CountDown(const UObject* WorldContextObject, float TotalTime, float UpdateInterval, float& OutRemainingTime, EWarriorCountDownActionInput CountDownInput, EWarriorCountDownActionOutput& CountDownOutput, FLatentActionInfo LatentInfo)
{

}
