// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"


void UDataAsset_HeroStartUpData::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	// ���� Ӣ��������������
	for (const FWarriorHeroAbilitySet AbilitySet : HeroStartUpAbilitySets)
	{
		if (!AbilitySet.IsValid()) continue;

		// �����������AbilitySpec������GrantAbility�����������
		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);

		//����������Դ����
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		//���������ȼ�
		AbilitySpec.Level = ApplyLevel;
		//��Ӷ�̬������ǩ������Ӧ���봥��ʱ���ἤ����д˱�ǩ������
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		//������ע�ᵽASC��
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
