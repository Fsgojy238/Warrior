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
 * 角色战斗核心组件：管理武器、控制战斗碰撞、响应战斗交互
 */
UCLASS()
class WARRIOR_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:
	// 当前装备武器的标签（用于标识/查询当前武器）
	UPROPERTY(BlueprintReadWrite, Category = "Warrior|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	// 注册生成的武器，可选择是否直接设为当前装备武器
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	// 通过武器标签，获取角色携带的对应武器
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	// 获取角色当前正装备的武器对象
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

	// 切换武器/身体部位的碰撞状态（启用/禁用），默认目标为当前装备武器
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void ToggleWeaponCollision(bool bShouldEnable, EToogleDamageType ToogleDamageType = EToogleDamageType::CurrentEquippedWeapon);

	// 武器击中目标Actor时的回调（可重写扩展逻辑）
	virtual void OnHitTargetActor(AActor* HitActor);
	// 武器从目标Actor上拔出时的回调（可重写扩展逻辑）
	virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor);

protected:
	// 专门切换“当前装备武器”的碰撞状态（内部调用）
	virtual void ToggleCurrentEquippedWeaponCollision(bool bShouldEnable);
	// 切换左手/右手的身体碰撞盒状态（内部调用）
	virtual void ToggleBodyCollsionBoxCollision(bool bShouldEnable, EToogleDamageType ToggleDamageType);

	// 存储当前与组件重叠的所有Actor（用于碰撞相关判断）
	TArray<AActor*> OverlappedActors;

private:
	/**
	 * 角色携带的所有武器映射表
	 * @Key：武器的GameplayTag（如"Weapon.Rifle"）
	 * @Value：对应的武器对象指针
	 */
	TMap<FGameplayTag, AWarriorWeaponBase*> CharacterCarriedWeaponMap;
};