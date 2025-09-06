// Eric Chen 


#include "Items/PickUps/WarriorStoneBase.h"
#include "Characters/WarriorHeroCharacter.h"
#include "WarriorGameplayTags.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"

void AWarriorStoneBase::Consume(UWarriorAbilitySystemComponent* ASC, int32 ApplyLevel)
{
	check(StoneGameplayEffectClass);

	UGameplayEffect* EffectCDO = StoneGameplayEffectClass->GetDefaultObject<UGameplayEffect>();

	ASC->ApplyGameplayEffectToSelf(
		EffectCDO,
		ApplyLevel,
		ASC->MakeEffectContext()
	);

	BP_OnStoneConsumed();
}

void AWarriorStoneBase::OnPickUpCollisionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AWarriorHeroCharacter* OverlappedHeroCharacter = Cast<AWarriorHeroCharacter>(OtherActor))
	{
		OverlappedHeroCharacter->GetWarriorAbilitySystemComponent()->TryActivateAbilityByTag(WarriorGameplayTags::Player_Ability_PickUp_Stones);
	}
}
