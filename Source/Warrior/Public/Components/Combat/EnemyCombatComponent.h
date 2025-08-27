// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "EnemyCombatComponent.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UEnemyCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
	virtual void OnHitTargetActor(AActor* HitActor);

protected:
	virtual void ToggleBodyCollsionBoxCollision(bool bShouldEnable, EToogleDamageType ToggleDamageType) override;
};
