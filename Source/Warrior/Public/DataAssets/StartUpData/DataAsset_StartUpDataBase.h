// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"


class UWarriorGameplayAbility;
class UWarriorAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class WARRIOR_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	/**
	 * 将资产中定义的所有能力赋予指定的能力系统组件
	 * @param InWarriorASCToGive - 目标能力系统组件
	 * @param ApplyLevel - 能力等级，影响能力强度和效果
	 */
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel = 1);
	
protected:
	/** 角色生成时自动激活的能力列表 */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ActivateOnGivenAbilities;

	/** 被动触发的能力列表（如受击反击、状态触发等） */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ReactiveAbilities;

	/**
	 * 内部辅助函数：将指定能力列表赋予目标能力系统组件
	 * @param InAbilitiesToGive - 要赋予的能力类数组
	 * @param InWarriorASCToGive - 目标能力系统组件
	 * @param ApplyLevel - 能力等级
	 */
	void GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel = 1);
};
