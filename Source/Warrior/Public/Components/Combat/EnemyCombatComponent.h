// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "EnemyCombatComponent.generated.h"

/**
 * 敌人角色专属的战斗组件，继承自基础Pawn战斗组件
 * 实现敌人特有的战斗碰撞与击中逻辑
 */
UCLASS()
class WARRIOR_API UEnemyCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
	// 重写：处理敌人武器击中目标Actor的逻辑
	virtual void OnHitTargetActor(AActor* HitActor);

protected:
	// 重写：切换敌人身体碰撞盒的碰撞状态（实现敌人专属碰撞逻辑）
	virtual void ToggleBodyCollsionBoxCollision(bool bShouldEnable, EToogleDamageType ToggleDamageType) override;
};
