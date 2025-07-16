// Eric Chen 


#include "Components/Combat/PawnCombatComponent.h"
#include "../Public/Items/Weapons/WarriorWeaponBase.h"

#include "WarriorDebugHelper.h"

/**
 * ע�����ɵ���������ɫ��������
 *
 * @param InWeaponTagToRegister - ���ڱ�ʶ������GameplayTag����"Weapon.Pistol"��
 * @param InWeaponToRegister - Ҫע�����������ָ��
 * @param bRegisterAsEquippedWeapon - �Ƿ񽫴�������Ϊ��ǰװ������
 *
 * @��ע��
 * - ������ǩ����Ψһ���ظ���ǩ�ᴥ�����Դ���
 * - ע����ͨ����ǩ���ٲ�������
 * - ע��Ϊװ�����������CurrentEquippedWeaponTag
 */
void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon /*= false*/)
{
    // ����ǩ�Ƿ��Ѵ��ڣ������ظ�ע��
    checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTagToRegister), TEXT("A Tag named %s has already been added as carried weapon"), *InWeaponTagToRegister.ToString());

    // ȷ������ָ����Ч
    check(InWeaponToRegister);

    // ��������ӵ�ӳ����У���ǩ �� ������
    CharacterCarriedWeaponMap.Emplace(InWeaponTagToRegister, InWeaponToRegister);

    // �����Ҫע��Ϊװ������������µ�ǰ������ǩ
    if (bRegisterAsEquippedWeapon)
    {
        CurrentEquippedWeaponTag = InWeaponTagToRegister;
    }

    const FString WeaponString = FString::Printf(TEXT("A Weapon named: %s has been registered using the tag %s"), *InWeaponToRegister->GetName(), *InWeaponTagToRegister.ToString());
    Debug::Print(WeaponString);
}

/**
 * ͨ��GameplayTag��ȡ��ɫЯ��������
 *
 * @param InWeaponTagToGet - Ҫ���ҵ�������ǩ
 * @return ƥ���ǩ������ָ�룬��δ�ҵ��򷵻�nullptr
 *
 * @��ע��
 * - ��������ͨ��RegisterSpawnedWeaponע��
 * - �����߼����ȼ���ǩ���ڣ��ٻ�ȡֵ�����ⴴ����ʱĬ��ֵ��
 */
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

/**
 * ��ȡ��ɫ��ǰװ��������
 *
 * @return ��ǰװ��������ָ�룬��δװ���򷵻�nullptr
 *
 * @��ע��
 * - ͨ��CurrentEquippedWeaponTag��CharacterCarriedWeaponMap����
 * - �����ǩ��Ч�ԣ�������Ч����
 */
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
