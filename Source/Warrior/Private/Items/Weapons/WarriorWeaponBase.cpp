// Eric Chen 


#include "../Public/Items/Weapons/WarriorWeaponBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AWarriorWeaponBase::AWarriorWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// ���������ľ�̬��������������ڿ��ӻ���ʾ
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	// ��������������Ϊ�����������������λ�ú���ת
	SetRootComponent(WeaponMesh);

	// ������������ײ����������ڼ�⹥����ײ
	WeaponCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponCollisionBox"));
	// ����ײ�и��ӵ�����������������壩��
	WeaponCollisionBox->SetupAttachment(GetRootComponent());
	// ������ײ�д�СΪ20x20x20��λ����������ģ�͵�����
	WeaponCollisionBox->SetBoxExtent(FVector(20.f));
	// Ĭ�Ͻ�����ײ��⣨����ʱ�����ã�
	WeaponCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponCollisionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxBeginOverlap);
}

void AWarriorWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}


