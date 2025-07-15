// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"


/**
 * ���ʲ��ж����������������ָ��������ϵͳ���
 * @param InASCToGive - Ŀ������ϵͳ���
 * @param ApplyLevel - �����ȼ���Ӱ������ǿ�Ⱥ�Ч��
 */
void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	check(InASCToGive); // ȷ��Ŀ�������Ч

	// �ֱ�����������ͱ�������������
	GrantAbilities(ActivateOnGivenAbilities, InASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InASCToGive, ApplyLevel);
}

/**
 * �ڲ�������������ָ�������б���Ŀ������ϵͳ���
 * @param InAbilitiesToGive - Ҫ���������������
 * @param InASCToGive - Ŀ������ϵͳ���
 * @param ApplyLevel - �����ȼ�
 */
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
