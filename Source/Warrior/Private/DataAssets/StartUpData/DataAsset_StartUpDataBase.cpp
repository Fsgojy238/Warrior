// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	check(InASCToGive); // 确保目标组件有效

	// 分别赋予主动激活和被动触发的能力
	GrantAbilities(ActivateOnGivenAbilities, InASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InASCToGive, ApplyLevel);

	if (!StartUpGameplayEffects.IsEmpty())
	{
		for (const TSubclassOf < UGameplayEffect >& EffectClass : StartUpGameplayEffects)
		{
			if(!EffectClass) continue;

			UGameplayEffect* EffectCDO = EffectClass->GetDefaultObject<UGameplayEffect>();

			InASCToGive->ApplyGameplayEffectToSelf(
				EffectCDO,
				ApplyLevel,
				InASCToGive->MakeEffectContext()
			);
		}
	}
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
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
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor(); // 设置能力的源对象为Avatar Actor
		AbilitySpec.Level = ApplyLevel; // 设置能力等级

		// 将能力规格添加到能力系统组件中
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
