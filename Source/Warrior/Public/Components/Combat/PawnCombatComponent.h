// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"


UENUM(BlueprintType)
enum class EToogleDamageType : uint8
{
	CurrentEquippedWeapon,
	LeftHand,
	RightHand

};

class AWarriorWeaponBase;
/**
 * 
 */
UCLASS()
class WARRIOR_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	UPROPERTY(BlueprintReadWrite, Category = "Warrior|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void ToggleWeaponCollision(bool bShouldEnable, EToogleDamageType ToogleDamageType = EToogleDamageType::CurrentEquippedWeapon);

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