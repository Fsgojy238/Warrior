// Eric Chen 


#include "Characters/WarriorBaseCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "AbilitySystem/WarriorAttributeSet.h"


// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //禁用该角色的每帧 Tick 更新，若无需实时更新（如物理模拟、动画控制），可提高性能。
	PrimaryActorTick.bStartWithTickEnabled = false; //确保 Tick 默认处于禁用状态（即使后续启用 Tick，初始状态仍为关闭）。

	GetMesh()->bReceivesDecals = false; //禁用网格体接收贴花（Decals），贴花是临时渲染效果（如弹痕、血迹），禁用后可优化性能。

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


