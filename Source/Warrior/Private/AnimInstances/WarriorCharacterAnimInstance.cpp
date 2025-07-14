// Eric Chen 


#include "AnimInstances/WarriorCharacterAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// ��ʼ������
void UWarriorCharacterAnimInstance::NativeInitializeAnimation()
{
	// TryGetPawnOwner() ��ȡӵ�д˶���ʵ����pawn����Ϸ�еĿɿ��ƽ�ɫ��
	// Cast<AWarriorBaseCharacter> ��pawnת��Ϊ�Զ����ɫ AWarriorBaseCharacter
	OwningCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner()); 
	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

// �������º���
void UWarriorCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	// ��ȡ��ɫ��ˮƽ����ƶ��ٶȣ�����z���ٶ�
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
	// �����ٶȡ�ʹ��SizeSquared2D��������Size2D������Ϊ�˱��⿪ƽ������
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D()>0.f;

}
