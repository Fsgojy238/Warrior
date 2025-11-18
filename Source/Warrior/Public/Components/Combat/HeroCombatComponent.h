// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"

class AWarriorHeroWeapon;
/**
 * 英雄角色专属的战斗组件，继承自基础Pawn战斗组件
 * 扩展了英雄武器的获取、伤害计算等专属功能
 */
UCLASS()
class WARRIOR_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
	// 通过GameplayTag获取英雄携带的专属武器
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorHeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const;

	// 获取英雄当前装备的武器
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorHeroWeapon* GetHeroCurrentEquippedWeapon() const;

	// 获取英雄当前装备武器在 指定等级 下的伤害
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	float GetHeroCurrentEquippedWeaponDamageAtLevel(float InLevel) const;

	// 重写父类方法：处理英雄武器击中目标Actor的逻辑
	virtual void OnHitTargetActor(AActor* HitActor) override;

	// 重写父类方法：处理英雄武器从目标Actor拔出的逻辑
	virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor) override;
};
