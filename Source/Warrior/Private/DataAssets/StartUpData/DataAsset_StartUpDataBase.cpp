// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	check(InASCToGive); // ȷ��Ŀ�������Ч

	// �ֱ�����������ͱ�������������
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
	if (InAbilitiesToGive.IsEmpty()) // ��������б��Ƿ�Ϊ��
	{
		return;
	}

	// ���������б���һ����
	for (const TSubclassOf < UWarriorGameplayAbility >& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue; // ������Ч��������

		// �����������Spec�������������ࡢ�ȼ���Դ������Ϣ
		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor(); // ����������Դ����ΪAvatar Actor
		AbilitySpec.Level = ApplyLevel; // ���������ȼ�

		// �����������ӵ�����ϵͳ�����
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
