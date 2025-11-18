// Eric Chen 


#include "../Public/Items/Weapons/WarriorWeaponBase.h"
#include "Components/BoxComponent.h"
#include "WarriorFunctionLibrary.h"

#include "WarriorDebugHelper.h"

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
	WeaponCollisionBox->OnComponentEndOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxEndOverlap);
}

// 武器碰撞盒开始重叠时的回调函数
void AWarriorWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 获取武器的拥有者（通常是持有武器的角色，如玩家或敌人）
	APawn* WeaponOwningPawn = GetInstigator<APawn>();

	// 确保武器拥有者有效，否则触发断言并输出错误信息（防止空指针错误）
	checkf(WeaponOwningPawn, TEXT("Forgot to assign an instigator as the owning pawn for the weapon: %s"), *GetName());

	// 判断与武器重叠的Actor是否是Pawn（可战斗角色，如敌人、NPC等）
	if (APawn* HitPawn = Cast<APawn>(OtherActor))
	{
		// 通过工具类判断被击中的Pawn是否为武器拥有者的敌对目标
		if (UWarriorFunctionLibrary::IsTargetPawnHostile(WeaponOwningPawn, HitPawn))
		{
			// 如果委托已绑定函数，则执行委托（通知武器击中敌对目标）
			OnWeaponHitTarget.ExecuteIfBound(OtherActor);
		}
	}
}

// 武器碰撞盒结束重叠时的回调函数
void AWarriorWeaponBase::OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// 获取武器的拥有者（通常是持有武器的角色）
	APawn* WeaponOwningPawn = GetInstigator<APawn>();

	// 确保武器拥有者有效，否则触发断言并输出错误信息
	checkf(WeaponOwningPawn, TEXT("Forgot to assign an instigator as the owning pawn for the weapon: %s"), *GetName());

	// 判断与武器结束重叠的Actor是否是Pawn（可战斗角色）
	if (APawn* HitPawn = Cast<APawn>(OtherActor))
	{
		// 通过工具类判断该Pawn是否为武器拥有者的敌对目标
		if (UWarriorFunctionLibrary::IsTargetPawnHostile(WeaponOwningPawn, HitPawn))
		{
			// 如果委托已绑定函数，则执行委托（通知武器与敌对目标结束重叠）
			OnWeaponHitTarget.ExecuteIfBound(OtherActor);
		}
	}
}

