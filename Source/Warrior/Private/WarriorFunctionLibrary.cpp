// Eric Chen 


#include "WarriorFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "Interface/PawnCombatInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "WarriorGameplayTags.h"
#include "WarriorTypes/WarriorCountDownAction.h"
#include "GameInstances/WarriorGameInstance.h"

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

UWarriorGameInstance* UWarriorFunctionLibrary::GetWarriorGameInstance(const UObject* WorldContextObject)
{
	if (GEngine)
	{
		// 从世界上下文对象中获取当前游戏世界（UWorld）
		if (UWorld * World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			return World->GetGameInstance<UWarriorGameInstance>();
		}
	}

	return nullptr;
}

void UWarriorFunctionLibrary::ToggleInputMode(const UObject* WorldContextObject, EWarriorInputMode InInputMode)
{
	APlayerController* PlayerController = nullptr;

	if (GEngine)
	{
		// 从世界上下文对象中获取当前游戏世界（UWorld）
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			PlayerController = World->GetFirstPlayerController();
		}
	}

	if (!PlayerController)
	{
		return;
	}

	FInputModeGameOnly GameOnlyMode;
	FInputModeUIOnly UIOnlyMode;

	switch (InInputMode)
	{
	case EWarriorInputMode::GameOnly:
		PlayerController->SetInputMode(GameOnlyMode);
		PlayerController->bShowMouseCursor = false;
		break;

	case EWarriorInputMode::UIOnly:
		PlayerController->SetInputMode(UIOnlyMode);
		PlayerController->bShowMouseCursor = true;
		break;

	default:
		break;
	}
}

// 自定义函数库中的倒计时控制函数
// 作用：启动或取消一个倒计时（如技能CD），通过延迟动作机制实时更新剩余时间
void UWarriorFunctionLibrary::CountDown(const UObject* WorldContextObject, float TotalTime, float UpdateInterval, float& OutRemainingTime, EWarriorCountDownActionInput CountDownInput, EWarriorCountDownActionOutput& CountDownOutput, FLatentActionInfo LatentInfo)
{
	UWorld* World = nullptr;  // 游戏世界指针（UE中管理所有实体和逻辑的核心）

	// 从上下文对象中获取当前游戏世界（没有世界则无法运行倒计时）
	if (GEngine)
	{
		World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	}

	// 如果获取世界失败，直接返回（无法执行倒计时）
	if (!World)
	{
		return;
	}

	// 获取世界中的"延迟动作管理器"（负责管理所有"边等边干活"的任务）
	FLatentActionManager& LatentActionManager = World->GetLatentActionManager();

	// 查找是否已经存在相同的倒计时动作（通过唯一标识UUID和目标对象判断，避免重复创建）
	FWarriorCountDownAction* FoundAction = LatentActionManager.FindExistingAction<FWarriorCountDownAction>(
		LatentInfo.CallbackTarget,  // 回调目标对象（如技能组件）
		LatentInfo.UUID             // 每个倒计时的唯一标识（避免混淆不同技能的CD）
	);

	// 如果输入指令是"开始倒计时"
	if (CountDownInput == EWarriorCountDownActionInput::Start)
	{
		// 如果不存在相同的倒计时动作，就创建一个新的并添加到管理器中
		if (!FoundAction)
		{
			LatentActionManager.AddNewAction(
				LatentInfo.CallbackTarget,  // 动作的所属对象
				LatentInfo.UUID,            // 唯一标识
				// 创建新的倒计时实例（传入参数初始化）
				new FWarriorCountDownAction(TotalTime, UpdateInterval, OutRemainingTime, CountDownOutput, LatentInfo)
			);
		}
	}

	// 如果输入指令是"取消倒计时"
	if (CountDownInput == EWarriorCountDownActionInput::Cancel)
	{
		// 如果存在该倒计时动作，就取消它
		if (FoundAction)
		{
			FoundAction->CancelAction();  // 调用取消逻辑（如停止计时、重置状态）
		}
	}
}
