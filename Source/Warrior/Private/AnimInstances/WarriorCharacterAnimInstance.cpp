// Eric Chen 


#include "AnimInstances/WarriorCharacterAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// 初始化函数
void UWarriorCharacterAnimInstance::NativeInitializeAnimation()
{
	// TryGetPawnOwner() 获取拥有此动画实例的pawn（游戏中的可控制角色）
	// Cast<AWarriorBaseCharacter> 将pawn转换为自定义角色 AWarriorBaseCharacter
	OwningCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner()); 
	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

// 动画更新函数
void UWarriorCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	// 获取角色在水平面的移动速度，忽略z轴速度
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
	// 检测加速度。使用SizeSquared2D（）而非Size2D（）是为了避免开平方运算
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D()>0.f;

}
