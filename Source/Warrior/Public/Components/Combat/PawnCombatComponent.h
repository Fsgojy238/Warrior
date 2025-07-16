// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AWarriorWeaponBase;
/**
 * 
 */
UCLASS()
class WARRIOR_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:
	/**
	 * ע�����ɵ���������ɫ��������
	 *
	 * @param InWeaponTagToRegister - ���ڱ�ʶ������GameplayTag����"Weapon.Pistol"��
	 * @param InWeaponToRegister - Ҫע�����������ָ��
	 * @param bRegisterAsEquippedWeapon - �Ƿ񽫴�������Ϊ��ǰװ������
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	/**
	 * ͨ��GameplayTag��ȡ��ɫЯ��������
	 *
	 * @param InWeaponTagToGet - Ҫ���ҵ�������ǩ
	 * @return ƥ���ǩ������ָ�룬��δ�ҵ��򷵻�nullptr
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	/**
	 * ��ǰװ��������GameplayTag
	 *
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Warrior|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	/**
	 * ��ȡ��ɫ��ǰװ��������
	 *
	 * @return ��ǰװ��������ָ�룬��δװ���򷵻�nullptr
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

private:
	/**
	 * ��ɫЯ������������ӳ���
	 *
	 * @Key��������GameplayTag����"Weapon.Rifle"��
	 * @Value����Ӧ����������ָ��
	 *
	 */
	TMap<FGameplayTag, AWarriorWeaponBase*> CharacterCarriedWeaponMap;
};