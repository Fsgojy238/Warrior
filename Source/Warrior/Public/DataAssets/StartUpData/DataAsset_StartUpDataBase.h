// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"


class UWarriorGameplayAbility;
class UWarriorAbilitySystemComponent;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class WARRIOR_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
protected:
	/** 角色生成时自动激活的能力列表 */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ActivateOnGivenAbilities;

	/** 被动触发能力 */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ReactiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UGameplayEffect > > StartUpGameplayEffects;

	/**
	 * 内部辅助函数：将指定能力列表赋予目标能力系统组件
	 * @param InAbilitiesToGive - 要赋予的能力类数组
	 * @param InWarriorASCToGive - 目标能力系统组件
	 * @param ApplyLevel - 能力等级
	 */
	void GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
};
