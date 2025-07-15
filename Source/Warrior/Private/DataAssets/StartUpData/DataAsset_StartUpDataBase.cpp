// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"


/**
 * 将资产中定义的所有能力赋予指定的能力系统组件
 * @param InWarriorASCToGive - 目标能力系统组件
 * @param ApplyLevel - 能力等级，影响能力强度和效果
 */
void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel)
{
	check(InWarriorASCToGive); // 确保目标组件有效

	// 分别赋予主动激活和被动触发的能力
	GrantAbilities(ActivateOnGivenAbilities, InWarriorASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InWarriorASCToGive, ApplyLevel);
}

/**
 * 内部辅助函数：将指定能力列表赋予目标能力系统组件
 * @param InAbilitiesToGive - 要赋予的能力类数组
 * @param InWarriorASCToGive - 目标能力系统组件
 * @param ApplyLevel - 能力等级
 */
void UDataAsset_StartUpDataBase::GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty()) // 检查能力列表是否为空
	{
		return;
	}

	// 遍历能力列表并逐一赋予
	for (const TSubclassOf < UWarriorGameplayAbility >& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue; // 跳过无效的能力类

		// 创建能力规格（Spec），包含能力类、等级和源对象信息
		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InWarriorASCToGive->GetAvatarActor(); // 设置能力的源对象为Avatar Actor
		AbilitySpec.Level = ApplyLevel; // 设置能力等级

		// 将能力规格添加到能力系统组件中
		InWarriorASCToGive->GiveAbility(AbilitySpec);
	}
}
