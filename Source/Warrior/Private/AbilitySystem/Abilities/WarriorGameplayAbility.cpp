// Eric Chen 


#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "AbilitySystemGlobals.h"


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
