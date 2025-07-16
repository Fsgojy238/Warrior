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
	 * 注册生成的武器到角色的武器库
	 *
	 * @param InWeaponTagToRegister - 用于标识武器的GameplayTag（如"Weapon.Pistol"）
	 * @param InWeaponToRegister - 要注册的武器对象指针
	 * @param bRegisterAsEquippedWeapon - 是否将此武器设为当前装备武器
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	/**
	 * 通过GameplayTag获取角色携带的武器
	 *
	 * @param InWeaponTagToGet - 要查找的武器标签
	 * @return 匹配标签的武器指针，若未找到则返回nullptr
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	/**
	 * 当前装备武器的GameplayTag
	 *
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Warrior|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	/**
	 * 获取角色当前装备的武器
	 *
	 * @return 当前装备的武器指针，若未装备则返回nullptr
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

private:
	/**
	 * 角色携带的所有武器映射表
	 *
	 * @Key：武器的GameplayTag（如"Weapon.Rifle"）
	 * @Value：对应的武器对象指针
	 *
	 */
	TMap<FGameplayTag, AWarriorWeaponBase*> CharacterCarriedWeaponMap;
};