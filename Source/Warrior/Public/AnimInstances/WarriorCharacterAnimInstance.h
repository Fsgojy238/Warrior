// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/WarriorBaseAnimInstance.h"
#include "WarriorCharacterAnimInstance.generated.h"


class AWarriorBaseCharacter;
class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorCharacterAnimInstance : public UWarriorBaseAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	// ָ��ӵ�д˶���ʵ���Ľ�ɫ
	UPROPERTY()
	AWarriorBaseCharacter* OwningCharacter;

	// ��ɫ���ƶ�����������ٶȡ����ٶȵ���������
	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	// �����ƶ��ٶȡ����ڿ�������/�ܲ������Ĺ��ɡ�
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocalmotionData")
	float GroundSpeed;

	// �Ƿ��м��ٶȡ������жϽ�ɫ�Ƿ����ڼ��ٻ���١�
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocalmotionData")
	bool bHasAcceleration;

};
