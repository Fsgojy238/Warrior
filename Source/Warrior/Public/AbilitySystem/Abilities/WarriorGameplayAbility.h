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
 * ��Ability ActorInfo�а�ȫ��ȡ��ɫ��ս�����
 *
 * @return UPawnCombatComponentָ�룬��δ�ҵ��򷵻�nullptr
 *
 * @��ע��
 * - BlueprintPure����ͼ�ɵ��ã�����������ִ�����ţ�
 * - ͨ��ActorInfo�е�AvatarActor����ս�����
 * - �����ڴ�GameplayAbility�ڲ����ʽ�ɫս������
 */
	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponentFromActorInfo() const;
};
