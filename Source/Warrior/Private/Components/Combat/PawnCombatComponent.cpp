// Eric Chen 


#include "Components/Combat/PawnCombatComponent.h"
#include "../Public/Items/Weapons/WarriorWeaponBase.h"

#include "WarriorDebugHelper.h"

void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon /*= false*/)
{
    checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTagToRegister), TEXT("A Tag named %s has already been added as carried weapon"), *InWeaponTagToRegister.ToString());
    check(InWeaponToRegister);

    // 将武器添加到映射表中（标签 → 武器）
    CharacterCarriedWeaponMap.Emplace(InWeaponTagToRegister, InWeaponToRegister);

    // 如果需要注册为装备武器，则更新当前武器标签
    if (bRegisterAsEquippedWeapon)
    {
        CurrentEquippedWeaponTag = InWeaponTagToRegister;
    }
}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const
{
    // 检查映射表是否包含该标签
    if (CharacterCarriedWeaponMap.Contains(InWeaponTagToGet))
    {
        // 使用Find()而非[]，避免自动创建默认值
        if (AWarriorWeaponBase* const* FoundWeapon = CharacterCarriedWeaponMap.Find(InWeaponTagToGet))
        {
            return *FoundWeapon; // 返回找到的武器指针
        }
    }

    // 未找到匹配武器
    return nullptr;
}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCurrentEquippedWeapon() const
{
    // 检查当前武器标签是否有效
    if (!CurrentEquippedWeaponTag.IsValid())
    {
        return nullptr;
    }

    // 通过标签查找实际武器
    return GetCharacterCarriedWeaponByTag(CurrentEquippedWeaponTag);
}
