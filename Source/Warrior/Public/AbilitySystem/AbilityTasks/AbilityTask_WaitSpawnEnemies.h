// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_WaitSpawnEnemies.generated.h"


class AWarriorEnemyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitSpawnEnemiesDelegate, const TArray<AWarriorEnemyCharacter*>&, SpawnedEnemies);

/**
 * 
 */
UCLASS()
class WARRIOR_API UAbilityTask_WaitSpawnEnemies : public UAbilityTask
{
	GENERATED_BODY()

public:

	// 这个函数是创建“召唤小怪任务”的入口，调用它就相当于启动一个召唤流程
	UFUNCTION(BlueprintCallable, Category = "Warrior|AbilityTasks", meta = (DisplayName = "Wait Gameplay Event And Spawn Enemies",
	HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true", NumToSpawn = "1", RandomSpawnRadius = "200"))
	static UAbilityTask_WaitSpawnEnemies* WaitSpawnEnemies(
		UGameplayAbility* OwningAbility,  // 谁在召唤？通常填Boss自己的技能（不用手动传，默认是调用这个函数的技能）
		FGameplayTag EventTag,           // “召唤信号”：比如填一个叫"Boss.Skill.Summon"的标签，当这个标签被触发时开始召唤
		TSoftClassPtr<AWarriorEnemyCharacter> SoftEnemyClassToSpawn,  // 要召唤什么怪？填小怪的类（比如“骷髅兵”“弓箭手”）
		int32 NumToSpawn,                // 召唤多少只？比如填3就是召唤3只
		const FVector& SpawnOrigin,      // 从哪开始召唤？填一个中心点（比如Boss脚下的位置）
		float RandomSpawnRadius,         // 召唤范围多大？比如填200，就是在中心点周围200范围内随机位置召唤
		const FRotator& SpawnRotation    // 小怪面朝哪个方向？比如填Boss面对的方向，让小怪出来就对着玩家
	);

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnEnemiesDelegate OnSpawnFinished;

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnEnemiesDelegate DidNotSpawn;

private:
	FGameplayTag CachedEventTag;
	TSoftClassPtr<AWarriorEnemyCharacter> CachedSoftEnemyClassToSpawn;
	int32 CachedNumToSpawn;
	FVector CachedSpawnOrigin;
	float CachedRandomSpawnRadius;
	FRotator CachedSpawnRotation;
};
