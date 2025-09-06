// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "HeroGameplayAbility_PickUpStones.generated.h"

class AWarriorStoneBase;

/**
 * 
 */
UCLASS()
class WARRIOR_API UHeroGameplayAbility_PickUpStones : public UWarriorHeroGameplayAbility
{
	GENERATED_BODY()

protected:
	//~ Begin UGameplayAbility Interface.
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ Begin UGameplayAbility Interface.

	UFUNCTION(BlueprintCallable)
	void CollectStones();

	UFUNCTION(BlueprintCallable)
	void ConsumeStones();

private:
	UPROPERTY()
	TArray<AWarriorStoneBase*> CollectedStones;

	UPROPERTY(EditDefaultsOnly)
	float BoxTraceDistance = 50.f;

	UPROPERTY(EditDefaultsOnly)
	TArray< TEnumAsByte < EObjectTypeQuery >> StoneTraceChannel;

	UPROPERTY(EditDefaultsOnly)
	FVector TarceBoxSize = FVector(100.f);

	UPROPERTY(EditDefaultsOnly)
	bool bDrawDebugShape;
	
};
