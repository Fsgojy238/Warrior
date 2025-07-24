// Eric Chen 


#include "../Public/Items/Weapons/WarriorWeaponBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AWarriorWeaponBase::AWarriorWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// 创建武器的静态网格体组件，用于可视化显示
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	// 将武器网格体设为根组件，决定武器的位置和旋转
	SetRootComponent(WeaponMesh);

	// 创建武器的碰撞盒组件，用于检测攻击碰撞
	WeaponCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponCollisionBox"));
	// 将碰撞盒附加到根组件（武器网格体）上
	WeaponCollisionBox->SetupAttachment(GetRootComponent());
	// 设置碰撞盒大小为20x20x20单位（根据武器模型调整）
	WeaponCollisionBox->SetBoxExtent(FVector(20.f));
	// 默认禁用碰撞检测（攻击时再启用）
	WeaponCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponCollisionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxBeginOverlap);
}

void AWarriorWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}


