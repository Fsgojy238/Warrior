// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "ActiveGameplayEffectHandle.h"
#include "Engine/HitResult.h"
#include "GameplayEffectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorSuccessType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWarriorAbilityActivationPolicy *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy;
static UEnum* EWarriorAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>()
{
	return EWarriorAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "OnGiven.Name", "EWarriorAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EWarriorAbilityActivationPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorAbilityActivationPolicy::OnTriggered", (int64)EWarriorAbilityActivationPolicy::OnTriggered },
		{ "EWarriorAbilityActivationPolicy::OnGiven", (int64)EWarriorAbilityActivationPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorAbilityActivationPolicy",
	"EWarriorAbilityActivationPolicy",
	Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton;
}
// ********** End Enum EWarriorAbilityActivationPolicy *********************************************

// ********** Begin Class UWarriorGameplayAbility Function ApplyGameplayEffectSpecHandleToHitResults 
struct Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics
{
	struct WarriorGameplayAbility_eventApplyGameplayEffectSpecHandleToHitResults_Parms
	{
		FGameplayEffectSpecHandle InSpecHandle;
		TArray<FHitResult> InHitResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InHitResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventApplyGameplayEffectSpecHandleToHitResults_Parms, InSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandle_MetaData), NewProp_InSpecHandle_MetaData) }; // 4275563785
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InHitResults_Inner = { "InHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InHitResults = { "InHitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventApplyGameplayEffectSpecHandleToHitResults_Parms, InHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHitResults_MetaData), NewProp_InHitResults_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InSpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::NewProp_InHitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "ApplyGameplayEffectSpecHandleToHitResults", Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::WarriorGameplayAbility_eventApplyGameplayEffectSpecHandleToHitResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::WarriorGameplayAbility_eventApplyGameplayEffectSpecHandleToHitResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execApplyGameplayEffectSpecHandleToHitResults)
{
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHandle);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_InHitResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGameplayEffectSpecHandleToHitResults(Z_Param_Out_InSpecHandle,Z_Param_Out_InHitResults);
	P_NATIVE_END;
}
// ********** End Class UWarriorGameplayAbility Function ApplyGameplayEffectSpecHandleToHitResults *

// ********** Begin Class UWarriorGameplayAbility Function BP_ApplyEffectSpecHandleToTarget ********
struct Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics
{
	struct WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms
	{
		AActor* TargetActor;
		FGameplayEffectSpecHandle InSpecHanle;
		EWarriorSuccessType OutSuccessType;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "DisplayName", "Apply Gameplay Effect Spec Handle To Target Actor" },
		{ "ExpandEnumAsExecs", "OutSuccessType" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHanle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHanle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSuccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSuccessType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHanle = { "InSpecHanle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, InSpecHanle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHanle_MetaData), NewProp_InSpecHanle_MetaData) }; // 4275563785
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType = { "OutSuccessType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, OutSuccessType), Z_Construct_UEnum_Warrior_EWarriorSuccessType, METADATA_PARAMS(0, nullptr) }; // 3005604401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 386907876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHanle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "BP_ApplyEffectSpecHandleToTarget", Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execBP_ApplyEffectSpecHandleToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHanle);
	P_GET_ENUM_REF(EWarriorSuccessType,Z_Param_Out_OutSuccessType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyEffectSpecHandleToTarget(Z_Param_TargetActor,Z_Param_Out_InSpecHanle,(EWarriorSuccessType&)(Z_Param_Out_OutSuccessType));
	P_NATIVE_END;
}
// ********** End Class UWarriorGameplayAbility Function BP_ApplyEffectSpecHandleToTarget **********

// ********** Begin Class UWarriorGameplayAbility Function GetPawnCombatComponentFromActorInfo *****
struct Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics
{
	struct WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms
	{
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "GetPawnCombatComponentFromActorInfo", Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execGetPawnCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=P_THIS->GetPawnCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UWarriorGameplayAbility Function GetPawnCombatComponentFromActorInfo *******

// ********** Begin Class UWarriorGameplayAbility Function GetWarriorAbilitySystemComponentFromActorInfo 
struct Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics
{
	struct WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms
	{
		UWarriorAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "GetWarriorAbilitySystemComponentFromActorInfo", Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execGetWarriorAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWarriorAbilitySystemComponent**)Z_Param__Result=P_THIS->GetWarriorAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UWarriorGameplayAbility Function GetWarriorAbilitySystemComponentFromActorInfo 

// ********** Begin Class UWarriorGameplayAbility **************************************************
void UWarriorGameplayAbility::StaticRegisterNativesUWarriorGameplayAbility()
{
	UClass* Class = UWarriorGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGameplayEffectSpecHandleToHitResults", &UWarriorGameplayAbility::execApplyGameplayEffectSpecHandleToHitResults },
		{ "BP_ApplyEffectSpecHandleToTarget", &UWarriorGameplayAbility::execBP_ApplyEffectSpecHandleToTarget },
		{ "GetPawnCombatComponentFromActorInfo", &UWarriorGameplayAbility::execGetPawnCombatComponentFromActorInfo },
		{ "GetWarriorAbilitySystemComponentFromActorInfo", &UWarriorGameplayAbility::execGetWarriorAbilitySystemComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorGameplayAbility;
UClass* UWarriorGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UWarriorGameplayAbility;
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorGameplayAbility"),
			Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton,
			StaticRegisterNativesUWarriorGameplayAbility,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister()
{
	return UWarriorGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "WarriorAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UGameplayAbility Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_ApplyGameplayEffectSpecHandleToHitResults, "ApplyGameplayEffectSpecHandleToHitResults" }, // 709565828
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget, "BP_ApplyEffectSpecHandleToTarget" }, // 3181079319
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo, "GetPawnCombatComponentFromActorInfo" }, // 1521148848
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo, "GetWarriorAbilitySystemComponentFromActorInfo" }, // 3324045476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 1168535515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams = {
	&UWarriorGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton;
}
UWarriorGameplayAbility::UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameplayAbility);
UWarriorGameplayAbility::~UWarriorGameplayAbility() {}
// ********** End Class UWarriorGameplayAbility ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorAbilityActivationPolicy_StaticEnum, TEXT("EWarriorAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168535515U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameplayAbility, UWarriorGameplayAbility::StaticClass, TEXT("UWarriorGameplayAbility"), &Z_Registration_Info_UClass_UWarriorGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameplayAbility), 1736095685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_570060916(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h__Script_Warrior_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
