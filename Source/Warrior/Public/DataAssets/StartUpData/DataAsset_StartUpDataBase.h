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
	 * ���ʲ��ж����������������ָ��������ϵͳ���
	 * @param InWarriorASCToGive - Ŀ������ϵͳ���
	 * @param ApplyLevel - �����ȼ���Ӱ������ǿ�Ⱥ�Ч��
	 */
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel = 1);
	
protected:
	/** ��ɫ����ʱ�Զ�����������б� */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ActivateOnGivenAbilities;

	/** ���������������б����ܻ�������״̬�����ȣ� */
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorGameplayAbility > > ReactiveAbilities;

	/**
	 * �ڲ�������������ָ�������б���Ŀ������ϵͳ���
	 * @param InAbilitiesToGive - Ҫ���������������
	 * @param InWarriorASCToGive - Ŀ������ϵͳ���
	 * @param ApplyLevel - �����ȼ�
	 */
	void GrantAbilities(const TArray< TSubclassOf < UWarriorGameplayAbility > >& InAbilitiesToGive, UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 ApplyLevel = 1);
};
