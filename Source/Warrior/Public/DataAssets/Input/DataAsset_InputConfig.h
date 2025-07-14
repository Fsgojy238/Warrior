// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataAsset_InputConfig.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FWarriorInputActionConfig
{
	GENERATED_BODY()

public:

	/* һ���ṹ����� InputTag �� InputAction ���Ӧ */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* InputAction;
};
UCLASS()
class WARRIOR_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	//����ӳ��������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* DefaultMappingContext;  
	 
	//�����ڴ�� ��ǩ - ���� ��ӳ���ϵ
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))  
	TArray<FWarriorInputActionConfig> NativeInputActions; 

	//�����const��ʾ�ú�����ֻ�ܶ�ȡ���ݳ�Ա�����ܸı����ݳ�Ա�����û��const����ô�ú��������ݳ�Ա�ɶ���д
	UInputAction* FindNativeInputActionByTag(const FGameplayTag& InInputTag) const;

};
