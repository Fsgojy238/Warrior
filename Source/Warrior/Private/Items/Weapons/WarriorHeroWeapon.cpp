// Eric Chen 


#include "Items/Weapons/WarriorHeroWeapon.h"

void AWarriorHeroWeapon::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles)
{
	GrantedAbilitySpecHandle = InSpecHandles;
}

TArray<FGameplayAbilitySpecHandle> AWarriorHeroWeapon::GetGrantedAbilitySpecHandle() const
{
	return TArray<FGameplayAbilitySpecHandle>();
}
