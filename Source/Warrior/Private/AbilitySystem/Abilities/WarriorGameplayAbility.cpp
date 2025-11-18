// Eric Chen 


#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "AbilitySystemGlobals.h"
#include "WarriorFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"

void UWarriorGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (AbilityActivationPolicy == EWarriorAbilityActivationPolicy::OnGiven)
	{
		// 如果 Gameplay Ability 没有激活，我们要激活它
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle); // Handle是操作能力的“钥匙”，TryActivateAbility，ClearAbility 时都要把钥匙插上
		}
	}
}

void UWarriorGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (AbilityActivationPolicy == EWarriorAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
}

bool UWarriorGameplayAbility::DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags /*= nullptr*/, const FGameplayTagContainer* TargetTags /*= nullptr*/, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	
		// Define a common lambda to check for blocked tags
		bool bBlocked = false;
		auto CheckForBlocked = [&](const FGameplayTagContainer& ContainerA, const FGameplayTagContainer& ContainerB)
			{
				// Do we not have any tags in common?  Then we're not blocked
				if (ContainerA.IsEmpty() || ContainerB.IsEmpty() || !ContainerA.HasAny(ContainerB))
				{
					return;
				}

				if (OptionalRelevantTags)
				{
					// Ensure the global blocking tag is only added once
					if (!bBlocked)
					{
						UAbilitySystemGlobals& AbilitySystemGlobals = UAbilitySystemGlobals::Get();
						const FGameplayTag& BlockedTag = AbilitySystemGlobals.ActivateFailTagsBlockedTag;
						OptionalRelevantTags->AddTag(BlockedTag);
					}

					// Now append all the blocking tags
					OptionalRelevantTags->AppendMatchingTags(ContainerA, ContainerB);
				}

				bBlocked = true;
			};

		// Define a common lambda to check for missing required tags
		bool bMissing = false;
		auto CheckForRequired = [&](const FGameplayTagContainer& TagsToCheck, const FGameplayTagContainer& RequiredTags)
			{
				// Do we have no requirements, or have met all requirements?  Then nothing's missing
				if (RequiredTags.IsEmpty() || TagsToCheck.HasAll(RequiredTags))
				{
					return;
				}

				if (OptionalRelevantTags)
				{
					// Ensure the global missing tag is only added once
					if (!bMissing)
					{
						UAbilitySystemGlobals& AbilitySystemGlobals = UAbilitySystemGlobals::Get();
						const FGameplayTag& MissingTag = AbilitySystemGlobals.ActivateFailTagsMissingTag;
						OptionalRelevantTags->AddTag(MissingTag);
					}

					FGameplayTagContainer MissingTags = RequiredTags;
					MissingTags.RemoveTags(TagsToCheck.GetGameplayTagParents());
					OptionalRelevantTags->AppendTags(MissingTags);
				}

				bMissing = true;
			};

		// Start by checking all of the blocked tags first (so OptionalRelevantTags will contain blocked tags first)
		CheckForBlocked(GetAssetTags(), AbilitySystemComponent.GetBlockedAbilityTags());
		CheckForBlocked(AbilitySystemComponent.GetOwnedGameplayTags(), ActivationBlockedTags);
		if (SourceTags != nullptr)
		{
			CheckForBlocked(*SourceTags, SourceBlockedTags);
		}
		if (TargetTags != nullptr)
		{
			CheckForBlocked(*TargetTags, TargetBlockedTags);
		}

		// Now check all required tags
		CheckForRequired(AbilitySystemComponent.GetOwnedGameplayTags(), ActivationRequiredTags);
		if (SourceTags != nullptr)
		{
			CheckForRequired(*SourceTags, SourceRequiredTags);
		}
		if (TargetTags != nullptr)
		{
			CheckForRequired(*TargetTags, TargetRequiredTags);
		}

		// We succeeded if there were no blocked tags and no missing required tags	
		return !bBlocked && !bMissing;
	
}

