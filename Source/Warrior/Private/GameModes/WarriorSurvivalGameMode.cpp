// Eric Chen 


#include "GameModes/WarriorSurvivalGameMode.h"
#include "Engine/AssetManager.h"
#include "Characters/WarriorEnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"
#include "NavigationSystem.h"

#include "WarriorDebugHelper.h"

void AWarriorSurvivalGameMode::BeginPlay()
{
	Super::BeginPlay();

	checkf(EnemyWaveSpawnerDataTable, TEXT("Forgot to assign a valid DataTable in survial GameMode blueprint"));

	SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::WaitSpawnNewWave);

	TotalWavesToSpawn = EnemyWaveSpawnerDataTable->GetRowNames().Num();

	PreLoadNextWaveEnemies();
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
			// 开始生成敌人
			CurrentSpawnedEnemiesCounter += TrySpawnWaveEnemies();

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

				PreLoadNextWaveEnemies();
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

void AWarriorSurvivalGameMode::PreLoadNextWaveEnemies()
{
	if (HaveFinishedAllWaves())
	{
		return;
	}

	for (const FWarriorEnemyWaveSpawnInfo& SpawnerInfo : GetCurrentWaveSpawnerTableRow()->EnemyWaveSpawnerDefinitions)
	{
		if (SpawnerInfo.SoftEnemyClassToSpawn.IsNull())
		{
			continue;
		}

		UAssetManager::GetStreamableManager().RequestAsyncLoad(
			SpawnerInfo.SoftEnemyClassToSpawn.ToSoftObjectPath(),
			FStreamableDelegate::CreateLambda(
				[SpawnerInfo, this]()
				{
					if (UClass* LoadedEnemyClass = SpawnerInfo.SoftEnemyClassToSpawn.Get())
					{
						PreLoadedEnemyClassMap.Emplace(SpawnerInfo.SoftEnemyClassToSpawn, LoadedEnemyClass);

						Debug::Print(LoadedEnemyClass->GetName() + TEXT(" is loaded"));
					}
				}
			)
		);
	}
}

FWarriorEnemyWaveSpawnerTableRow* AWarriorSurvivalGameMode::GetCurrentWaveSpawnerTableRow() const
{
	const FName RowName = FName(TEXT("Wave") + FString::FromInt(CurrentWaveCount));
	
	FWarriorEnemyWaveSpawnerTableRow* FoundRow = EnemyWaveSpawnerDataTable->FindRow<FWarriorEnemyWaveSpawnerTableRow>(RowName, FString());

	checkf(FoundRow, TEXT("Could not find a valid row under the name %s in the data table"), *RowName.ToString());

	return FoundRow;
}

// 尝试生成一波敌人，返回本次生成的敌人数量
int32 AWarriorSurvivalGameMode::TrySpawnWaveEnemies()
{
	// 找场景中的所有TargetPoint类型的生成点
	if (TargetPointsArray.IsEmpty())
	{
		/* 传参1：告诉函数，只在当前关卡中搜索
		*  传参2：明确只找ATargetPoint或其子类的对象
		*  传参3：找到的所有符合条件的ATargetPoint放入这个数组里
		*/
		UGameplayStatics::GetAllActorsOfClass(this, ATargetPoint::StaticClass(), TargetPointsArray);
	}
	
	// 确保有生成点，否则报错
	checkf(!TargetPointsArray.IsEmpty(), TEXT("No valid target point found in level: %s for spawning enemies"), *GetWorld()->GetName());
	
	// 本次生成的敌人数量
	uint32 EnemiesSpawnedThisTime = 0;  

	for (const FWarriorEnemyWaveSpawnInfo& SpawnerInfo : GetCurrentWaveSpawnerTableRow()->EnemyWaveSpawnerDefinitions)
	{
		// 先检查要生成的敌人SoftPtr不为空
		if (SpawnerInfo.SoftEnemyClassToSpawn.IsNull())
		{
			continue;
		}

		// 随机一下本次要生成的敌人数量
		const int32 NumToSpawn = FMath::RandRange(SpawnerInfo.MinPerSpawnCount, SpawnerInfo.MaxPerSpawnCount);

		// 从预加载的TMap中找到要生成的敌人类型
		UClass* LoadedEnemyClass = PreLoadedEnemyClassMap.FindChecked(SpawnerInfo.SoftEnemyClassToSpawn);

		// 设置生成参数：碰撞参数
		FActorSpawnParameters SpawnParam;
		SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		// 按照前面的随机数量生成敌人
		for (int32 i = 0; i < NumToSpawn; i++)
		{
			// 随机选一个生成点
			const int32 RandomSpawnPointIndex = FMath::RandRange(0, TargetPointsArray.Num() - 1);
			const FVector SpawnLocation = TargetPointsArray[RandomSpawnPointIndex]->GetActorLocation();
			const FRotator SpawnRotation = TargetPointsArray[RandomSpawnPointIndex]->GetActorForwardVector().ToOrientationRotator();

			// 在选好的随机生成点周围半径为400内，找一个可导航的随机位置（避免生成在障碍物里）
			FVector RandomLocation;
			UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(this, SpawnLocation, RandomLocation, 400.f);

			// 位置抬高150单位（防止敌人嵌在地面里）
			RandomLocation += FVector(0.f, 0.f, 150.f);

			// 生成敌人
			AWarriorEnemyCharacter* SpawnedEnemy = GetWorld()->SpawnActor<AWarriorEnemyCharacter>(LoadedEnemyClass, RandomLocation, SpawnRotation, SpawnParam);

			// 如果生成成功，更新计数
			if (SpawnedEnemy)
			{
				EnemiesSpawnedThisTime++;
				TotalSpawnedEnemiesThisWaveCounter++;
			}

			// 检查是否需要停止生成（比如达到本波次最大数量）
			if (ShouldKeepSpawnEnemies())
			{
				return EnemiesSpawnedThisTime;
			}
		}
	}
	
	// 返回本次生成的敌人总数
	return EnemiesSpawnedThisTime;
}

bool AWarriorSurvivalGameMode::ShouldKeepSpawnEnemies() const
{
	return TotalSpawnedEnemiesThisWaveCounter < GetCurrentWaveSpawnerTableRow()->TotalEnemyToSpawnThisWave;
}
