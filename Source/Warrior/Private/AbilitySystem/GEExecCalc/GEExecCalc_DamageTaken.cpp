// Eric Chen 


#include "AbilitySystem/GEExecCalc/GEExecCalc_DamageTaken.h"
#include "AbilitySystem/WarriorAttributeSet.h"
#include "WarriorGameplayTags.h"

#include "WarriorDebugHelper.h"

// 用于定义伤害计算时需捕获的属性（如攻击力、防御力、承受伤害）的结构体
struct FWarriorDamageCapture
{
	// 声明“攻击力”的属性捕获定义（后续通过宏完成具体定义）
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackPower)
	// 声明“防御力”的属性捕获定义
	DECLARE_ATTRIBUTE_CAPTUREDEF(DeffensePower)
	// 声明“承受伤害”的属性捕获定义
	DECLARE_ATTRIBUTE_CAPTUREDEF(DamageTaken)

	FWarriorDamageCapture()
	{
		// 定义“攻击力”的捕获规则：从「攻击者（Source）」的UWarriorAttributeSet中获取AttackPower属性，不使用快照（实时获取最新值）
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, AttackPower, Source, false);
		// 定义“防御力”的捕获规则：从「目标（Target）」的UWarriorAttributeSet中获取DeffensePower属性，不使用快照
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, DeffensePower, Target, false);
		// 定义“承受伤害”的捕获规则：从「目标（Target）」的UWarriorAttributeSet中获取DamageTaken属性，不使用快照
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, DamageTaken, Target, false);
	}
};

// 提供单例的FWarriorDamageCapture实例（避免重复构造，提升性能）
static const FWarriorDamageCapture& GetFWarriorDamageCapture()
{
	static FWarriorDamageCapture WarriorDamageCapture;
	return WarriorDamageCapture;
}

// 「伤害承受」执行计算类的构造函数（用于自定义游戏性效果的伤害计算逻辑）
UGEExecCalc_DamageTaken::UGEExecCalc_DamageTaken()
{
	/* 以下是“手动查找属性字段”的旧版实现（已注释，效率较低）
	FProperty* AttackPowerProperty = FindFieldChecked<FProperty>(
		UWarriorAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UWarriorAttributeSet, AttackPower)
	);

	FGameplayEffectAttributeCaptureDefinition AttackPowerCaptureDefinition(
		AttackPowerProperty,
		EGameplayEffectAttributeCaptureSource::Source,
		false
	);

	RelevantAttributesToCapture.Add(AttackPowerCaptureDefinition);
	*/

	// 从单例中获取预定义的属性捕获定义，添加到“需要捕获的相关属性”列表
	// 这样在游戏性效果执行时，会自动捕获「攻击者的攻击力」「目标的防御力」「目标的承受伤害」属性，供后续计算使用
	RelevantAttributesToCapture.Add(GetFWarriorDamageCapture().AttackPowerDef);
	RelevantAttributesToCapture.Add(GetFWarriorDamageCapture().DeffensePowerDef);
	RelevantAttributesToCapture.Add(GetFWarriorDamageCapture().DamageTakenDef);
}

// 这个函数负责计算"一次攻击"对目标造成的实际伤害
void UGEExecCalc_DamageTaken::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	// 1. 获取本次攻击的"效果说明书"
	const FGameplayEffectSpec& EffectSpec = ExecutionParams.GetOwningSpec();

	// 2. 设置参数收集器 - 用来收集攻击者和被攻击者的"状态标签"，例如
	// - 攻击者是否开了"狂暴"（攻击力+50%）
	// - 被攻击者是否开了"防御姿态"（减伤20%）
	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = EffectSpec.CapturedSourceTags.GetAggregatedTags();
	EvaluateParameters.TargetTags = EffectSpec.CapturedTargetTags.GetAggregatedTags();

	// 3. 获取攻击者的"攻击力"属性值
	float SourceAttackPower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(
		GetFWarriorDamageCapture().AttackPowerDef, // 指定要获取"攻击力"属性
		EvaluateParameters,						   // 上面设置的参数收集器
		SourceAttackPower						   // 结果存到这个变量里
	);
	/*Debug::Print(TEXT("SourceAttackPower"), SourceAttackPower);*/

	float BaseDamage = 0.f;
	int32 UsedLightAttackComboCount = 0;
	int32 UsedHeavyAttackComboCount = 0;

	// 5. 从"标签"中提取上述3个参数的值
	for (const TPair<FGameplayTag, float>& TagMagnitude : EffectSpec.SetByCallerTagMagnitudes)
	{
		// 提取基础伤害值
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Shared_SetByCaller_BaseDamage))
		{
			BaseDamage = TagMagnitude.Value;
			/*Debug::Print(TEXT("BaseDamage"), BaseDamage);*/
		}

		// 提取轻攻击连击数
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Player_SetByCaller_AttackType_Light))
		{
			UsedLightAttackComboCount = TagMagnitude.Value;
			/*Debug::Print(TEXT("UsedLightAttackComboCount"), UsedLightAttackComboCount);*/

		}
		
		// 提取重攻击连击数
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Player_SetByCaller_AttackType_Heavy))
		{
			UsedHeavyAttackComboCount = TagMagnitude.Value;
			/*Debug::Print(TEXT("UsedHeavyAttackComboCount"), UsedHeavyAttackComboCount);*/
		}
	}

	// 6. 获取被攻击者的"防御力"属性值
	float TargetDefensePower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(
		GetFWarriorDamageCapture().DeffensePowerDef,  // 指定要获取"防御力"属性
		EvaluateParameters,                           // 参数收集器
		TargetDefensePower                            // 结果存到这个变量里
	);
	/*Debug::Print(TEXT("TargetDefensePower"), TargetDefensePower);*/

	// 7. 根据连击数计算伤害加成
	if (UsedLightAttackComboCount != 0)
	{
		const float DamageIncreasePercentLight = (UsedLightAttackComboCount - 1) * 0.05 + 1.f;

		BaseDamage *= DamageIncreasePercentLight;
		/*Debug::Print(TEXT("ScaledBaseDamageLight"), BaseDamage);*/

	}

	if (UsedHeavyAttackComboCount != 0)
	{
		const float DamageIncreasePercentHeavey = UsedHeavyAttackComboCount * 0.15 + 1.f;

		BaseDamage *= DamageIncreasePercentHeavey;
		/*Debug::Print(TEXT("ScaledBaseDamageHeavy"), BaseDamage);*/

	}

	// 8. 计算最终伤害：(基础伤害 × 连击加成) × 攻击力 ÷ 防御力
	const float FinalDamageDone = BaseDamage * SourceAttackPower / TargetDefensePower;
	/*Debug::Print(TEXT("FinalDamageDone"), FinalDamageDone);*/

	// 9. 输出最终伤害，修改目标的"DamageTaken"属性
	if (FinalDamageDone > 0.f)
	{
		OutExecutionOutput.AddOutputModifier(
			FGameplayModifierEvaluatedData(
				GetFWarriorDamageCapture().DamageTakenProperty,
				EGameplayModOp::Override,
				FinalDamageDone
			)
		);
	}
}
