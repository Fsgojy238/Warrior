// Eric Chen 


#include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h"
#include "AbilitySystemComponent.h"
#include "Engine/AssetManager.h"
#include "NavigationSystem.h"
#include "Characters/WarriorEnemyCharacter.h"

#include "WarriorDebugHelper.h"

UAbilityTask_WaitSpawnEnemies* UAbilityTask_WaitSpawnEnemies::WaitSpawnEnemies(UGameplayAbility* OwningAbility, FGameplayTag EventTag, TSoftClassPtr<AWarriorEnemyCharacter> SoftEnemyClassToSpawn, int32 NumToSpawn, const FVector& SpawnOrigin, float RandomSpawnRadius)
{
	UAbilityTask_WaitSpawnEnemies* Node = NewAbilityTask<UAbilityTask_WaitSpawnEnemies>(OwningAbility);
	Node->CachedEventTag = EventTag;
	Node->CachedNumToSpawn = NumToSpawn;
	Node->CachedRandomSpawnRadius = RandomSpawnRadius;
	Node->CachedSoftEnemyClassToSpawn = SoftEnemyClassToSpawn;
	Node->CachedSpawnOrigin = SpawnOrigin;

	return Node;
}

// 1. 启动任务：开始监听“召唤信号”
void UAbilityTask_WaitSpawnEnemies::Activate()
{
	// 找到或创建一个 信号接收器
	// CachedEventTag 就是你设置的 召唤信号标签
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);

	// 把收到信号后要做的方法（OnGameplayEventReceived）绑定到这个接收器上
	DelegateHandle = Delegate.AddUObject(this, &ThisClass::OnGameplayEventReceived);
}


// 2. 任务结束时：清理监听
void UAbilityTask_WaitSpawnEnemies::OnDestroy(bool bInOwnerFinished)
{
	// 找到 信号接收器
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);

	// 从接收器上移除一系列方法
	Delegate.Remove(DelegateHandle);

	// 固定写法调用父类的清理逻辑
	Super::OnDestroy(bInOwnerFinished);
}


// 收到召唤信号后，先检查并加载要召唤的小怪资源
void UAbilityTask_WaitSpawnEnemies::OnGameplayEventReceived(const FGameplayEventData* InPaylod)
{
	// 先检查：要召唤的小怪类型（CachedSoftEnemyClassToSpawn）是否有效，蓝图中有没有选
	// ensure(...) 是UE的断言，填错了会在编辑器里报错提醒
	if (ensure(!CachedSoftEnemyClassToSpawn.IsNull()))
	{
		// 异步加载小怪的资源
		UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
			CachedSoftEnemyClassToSpawn.ToSoftObjectPath(),  // 要加载的小怪资源路径
			// 加载完成后，自动调用OnEnemyClassLoaded函数，召唤！
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnEnemyClassLoaded)
		);
	}
	else
	{
		// 如果小怪类型无效（比如，没选要召唤什么怪）：
		if (ShouldBroadcastAbilityTaskDelegates())  // 检查下Boss正常能召唤，却召唤失败的情况
		{
			// 广播“召唤失败”，传一个空数组
			DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());
		}

		EndTask();  // 结束召唤任务
	}
}

// 小怪资源加载完成后，召唤！
void UAbilityTask_WaitSpawnEnemies::OnEnemyClassLoaded()
{
	// 获取加载好的小怪类
	UClass* LoadedClass = CachedSoftEnemyClassToSpawn.Get();
	// 获取当前世界
	UWorld* World = GetWorld();

	// 检查：如果没加载到小怪类，或者没有游戏世界，召唤失败
	if (!LoadedClass || !World)
	{
		if (ShouldBroadcastAbilityTaskDelegates()) // 检查下Boss正常能召唤，却召唤失败的情况
		{
			DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());  // 广播召唤失败
		}

		EndTask();  // 结束任务
		return;
	}

	// 用来存储所有召唤出来的小怪
	TArray<AWarriorEnemyCharacter*> SpawnedEnemies;

	// 生成小怪的参数设置：
	FActorSpawnParameters SpawnParam;
	// 碰撞处理：如果生成位置有障碍物，尽量调整位置，实在不行也强行生成（避免卡墙不出来）
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	// 循环生成指定数量CachedNumToSpawn的小怪
	for (int32 i = 0; i < CachedNumToSpawn; i++)
	{
		// 计算随机生成位置：在“SpawnOrigin（中心点）”周围“RandomSpawnRadius（半径）”内找一个可达点
		// （比如Boss脚下周围300范围内，确保小怪生成在地面上，不会卡在天上或地下）
		FVector RandomLocation;
		UNavigationSystemV1::K2_GetRandomReachablePointInRadius(this, CachedSpawnOrigin, RandomLocation, CachedRandomSpawnRadius);

		// 把位置往上抬150单位（避免小怪卡进地面，调这个值可以让怪“站在”地面上）
		RandomLocation += FVector(0.f, 0.f, 150.f);

		const FRotator SpawnFacingRotation = AbilitySystemComponent->GetAvatarActor()->GetActorForwardVector().ToOrientationRotator();

		// 真正生成小怪：在计算好的位置和角度（CachedSpawnRotation）生成一只
		AWarriorEnemyCharacter* SpawnedEnemy = World->SpawnActor<AWarriorEnemyCharacter>(
			LoadedClass,    // 要生成的小怪类型
			RandomLocation, // 生成位置
			SpawnFacingRotation,  // 生成时的朝向
			SpawnParam      // 生成参数
		);

		// 如果生成成功，就把这只小怪加入列表
		if (SpawnedEnemy)
		{
			SpawnedEnemies.Add(SpawnedEnemy);
		}
	}

	// 召唤结束，广播结果
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		if (!SpawnedEnemies.IsEmpty())  // 如果召唤出了至少一只怪
		{
			OnSpawnFinished.Broadcast(SpawnedEnemies);  // 广播“召唤成功”，并把小怪列表传出去
		}
		else  // 一只都没召唤出来（比如位置全被挡住了）
		{
			DidNotSpawn.Broadcast(TArray<AWarriorEnemyCharacter*>());  // 广播“召唤失败”
		}
	}

	EndTask();  // 结束整个召唤任务
}
