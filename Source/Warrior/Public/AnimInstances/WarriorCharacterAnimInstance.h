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
	// 指向拥有此动画实例的角色
	UPROPERTY()
	AWarriorBaseCharacter* OwningCharacter;

	// 角色的移动组件。包含速度、加速度等物理属性
	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	// 地面移动速度。用于控制行走/跑步动画的过渡。
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocalmotionData")
	float GroundSpeed;

	// 是否有加速度。用于判断角色是否正在加速或减速。
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocalmotionData")
	bool bHasAcceleration;

};
