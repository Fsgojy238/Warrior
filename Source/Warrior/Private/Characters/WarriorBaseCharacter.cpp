// Eric Chen 


#include "Characters/WarriorBaseCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "AbilitySystem/WarriorAttributeSet.h"


// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //���øý�ɫ��ÿ֡ Tick ���£�������ʵʱ���£�������ģ�⡢�������ƣ�����������ܡ�
	PrimaryActorTick.bStartWithTickEnabled = false; //ȷ�� Tick Ĭ�ϴ��ڽ���״̬����ʹ�������� Tick����ʼ״̬��Ϊ�رգ���

	GetMesh()->bReceivesDecals = false; //�������������������Decals������������ʱ��ȾЧ�����絯�ۡ�Ѫ���������ú���Ż����ܡ�

	WarriorAbilitySystemComponent = CreateDefaultSubobject<UWarriorAbilitySystemComponent>(TEXT("WarriorAbilitySystemComponent"));
	WarriorAttributeSet = CreateDefaultSubobject<UWarriorAttributeSet>(TEXT("WarriorAttributeSet"));


}

UAbilitySystemComponent* AWarriorBaseCharacter::GetAbilitySystemComponent() const
{
	return GetWarriorAbilitySystemComponent();
}

void AWarriorBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (WarriorAbilitySystemComponent)
	{
		WarriorAbilitySystemComponent->InitAbilityActorInfo(this, this);
	}

}


