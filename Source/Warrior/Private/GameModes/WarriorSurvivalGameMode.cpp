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
		StateChangeTimeCounter += DeltaTime;

		if (StateChangeTimeCounter >= SpawnNewWaveWaitTime)
		{
			SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::SpawningNewWave);

			StateChangeTimeCounter = 0.f;
		}
	}

	if (CurrentSurvialGameModeState == EWarriorSurvialGameModeState::SpawningNewWave)
	{
		StateChangeTimeCounter += DeltaTime;

		if (StateChangeTimeCounter >= SpawnEnemiesDelayTime)
		{
			// 开始生成敌人
			CurrentSpawnedEnemiesCounter += TrySpawnWaveEnemies();

			SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::InProgress);

			StateChangeTimeCounter = 0.f;
		}
	}

	if (CurrentSurvialGameModeState == EWarriorSurvialGameModeState::WaveCompleted)
	{
		StateChangeTimeCounter += DeltaTime;

		if (StateChangeTimeCounter >= WaveCompletedWaitTime)
		{
			StateChangeTimeCounter = 0.f;

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

	PreLoadedEnemyClassMap.Empty();

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

		FString Num = FString::FromInt(NumToSpawn);
		Debug::Print(Num);

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
				SpawnedEnemy->OnDestroyed.AddUniqueDynamic(this, &ThisClass::OnEnemyDestoryed);

				EnemiesSpawnedThisTime++;
				// 这里因为是在for循环里，所以TotalSpawnedEnemiesThisWaveCounter最终会等于NumToSpawn 
				TotalSpawnedEnemiesThisWaveCounter++;

				// 检查是否需要停止生成（比如达到本波次最大数量）
				if (!ShouldKeepSpawnEnemies())
				{
					return EnemiesSpawnedThisTime;
				}
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

// 当敌人被销毁（死亡）时触发的回调函数
void AWarriorSurvivalGameMode::OnEnemyDestoryed(AActor* DestroyedActor)
{
	// 敌人死亡，当前波次的存活敌人数量减1
	CurrentSpawnedEnemiesCounter--;

	Debug::Print(FString::Printf(TEXT("CurrentSpawnedEnemiesCounter:%i, TotalSpawnedEnemiesThisWaveCounter:%i"), CurrentSpawnedEnemiesCounter, TotalSpawnedEnemiesThisWaveCounter));

	// 本波次是否达到计划生成的总数量
	if (ShouldKeepSpawnEnemies())
	{
		// 未达到，生成新的敌人，并把新生成的数量加到当前存活数中
		CurrentSpawnedEnemiesCounter += TrySpawnWaveEnemies();
	}
	// 达到了，本波次敌人全被消灭
	else if (CurrentSpawnedEnemiesCounter==0)
	{
		// 重置计数器，为下一次波次做准备
		TotalSpawnedEnemiesThisWaveCounter = 0;
		CurrentSpawnedEnemiesCounter = 0;

		SetCurrentSurvialGameModeState(EWarriorSurvialGameModeState::WaveCompleted);
	}
}

void AWarriorSurvivalGameMode::RegisterSpawnedEnemies(const TArray<AWarriorEnemyCharacter*>& InEnemiestoRegister)
{
	if (InEnemiestoRegister.IsEmpty())
	{
		return;
	}

	for (AWarriorEnemyCharacter* EnemyToRegister : InEnemiestoRegister)
	{
		if (EnemyToRegister)
		{
			CurrentSpawnedEnemiesCounter++;

			EnemyToRegister->OnDestroyed.AddUniqueDynamic(this, &ThisClass::OnEnemyDestoryed);
		}
	}
}
