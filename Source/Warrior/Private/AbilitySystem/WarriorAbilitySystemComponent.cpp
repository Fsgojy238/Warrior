// Eric Chen 


#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"

#include "WarriorDebugHelper.h"

void UWarriorAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}
	
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;

		TryActivateAbility(AbilitySpec.Handle);
	}
	
}

void UWarriorAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}
}

void UWarriorAbilitySystemComponent::GrantHeroWeaponAbilities(const TArray<FWarriorHeroAbilitySet>& InDefaultWeaponAbilities, int32 ApplyLevel /*= 1*/)
{
	Debug::Print("GrantHeroWeaponAbilities work commonly");

	if (InDefaultWeaponAbilities.IsEmpty())
	{
		return;
	}

	for (const FWarriorHeroAbilitySet& AbilitySet : InDefaultWeaponAbilities)
	{
		if(!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);

		GiveAbility(AbilitySpec);
		
	}

	
}

