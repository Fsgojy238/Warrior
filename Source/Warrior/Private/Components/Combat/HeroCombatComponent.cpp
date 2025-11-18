// Eric Chen 


#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/WarriorHeroWeapon.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"

#include "WarriorDebugHelper.h"


AWarriorHeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<AWarriorHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

AWarriorHeroWeapon* UHeroCombatComponent::GetHeroCurrentEquippedWeapon() const
{
	return Cast<AWarriorHeroWeapon>(GetCharacterCurrentEquippedWeapon());
}

float UHeroCombatComponent::GetHeroCurrentEquippedWeaponDamageAtLevel(float InLevel) const
{
	return GetHeroCurrentEquippedWeapon()->HeroWeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}

/**
 * 处理英雄武器击中目标Actor的逻辑
 * 主要实现击中去重、发送近战击中事件及命中暂停事件
 */
void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    // 检查目标是否已在重叠目标列表中，避免同一目标被重复处理（防止多次击中判定）
    if (OverlappedActors.Contains(HitActor))
    {
        return;
    }

    // 将目标添加到重叠目标列表（AddUnique确保列表中不会出现重复Actor）
    OverlappedActors.AddUnique(HitActor);

    // 创建游戏性事件数据，用于传递击中相关信息
    FGameplayEventData Data;
    // 设置事件发起者为当前战斗组件所属的角色
    Data.Instigator = GetOwningPawn();
    // 设置事件目标为被击中的Actor
    Data.Target = HitActor;

    // 向所属角色发送「近战击中」游戏性事件
    // （通过WarriorGameplayTags::Shared_Event_MeleeHit标签，触发后续逻辑如伤害计算、击中反馈等）
    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        WarriorGameplayTags::Shared_Event_MeleeHit,
        Data
    );

    // 向所属角色发送「命中暂停」游戏性事件
    // （通过WarriorGameplayTags::Player_Event_HitPause标签，触发命中时的短暂时间暂停，增强打击感）
    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        WarriorGameplayTags::Player_Event_HitPause,
        FGameplayEventData()
    );
}

/**
 * 处理武器从目标Actor拔出时的逻辑
 * 主要实现拔出动作时的命中暂停效果
 */
void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
    // 向所属角色发送「命中暂停」游戏性事件
    // （配合武器拔出动作触发短暂时间暂停，强化拔出时的动作反馈与游戏手感）
    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        WarriorGameplayTags::Player_Event_HitPause,
        FGameplayEventData()
    );
}
