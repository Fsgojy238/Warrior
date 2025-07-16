// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"

#include "WarriorGameplayAbility.generated.h"

UENUM(BlueprintType)
enum class EWarriorAbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven

};

class UPawnCombatComponent;
class UWarriorAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:
	//~ Begin UGameplayAbility Interface.
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface

	UPROPERTY(EditDefaultsOnly, Category = "WarriorAbility")
	EWarriorAbilityActivationPolicy AbilityActivationPolicy = EWarriorAbilityActivationPolicy::OnTriggered;

/**
 * 从Ability ActorInfo中安全获取角色的战斗组件
 *
 * @return UPawnCombatComponent指针，若未找到则返回nullptr
 *
 * @备注：
 * - BlueprintPure：蓝图可调用（纯函数，无执行引脚）
 * - 通过ActorInfo中的AvatarActor查找战斗组件
 * - 适用于从GameplayAbility内部访问角色战斗功能
 */
	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponentFromActorInfo() const;
};
