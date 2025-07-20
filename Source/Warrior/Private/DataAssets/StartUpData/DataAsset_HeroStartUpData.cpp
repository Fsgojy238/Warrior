// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"


void UDataAsset_HeroStartUpData::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	// 遍历 英雄启动能力数组
	for (const FWarriorHeroAbilitySet AbilitySet : HeroStartUpAbilitySets)
	{
		if (!AbilitySet.IsValid()) continue;

		// 定义能力规格（AbilitySpec），并GrantAbility到能力规格中
		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);

		//设置能力的源对象
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		//设置能力等级
		AbilitySpec.Level = ApplyLevel;
		//添加动态能力标签，当对应输入触发时，会激活带有此标签的能力
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		//将能力注册到ASC中
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