UPawnCombatComponent* UWarriorGameplayAbility::GetPawnCombatComponentFromActorInfo() const
{
	// 注意，如果有很多Component Derived from UPawnCombatComponent，这个方法就不能用了
	return GetAvatarActorFromActorInfo()->FindComponentByClass<UPawnCombatComponent>();
}

UWarriorAbilitySystemComponent* UWarriorGameplayAbility::GetWarriorAbilitySystemComponentFromActorInfo() const
{
	return Cast<UWarriorAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent);
}

/**
 * 原生（C++）方法：将游戏效果规格应用到目标Actor
 * 负责获取目标的能力系统组件并执行效果应用
 * @return 活跃游戏效果的句柄（用于后续管理该效果，如移除、修改等）
 */
FActiveGameplayEffectHandle UWarriorGameplayAbility::NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle)
{
	// 获取目标Actor的能力系统组件（ASC），用于处理游戏效果
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);

	// 确保目标ASC有效且效果规格合法，否则触发断言
	check(TargetASC && InSpecHandle.IsValid());

	// 通过当前能力所属的ASC，将效果规格应用到目标ASC
	return GetWarriorAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(
		*InSpecHandle.Data,  // 解引用获取实际的效果规格数据
		TargetASC
	);
}

/**
 * 蓝图可调用方法：将游戏效果规格应用到目标Actor（带执行结果反馈）
 * 封装原生方法，为蓝图提供执行成功/失败的状态
 * @return 活跃游戏效果的句柄
 */
FActiveGameplayEffectHandle UWarriorGameplayAbility::BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHanle, EWarriorSuccessType& OutSuccessType)
{
	// 调用原生方法执行效果应用
	FActiveGameplayEffectHandle ActiveGameplayEffectHandle = NativeApplyEffectSpecHandleToTarget(TargetActor, InSpecHanle);

	// 根据效果是否成功应用，设置输出的成功状态
	OutSuccessType = ActiveGameplayEffectHandle.WasSuccessfullyApplied() ? EWarriorSuccessType::Successful : EWarriorSuccessType::Failed;

	return ActiveGameplayEffectHandle;
}

/**
 * 将游戏效果规格应用到多个命中结果中的目标
 * 遍历命中列表，对每个敌对目标应用效果，并触发受击反应事件
 */
void UWarriorGameplayAbility::ApplyGameplayEffectSpecHandleToHitResults(const FGameplayEffectSpecHandle& InSpecHandle, const TArray<FHitResult>& InHitResults)
{
	// 如果没有命中结果，直接返回
	if (InHitResults.IsEmpty())
	{
		return;
	}

	// 获取当前能力所属的角色（确保有效）
	APawn* OwningPawn = CastChecked<APawn>(GetAvatarActorFromActorInfo());

	// 遍历所有命中结果
	for (const FHitResult& Hit : InHitResults)
	{
		// 判断命中的Actor是否为Pawn（可战斗角色）
		if (APawn* HitPawn = Cast<APawn>(Hit.GetActor()))
		{
			// 检查该Pawn是否为当前角色的敌对目标
			if (UWarriorFunctionLibrary::IsTargetPawnHostile(OwningPawn, HitPawn))
			{
				// 对敌对目标应用游戏效果
				FActiveGameplayEffectHandle ActiveGameplayEffectHandle = NativeApplyEffectSpecHandleToTarget(HitPawn, InSpecHandle);

				// 如果效果成功应用，向目标发送「受击反应」游戏事件（触发受击动画、硬直等）
				if (ActiveGameplayEffectHandle.WasSuccessfullyApplied())
				{
					FGameplayEventData EventData;
					EventData.Instigator = OwningPawn;  // 事件发起者为当前角色
					EventData.Target = HitPawn;         // 事件目标为被击中的敌对角色

					UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
						HitPawn,
						WarriorGameplayTags::Shared_Event_HitReact,  // 受击反应标签
						EventData
					);
				}
			}
		}
	}
}
