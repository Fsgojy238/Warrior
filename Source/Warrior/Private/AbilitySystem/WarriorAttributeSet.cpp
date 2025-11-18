// Eric Chen 


#include "AbilitySystem/WarriorAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "WarriorFunctionLibrary.h"
#include "WarriorGameplayTags.h"
#include "Interface/PawnUIInterface.h"
#include "Components/UI/PawnUIComponent.h"
#include "Components/UI/HeroUIComponent.h"

#include "WarriorDebugHelper.h"

UWarriorAttributeSet::UWarriorAttributeSet()
{
	InitCurrentHealth(1.f);
	InitMaxHealth(1.f);
	InitCurrentRage(1.f);
	InitMaxRage(1.f);
	InitAttackPower(1.f);
	InitDeffensePower(1.f);
}

// 当游戏性效果（Gameplay Effect）修改属性后，会自动调用此函数，用于处理属性变更后的后续逻辑（如数值限制、UI更新、状态标签管理等）
void UWarriorAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	// 缓存目标Actor的PawnUI接口（用于后续UI更新）
	if (!CachedPawnUIInterface.IsValid())
	{
		CachedPawnUIInterface = TWeakInterfacePtr<IPawnUIInterface>(Data.Target.GetAvatarActor());
	}

	// 断言确保目标Actor实现了IPawnUIInterface接口，否则触发错误提示
	checkf(CachedPawnUIInterface.IsValid(), TEXT("%s didn't implement IPawnUIInterface"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	// 获取Pawn的UI组件（用于更新血条、怒气条等UI元素）
	UPawnUIComponent* PawnUIComponent = CachedPawnUIInterface->GetPawnUIComponent();

	// 断言确保成功获取PawnUIComponent，否则触发错误提示
	checkf(PawnUIComponent, TEXT("Couldn't extract a PawnUIComponent from %s"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	// ---- 处理「当前生命值（CurrentHealth）」的变更 ----
	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
	{
		// 将新生命值限制在「0 ~ 最大生命值」范围内
		const float NewCurrentHealth = FMath::Clamp(GetCurrentHealth(), 0.f, GetMaxHealth());
		SetCurrentHealth(NewCurrentHealth); // 应用限制后的新生命值

		// 广播生命值百分比变化（供UI组件更新血条显示）
		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());
	}

	// ---- 处理「当前怒气值（CurrentRage）」的变更 ----
	if (Data.EvaluatedData.Attribute == GetCurrentRageAttribute())
	{
		// 将新怒气值限制在「0 ~ 最大怒气」范围内
		const float NewCurrentRage = FMath::Clamp(GetCurrentRage(), 0.f, GetMaxRage());
		SetCurrentRage(NewCurrentRage); // 应用限制后的新怒气值

		// 根据怒气值状态，添加/移除对应的游戏性标签（用于触发满怒、无怒等逻辑）
		if (GetCurrentRage() == GetMaxRage())
		{
			UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), WarriorGameplayTags::Player_Status_Rage_Full);
		}
		else if (GetCurrentRage() == 0.f)
		{
			UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), WarriorGameplayTags::Player_Status_Rage_None);
		}
		else
		{
			UWarriorFunctionLibrary::RemoveGameplayTagFromActorIfFound(Data.Target.GetAvatarActor(), WarriorGameplayTags::Player_Status_Rage_Full);
			UWarriorFunctionLibrary::RemoveGameplayTagFromActorIfFound(Data.Target.GetAvatarActor(), WarriorGameplayTags::Player_Status_Rage_None);
		}

		// 如果是英雄角色，额外广播怒气百分比变化（更新英雄专属的怒气UI）
		if (UHeroUIComponent* HeroUIComponent = CachedPawnUIInterface->GetHeroUIComponent())
		{
			HeroUIComponent->OnCurrentRageChanged.Broadcast(GetCurrentRage() / GetMaxRage());
		}
	}

	// ---- 处理「受到的伤害（DamageTaken）」扣减生命值 ----
	if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
	{
		const float OldHealth = GetCurrentHealth();    // 扣血前的生命值
		const float DamageDone = GetDamageTaken();    // 要扣除的伤害值

		// 计算扣血后的新生命值，并限制在「0 ~ 最大生命值」范围内
		const float NewCurrentHealth = FMath::Clamp(OldHealth - DamageDone, 0.f, GetMaxHealth());
		SetCurrentHealth(NewCurrentHealth); // 应用扣血后的新生命值

		// 广播生命值百分比变化（更新血条显示）
		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());

		// 如果生命值变为0，添加「死亡」标签（触发死亡相关逻辑，如播放死亡动画）
		if (GetCurrentHealth() == 0.f)
		{
			UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), WarriorGameplayTags::Shared_Status_Death);
		}
	}
}
