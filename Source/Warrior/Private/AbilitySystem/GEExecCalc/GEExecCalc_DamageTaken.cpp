// Eric Chen 


#include "AbilitySystem/GEExecCalc/GEExecCalc_DamageTaken.h"
#include "AbilitySystem/WarriorAttributeSet.h"

struct FWarriorDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackPower)
	DECLARE_ATTRIBUTE_CAPTUREDEF(DeffensePower)

	FWarriorDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, AttackPower, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, AttackPower, Target, false);
	}
};

static const FWarriorDamageCapture& GetFWarriorDamageCapture()
{
	static FWarriorDamageCapture WarriorDamageCapture;
	return WarriorDamageCapture;
}

UGEExecCalc_DamageTaken::UGEExecCalc_DamageTaken()
{
	/* Slow way of doing capture */
	/*FProperty* AttackPowerProperty = FindFieldChecked<FProperty>(
		UWarriorAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UWarriorAttributeSet, AttackPower)
	);

	FGameplayEffectAttributeCaptureDefinition AttackPowerCaptureDefinition(
		AttackPowerProperty,
		EGameplayEffectAttributeCaptureSource::Source,
		false
	);

	RelevantAttributesToCapture.Add(AttackPowerCaptureDefinition);*/

	RelevantAttributesToCapture.Add(GetFWarriorDamageCapture().AttackPowerDef);
	RelevantAttributesToCapture.Add(GetFWarriorDamageCapture().DeffensePowerDef);

}
