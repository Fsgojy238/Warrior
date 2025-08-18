// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"

#include "WarriorHeroController.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AWarriorHeroController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	AWarriorHeroController();

	//~ Begin IGenericTeamAgentInterface Interface.
	virtual FGenericTeamId GetGenericTeamId() const;
	//~ End IGenericTeamAgentInterface Interface
	
	////~ Begin APlayerControllerInterface Interface.
	//virtual void SetupInputComponent() override;
	////~ End APlayerControllerInterface Interface

	//void HandleTurn(float Value);
	//void HandleLookUp(float Value);

	//bool IsTargetLocked();

private:
	FGenericTeamId HeroTeamID;
};
