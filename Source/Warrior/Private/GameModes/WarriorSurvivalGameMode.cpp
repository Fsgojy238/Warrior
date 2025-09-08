// Eric Chen 


#include "GameModes/WarriorSurvivalGameMode.h"

void AWarriorSurvivalGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AWarriorSurvivalGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWarriorSurvivalGameMode::SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState InSurvialGameModeState)
{
	CurrentSurvialGameModeState = InSurvialGameModeState;

	OnSurvialGameModeStateChanged.Broadcast(CurrentSurvialGameModeState);
}
