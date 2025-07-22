// Eric Chen 


#include "Components/Combat/PawnCombatComponent.h"
#include "../Public/Items/Weapons/WarriorWeaponBase.h"

#include "WarriorDebugHelper.h"

void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon /*= false*/)
{
    checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTagToRegister), TEXT("A Tag named %s has already been added as carried weapon"), *InWeaponTagToRegister.ToString());
    check(InWeaponToRegister);

    // ��������ӵ�ӳ����У���ǩ �� ������
    CharacterCarriedWeaponMap.Emplace(InWeaponTagToRegister, InWeaponToRegister);

    // �����Ҫע��Ϊװ������������µ�ǰ������ǩ
    if (bRegisterAsEquippedWeapon)
    {
        CurrentEquippedWeaponTag = InWeaponTagToRegister;
    }
}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const
{
    // ���ӳ����Ƿ�����ñ�ǩ
    if (CharacterCarriedWeaponMap.Contains(InWeaponTagToGet))
    {
        // ʹ��Find()����[]�������Զ�����Ĭ��ֵ
        if (AWarriorWeaponBase* const* FoundWeapon = CharacterCarriedWeaponMap.Find(InWeaponTagToGet))
        {
            return *FoundWeapon; // �����ҵ�������ָ��
        }
    }

    // δ�ҵ�ƥ������
    return nullptr;
}

AWarriorWeaponBase* UPawnCombatComponent::GetCharacterCurrentEquippedWeapon() const
{
    // ��鵱ǰ������ǩ�Ƿ���Ч
    if (!CurrentEquippedWeaponTag.IsValid())
    {
        return nullptr;
    }

    // ͨ����ǩ����ʵ������
    return GetCharacterCarriedWeaponByTag(CurrentEquippedWeaponTag);
}
