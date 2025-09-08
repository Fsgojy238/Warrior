// Eric Chen 


#include "GameModes/WarriorSurvivalGameMode.h"

void AWarriorSurvivalGameMode::BeginPlay()
{
	Super::BeginPlay();

	checkf(EnemyWaveSpawnerDataTable, TEXT("Forgot to assign a valid DataTable in survial GameMode blueprint"));

	SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::WaitSpawnNewWave);

	TotalWavesToSpawn = EnemyWaveSpawnerDataTable->GetRowNames().Num();
}

void AWarriorSurvivalGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentSurvialGameModeState == EWarriorSurvialGameModeState::WaitSpawnNewWave)
	{
		TimeCounter += DeltaTime;

		if (TimeCounter >= SpawnNewWaveWaitTime)
		{
			SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::SpawningNewWave);

			TimeCounter = 0.f;
		}
	}

	if (CurrentSurvialGameModeState == EWarriorSurvialGameModeState::SpawningNewWave)
	{
		TimeCounter += DeltaTime;

		if (TimeCounter >= SpawnEnemiesDelayTime)
		{
			//TODO:Handle Spawn New Enemies

			SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::InProgress);

			TimeCounter = 0.f;
		}
	}

	if (CurrentSurvialGameModeState == EWarriorSurvialGameModeState::WaveCompleted)
	{
		TimeCounter += DeltaTime;

		if (TimeCounter >= WaveCompletedWaitTime)
		{
			TimeCounter = 0.f;

			CurrentWaveCount++;

			if (HaveFinishedAllWaves())
			{
				SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::AllWaveDone);
			}
			else
			{
				SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::WaitSpawnNewWave);
			}
		}
	}
}

void AWarriorSurvivalGameMode::SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState InSurvialGameModeState)
{
	CurrentSurvialGameModeState = InSurvialGameModeState;

	OnSurvialGameModeStateChanged.Broadcast(CurrentSurvialGameModeState);
}

bool AWarriorSurvivalGameMode::HaveFinishedAllWaves() const
{
	return CurrentWaveCount>TotalWavesToSpawn;
}
