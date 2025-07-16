// Eric Chen 


#include "Components/Combat/PawnCombatComponent.h"
#include "../Public/Items/Weapons/WarriorWeaponBase.h"

#include "WarriorDebugHelper.h"

/**
 * 注册生成的武器到角色的武器库
 *
 * @param InWeaponTagToRegister - 用于标识武器的GameplayTag（如"Weapon.Pistol"）
 * @param InWeaponToRegister - 要注册的武器对象指针
 * @param bRegisterAsEquippedWeapon - 是否将此武器设为当前装备武器
 *
 * @备注：
 * - 武器标签必须唯一，重复标签会触发断言错误
 * - 注册后可通过标签快速查找武器
 * - 注册为装备武器会更新CurrentEquippedWeaponTag
 */
void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon /*= false*/)
{
    // 检查标签是否已存在，避免重复注册
    checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTagToRegister), TEXT("A Tag named %s has already been added as carried weapon"), *InWeaponTagToRegister.ToString());

    // 确保武器指针有效
    check(InWeaponToRegister);

    // 将武器添加到映射表中（标签 → 武器）
    CharacterCarriedWeaponMap.Emplace(InWeaponTagToRegister, InWeaponToRegister);

    // 如果需要注册为装备武器，则更新当前武器标签
    if (bRegisterAsEquippedWeapon)
    {
        CurrentEquippedWeaponTag = InWeaponTagToRegister;
    }

    const FString WeaponString = FString::Printf(TEXT("A Weapon named: %s has been registered using the tag %s"), *InWeaponToRegister->GetName(), *InWeaponTagToRegister.ToString());
    Debug::Print(WeaponString);
}

/**
 * 通过GameplayTag获取角色携带的武器
 *
 * @param InWeaponTagToGet - 要查找的武器标签
 * @return 匹配标签的武器指针，若未找到则返回nullptr
 *
 * @备注：
 * - 武器需先通过RegisterSpawnedWeapon注册
 * - 查找逻辑：先检查标签存在，再获取值（避免创建临时默认值）
 */
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

/**
 * 获取角色当前装备的武器
 *
 * @return 当前装备的武器指针，若未装备则返回nullptr
 *
 * @备注：
 * - 通过CurrentEquippedWeaponTag从CharacterCarriedWeaponMap查找
 * - 会检查标签有效性，避免无效查找
 */
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
