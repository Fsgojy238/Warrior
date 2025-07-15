// Eric Chen 


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"


/**
 * ���ʲ��ж����������������ָ��������ϵͳ���
 * @param InWarriorASCToGive - Ŀ������ϵͳ���
 * @param ApplyLevel - �����ȼ���Ӱ������ǿ�Ⱥ�Ч��
 */
void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel)
{
	check(InWarriorASCToGive); // ȷ��Ŀ�������Ч

	// �ֱ�����������ͱ�������������
	GrantAbilities(ActivateOnGivenAbilities, InWarriorASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InWarriorASCToGive, ApplyLevel);
}

/**
 * �ڲ�������������ָ�������б���Ŀ������ϵͳ���
 * @param InAbilitiesToGive - Ҫ���������������
 * @param InWarriorASCToGive - Ŀ������ϵͳ���
 * @param ApplyLevel - �����ȼ�
 */
void UDataAsset_StartUpDataBase::GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel)
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
		AbilitySpec.SourceObject = InWarriorASCToGive->GetAvatarActor(); // ����������Դ����ΪAvatar Actor
		AbilitySpec.Level = ApplyLevel; // ���������ȼ�

		// �����������ӵ�����ϵͳ�����
		InWarriorASCToGive->GiveAbility(AbilitySpec);
	}
}
