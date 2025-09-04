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

/*
传参说明：
	TSubclassOf<UGameplayEffect> EffectClass,  伤害效果的类型（如“物理伤害”效果）
	float InWeaponBaseDamage,                  武器基础伤害值
	FGameplayTag InCurrentAttackTypeTag,       当前攻击类型标签（如“连击1”）
	int32 InCurrentComboCount                  当前连击数

*/
FGameplayEffectSpecHandle UWarriorHeroGameplayAbility::MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float InWeaponBaseDamage, FGameplayTag InCurrentAttackTypeTag, int32 InUsedComboCount)
{
	check(EffectClass);

	// 1. 创建效果上下文（记录效果的来源、触发者等信息）
	FGameplayEffectContextHandle ContextHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeEffectContext();
	ContextHandle.SetAbility(this); // 设置触发效果的技能是“本技能”
	ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo()); // 设置效果来源为角色模型
	ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo()); // 设置触发者为角色自己

	// 2. 创建“效果规格”（基于效果类、技能等级和上下文）
	FGameplayEffectSpecHandle EffectSpecHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
		EffectClass,         // 效果类（如“物理伤害”）
		GetAbilityLevel(),  // 技能等级（影响伤害倍数）
		ContextHandle       // 上下文（包含来源、触发者等信息）
	);

	// 3. 设置“临时动态参数”：基础伤害值
	EffectSpecHandle.Data->SetSetByCallerMagnitude(
		WarriorGameplayTags::Shared_SetByCaller_BaseDamage,   // 参数标签：基础伤害
		InWeaponBaseDamage                                    // 实际伤害值
	);

	// 4. 如果有攻击类型标签，设置连击数参数
	if (InCurrentAttackTypeTag.IsValid())
	{
		EffectSpecHandle.Data->SetSetByCallerMagnitude(
			InCurrentAttackTypeTag,       // 参数标签：当前攻击类型（如“连击1”）
			InUsedComboCount           // 实际连击数（影响伤害加成）
		);
	}

	// 返回“效果规格凭证”，后续可用于应用效果
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

