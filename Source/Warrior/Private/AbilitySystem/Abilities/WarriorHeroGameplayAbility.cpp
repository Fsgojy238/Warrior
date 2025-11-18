// Eric Chen 


#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Controllers/WarriorHeroController.h"
#include "Characters/WarriorHeroCharacter.h"
#include "Components/Combat/HeroCombatComponent.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "WarriorGameplayTags.h"


AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedWarriorHeroCharacter.IsValid())
	{
		CachedWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedWarriorHeroCharacter.IsValid() ? CachedWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroController* UWarriorHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
	if (!CachedWarriorHeroController.IsValid())
	{
		CachedWarriorHeroController = Cast<AWarriorHeroController>(CurrentActorInfo->PlayerController);
	}
	return CachedWarriorHeroController.IsValid() ? CachedWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}

/**
 * 创建英雄伤害相关的游戏效果规格句柄
 * 用于定义伤害效果的具体参数（如基础伤害、攻击类型、连击数等），为后续应用伤害效果提供完整的规格说明
 */
FGameplayEffectSpecHandle UWarriorHeroGameplayAbility::MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float InWeaponBaseDamage, FGameplayTag InCurrentAttackTypeTag, int32 InUsedComboCount)
{
    // 确保传入的伤害效果类有效，否则触发断言（防止使用空效果类导致后续错误）
    check(EffectClass);

    // 创建效果上下文句柄，用于记录该伤害效果的来源、触发环境等关键信息
    FGameplayEffectContextHandle ContextHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeEffectContext();
    ContextHandle.SetAbility(this); // 将当前技能设置为效果的触发源，便于追踪效果来自哪个技能
    ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo()); // 关联效果的来源对象为角色的显示模型（如角色Mesh）
    ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo()); // 设置效果的触发者为角色自身（发起者与目标一致，均为角色自己）

    // 基于效果类、当前技能等级和上下文，创建具体的伤害效果规格句柄
    // 该句柄将包含效果的基础定义（如效果类型、持续方式等）和上下文信息
    FGameplayEffectSpecHandle EffectSpecHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
        EffectClass,         // 伤害效果的类型模板（如物理伤害、火焰伤害等预设效果）
        GetAbilityLevel(),  // 技能当前等级（用于计算等级对伤害的影响，如等级越高伤害倍数越高）
        ContextHandle       // 之前创建的上下文信息，确保效果应用时能追溯来源
    );

    // 向效果规格中添加动态参数：武器基础伤害值
    // 通过"Shared_SetByCaller_BaseDamage"标签关联，使效果在计算时能读取该基础伤害
    EffectSpecHandle.Data->SetSetByCallerMagnitude(
        WarriorGameplayTags::Shared_SetByCaller_BaseDamage,   // 标识"基础伤害"的游戏标签
        InWeaponBaseDamage                                    // 实际的武器基础伤害数值
    );

    // 若存在有效的当前攻击类型标签，向效果规格中添加连击数参数
    // 用于根据不同攻击类型（如"连击1""重击"）和当前连击数计算伤害加成
    if (InCurrentAttackTypeTag.IsValid())
    {
        EffectSpecHandle.Data->SetSetByCallerMagnitude(
            InCurrentAttackTypeTag,       // 标识当前攻击类型的游戏标签（如"Player_Attack_Combo1"）
            InUsedComboCount              // 当前连击次数（用于计算连击叠加的伤害增益）
        );
    }

    // 返回构建完成的伤害效果规格句柄，后续可通过该句柄将伤害效果应用到目标
    return EffectSpecHandle;
}

bool UWarriorHeroGameplayAbility::GetAbilityRemainingCooldownByTag(FGameplayTag InCooldownTag, float& TotalCooldownTime, float& RemainCooldownTime)
{
	check(InCooldownTag.IsValid());

	TotalCooldownTime = 0.f;
	RemainCooldownTime = 0.f;

	FGameplayEffectQuery CooldownQuery = FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(InCooldownTag.GetSingleTagContainer());

	TArray<TPair<float, float>> TimeRemainingAndDuration = GetWarriorAbilitySystemComponentFromActorInfo()->GetActiveEffectsTimeRemainingAndDuration(CooldownQuery);

	if (!TimeRemainingAndDuration.IsEmpty())
	{
		RemainCooldownTime = TimeRemainingAndDuration[0].Key;
		TotalCooldownTime = TimeRemainingAndDuration[0].Value;
	}

	return RemainCooldownTime > 0.f;

}

UHeroUIComponent* UWarriorHeroGameplayAbility::GetHeroUIComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroUIComponent();
}

