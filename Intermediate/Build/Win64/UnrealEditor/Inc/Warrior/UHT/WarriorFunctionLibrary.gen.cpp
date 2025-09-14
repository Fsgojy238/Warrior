// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorFunctionLibrary.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorConfirmType();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorGameDifficulty();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorInputMode();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorValidType();
// End Cross Module References

// Begin Class UWarriorFunctionLibrary Function AddGameplayTagToActorIfNone
struct Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics
{
	struct WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
	{
		AActor* InActor;
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execAddGameplayTagToActorIfNone)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function AddGameplayTagToActorIfNone

// Begin Class UWarriorFunctionLibrary Function ApplyGameplayEffectSpecHandleToTargetActor
struct Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics
{
	struct WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms
	{
		AActor* InInstigator;
		AActor* InTargetActor;
		FGameplayEffectSpecHandle InSpecHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Actor\xca\xa9\xef\xbf\xbd\xd3\xa1\xef\xbf\xbdGameplayEffect\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Actor\xca\xa9\xef\xbf\xbd\xd3\xa1\xef\xbf\xbdGameplayEffect\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, InInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, InTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, InSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandle_MetaData), NewProp_InSpecHandle_MetaData) }; // 3383902265
void Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms), &Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_InSpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "ApplyGameplayEffectSpecHandleToTargetActor", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::WarriorFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execApplyGameplayEffectSpecHandleToTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_InInstigator);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWarriorFunctionLibrary::ApplyGameplayEffectSpecHandleToTargetActor(Z_Param_InInstigator,Z_Param_InTargetActor,Z_Param_Out_InSpecHandle);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function ApplyGameplayEffectSpecHandleToTargetActor

// Begin Class UWarriorFunctionLibrary Function BP_DoesActorHaveTag
struct Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics
{
	struct WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms
	{
		AActor* InActor;
		FGameplayTag TagToCheck;
		EWarriorConfirmType OutConfirmType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_Warrior_EWarriorConfirmType, METADATA_PARAMS(0, nullptr) }; // 1841062664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "BP_DoesActorHaveTag", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execBP_DoesActorHaveTag)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_GET_ENUM_REF(EWarriorConfirmType,Z_Param_Out_OutConfirmType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_TagToCheck,(EWarriorConfirmType&)(Z_Param_Out_OutConfirmType));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function BP_DoesActorHaveTag

// Begin Class UWarriorFunctionLibrary Function BP_GetPawnCombatComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics
{
	struct WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms
	{
		AActor* InActor;
		EWarriorValidType OutValidType;
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "DisplayName", "Get Pawn Combat Component From Actor" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, OutValidType), Z_Construct_UEnum_Warrior_EWarriorValidType, METADATA_PARAMS(0, nullptr) }; // 2216850729
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execBP_GetPawnCombatComponentFromActorInfo)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_ENUM_REF(EWarriorValidType,Z_Param_Out_OutValidType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=UWarriorFunctionLibrary::BP_GetPawnCombatComponentFromActorInfo(Z_Param_InActor,(EWarriorValidType&)(Z_Param_Out_OutValidType));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function BP_GetPawnCombatComponentFromActorInfo

// Begin Class UWarriorFunctionLibrary Function ComputeHitReacDirectionTag
struct Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics
{
	struct WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms
	{
		AActor* InAttacker;
		AActor* InVictim;
		float OutAngleDifference;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVictim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngleDifference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms, InAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_InVictim = { "InVictim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms, InVictim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_OutAngleDifference = { "OutAngleDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms, OutAngleDifference), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_InAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_InVictim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_OutAngleDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "ComputeHitReacDirectionTag", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::WarriorFunctionLibrary_eventComputeHitReacDirectionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execComputeHitReacDirectionTag)
{
	P_GET_OBJECT(AActor,Z_Param_InAttacker);
	P_GET_OBJECT(AActor,Z_Param_InVictim);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDifference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UWarriorFunctionLibrary::ComputeHitReacDirectionTag(Z_Param_InAttacker,Z_Param_InVictim,Z_Param_Out_OutAngleDifference);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function ComputeHitReacDirectionTag

// Begin Class UWarriorFunctionLibrary Function CountDown
struct Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics
{
	struct WarriorFunctionLibrary_eventCountDown_Parms
	{
		const UObject* WorldContextObject;
		float TotalTime;
		float UpdateInterval;
		float OutRemainingTime;
		EWarriorCountDownActionInput CountDownInput;
		EWarriorCountDownActionOutput CountDownOutput;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ExpandEnumAsExecs", "CountDownInput|CountDownOutput" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
		{ "TotalTime", "1.0" },
		{ "UpdateInterval", "0.1" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountDownOutput_MetaData[] = {
		{ "DisplayName", "Output" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRemainingTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CountDownInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CountDownInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CountDownOutput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CountDownOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, TotalTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, UpdateInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_OutRemainingTime = { "OutRemainingTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, OutRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownInput = { "CountDownInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, CountDownInput), Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput, METADATA_PARAMS(0, nullptr) }; // 3648965920
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput = { "CountDownOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, CountDownOutput), Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountDownOutput_MetaData), NewProp_CountDownOutput_MetaData) }; // 1618345052
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventCountDown_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_TotalTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_UpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_OutRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "CountDown", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::WarriorFunctionLibrary_eventCountDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::WarriorFunctionLibrary_eventCountDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execCountDown)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateInterval);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRemainingTime);
	P_GET_ENUM(EWarriorCountDownActionInput,Z_Param_CountDownInput);
	P_GET_ENUM_REF(EWarriorCountDownActionOutput,Z_Param_Out_CountDownOutput);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::CountDown(Z_Param_WorldContextObject,Z_Param_TotalTime,Z_Param_UpdateInterval,Z_Param_Out_OutRemainingTime,EWarriorCountDownActionInput(Z_Param_CountDownInput),(EWarriorCountDownActionOutput&)(Z_Param_Out_CountDownOutput),Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function CountDown

// Begin Class UWarriorFunctionLibrary Function GetScalableFloatValueAtLevel
struct Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics
{
	struct WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms
	{
		FScalableFloat InScalableFloat;
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "CompactNodeTitle", "Get Value At Level" },
		{ "CPP_Default_InLevel", "1.000000" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScalableFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat = { "InScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScalableFloat_MetaData), NewProp_InScalableFloat_MetaData) }; // 703790095
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "GetScalableFloatValueAtLevel", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::WarriorFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execGetScalableFloatValueAtLevel)
{
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_InScalableFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWarriorFunctionLibrary::GetScalableFloatValueAtLevel(Z_Param_Out_InScalableFloat,Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function GetScalableFloatValueAtLevel

// Begin Class UWarriorFunctionLibrary Function GetWarriorGameInstance
struct Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics
{
	struct WarriorFunctionLibrary_eventGetWarriorGameInstance_Parms
	{
		const UObject* WorldContextObject;
		UWarriorGameInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* meta\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa3\xba\xef\xbf\xbd\xef\xbf\xbdWorldContextObject \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\xe3\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa3\xa9\xd2\xaa\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbb\xef\xbf\xbd\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* meta\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa3\xba\xef\xbf\xbd\xef\xbf\xbdWorldContextObject \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xef\xbf\xbd\xe3\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa3\xa9\xd2\xaa\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbb\xef\xbf\xbd\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventGetWarriorGameInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventGetWarriorGameInstance_Parms, ReturnValue), Z_Construct_UClass_UWarriorGameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "GetWarriorGameInstance", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::WarriorFunctionLibrary_eventGetWarriorGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::WarriorFunctionLibrary_eventGetWarriorGameInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execGetWarriorGameInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWarriorGameInstance**)Z_Param__Result=UWarriorFunctionLibrary::GetWarriorGameInstance(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function GetWarriorGameInstance

// Begin Class UWarriorFunctionLibrary Function IsTargetPawnHostile
struct Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics
{
	struct WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms
	{
		APawn* QueryPawn;
		APawn* TargetPawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn = { "QueryPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms, QueryPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "IsTargetPawnHostile", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execIsTargetPawnHostile)
{
	P_GET_OBJECT(APawn,Z_Param_QueryPawn);
	P_GET_OBJECT(APawn,Z_Param_TargetPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWarriorFunctionLibrary::IsTargetPawnHostile(Z_Param_QueryPawn,Z_Param_TargetPawn);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function IsTargetPawnHostile

// Begin Class UWarriorFunctionLibrary Function IsValidBlock
struct Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics
{
	struct WarriorFunctionLibrary_eventIsValidBlock_Parms
	{
		AActor* InAttacker;
		AActor* InDefender;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDefender;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsValidBlock_Parms, InAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_InDefender = { "InDefender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsValidBlock_Parms, InDefender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorFunctionLibrary_eventIsValidBlock_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorFunctionLibrary_eventIsValidBlock_Parms), &Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_InAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_InDefender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "IsValidBlock", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::WarriorFunctionLibrary_eventIsValidBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::WarriorFunctionLibrary_eventIsValidBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execIsValidBlock)
{
	P_GET_OBJECT(AActor,Z_Param_InAttacker);
	P_GET_OBJECT(AActor,Z_Param_InDefender);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWarriorFunctionLibrary::IsValidBlock(Z_Param_InAttacker,Z_Param_InDefender);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function IsValidBlock

// Begin Class UWarriorFunctionLibrary Function RemoveGameplayTagFromActorIfFound
struct Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
{
	struct WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
	{
		AActor* InActor;
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execRemoveGameplayTagFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function RemoveGameplayTagFromActorIfFound

// Begin Class UWarriorFunctionLibrary Function SaveCurrentDifficulty
struct Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics
{
	struct WarriorFunctionLibrary_eventSaveCurrentDifficulty_Parms
	{
		EWarriorGameDifficulty InGameDifficulty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InGameDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InGameDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::NewProp_InGameDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::NewProp_InGameDifficulty = { "InGameDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventSaveCurrentDifficulty_Parms, InGameDifficulty), Z_Construct_UEnum_Warrior_EWarriorGameDifficulty, METADATA_PARAMS(0, nullptr) }; // 1999907421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::NewProp_InGameDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::NewProp_InGameDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "SaveCurrentDifficulty", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::WarriorFunctionLibrary_eventSaveCurrentDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::WarriorFunctionLibrary_eventSaveCurrentDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execSaveCurrentDifficulty)
{
	P_GET_ENUM(EWarriorGameDifficulty,Z_Param_InGameDifficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::SaveCurrentDifficulty(EWarriorGameDifficulty(Z_Param_InGameDifficulty));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function SaveCurrentDifficulty

// Begin Class UWarriorFunctionLibrary Function ToggleInputMode
struct Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics
{
	struct WarriorFunctionLibrary_eventToggleInputMode_Parms
	{
		const UObject* WorldContextObject;
		EWarriorInputMode InInputMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InInputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InInputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventToggleInputMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_InInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_InInputMode = { "InInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventToggleInputMode_Parms, InInputMode), Z_Construct_UEnum_Warrior_EWarriorInputMode, METADATA_PARAMS(0, nullptr) }; // 279901939
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_InInputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::NewProp_InInputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "ToggleInputMode", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::WarriorFunctionLibrary_eventToggleInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::WarriorFunctionLibrary_eventToggleInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execToggleInputMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EWarriorInputMode,Z_Param_InInputMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::ToggleInputMode(Z_Param_WorldContextObject,EWarriorInputMode(Z_Param_InInputMode));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function ToggleInputMode

// Begin Class UWarriorFunctionLibrary Function TryLoadSavedGameDifficulty
struct Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics
{
	struct WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms
	{
		EWarriorGameDifficulty OutSavedDifficulty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|FunctionLibrary" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSavedDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSavedDifficulty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_OutSavedDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_OutSavedDifficulty = { "OutSavedDifficulty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms, OutSavedDifficulty), Z_Construct_UEnum_Warrior_EWarriorGameDifficulty, METADATA_PARAMS(0, nullptr) }; // 1999907421
void Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms), &Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_OutSavedDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_OutSavedDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "TryLoadSavedGameDifficulty", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::WarriorFunctionLibrary_eventTryLoadSavedGameDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execTryLoadSavedGameDifficulty)
{
	P_GET_ENUM_REF(EWarriorGameDifficulty,Z_Param_Out_OutSavedDifficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWarriorFunctionLibrary::TryLoadSavedGameDifficulty((EWarriorGameDifficulty&)(Z_Param_Out_OutSavedDifficulty));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function TryLoadSavedGameDifficulty

// Begin Class UWarriorFunctionLibrary
void UWarriorFunctionLibrary::StaticRegisterNativesUWarriorFunctionLibrary()
{
	UClass* Class = UWarriorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagToActorIfNone", &UWarriorFunctionLibrary::execAddGameplayTagToActorIfNone },
		{ "ApplyGameplayEffectSpecHandleToTargetActor", &UWarriorFunctionLibrary::execApplyGameplayEffectSpecHandleToTargetActor },
		{ "BP_DoesActorHaveTag", &UWarriorFunctionLibrary::execBP_DoesActorHaveTag },
		{ "BP_GetPawnCombatComponentFromActorInfo", &UWarriorFunctionLibrary::execBP_GetPawnCombatComponentFromActorInfo },
		{ "ComputeHitReacDirectionTag", &UWarriorFunctionLibrary::execComputeHitReacDirectionTag },
		{ "CountDown", &UWarriorFunctionLibrary::execCountDown },
		{ "GetScalableFloatValueAtLevel", &UWarriorFunctionLibrary::execGetScalableFloatValueAtLevel },
		{ "GetWarriorGameInstance", &UWarriorFunctionLibrary::execGetWarriorGameInstance },
		{ "IsTargetPawnHostile", &UWarriorFunctionLibrary::execIsTargetPawnHostile },
		{ "IsValidBlock", &UWarriorFunctionLibrary::execIsValidBlock },
		{ "RemoveGameplayTagFromActorIfFound", &UWarriorFunctionLibrary::execRemoveGameplayTagFromActorIfFound },
		{ "SaveCurrentDifficulty", &UWarriorFunctionLibrary::execSaveCurrentDifficulty },
		{ "ToggleInputMode", &UWarriorFunctionLibrary::execToggleInputMode },
		{ "TryLoadSavedGameDifficulty", &UWarriorFunctionLibrary::execTryLoadSavedGameDifficulty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorFunctionLibrary);
UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister()
{
	return UWarriorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WarriorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 327192917
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor, "ApplyGameplayEffectSpecHandleToTargetActor" }, // 1394809987
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 3309680457
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo, "BP_GetPawnCombatComponentFromActorInfo" }, // 609426827
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_ComputeHitReacDirectionTag, "ComputeHitReacDirectionTag" }, // 1743736440
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_CountDown, "CountDown" }, // 3485635287
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_GetScalableFloatValueAtLevel, "GetScalableFloatValueAtLevel" }, // 734839681
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_GetWarriorGameInstance, "GetWarriorGameInstance" }, // 3797074803
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 1882979702
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_IsValidBlock, "IsValidBlock" }, // 3015361979
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 2219379183
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_SaveCurrentDifficulty, "SaveCurrentDifficulty" }, // 2061409311
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_ToggleInputMode, "ToggleInputMode" }, // 1392347725
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_TryLoadSavedGameDifficulty, "TryLoadSavedGameDifficulty" }, // 981518261
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams = {
	&UWarriorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorFunctionLibrary>()
{
	return UWarriorFunctionLibrary::StaticClass();
}
UWarriorFunctionLibrary::UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorFunctionLibrary);
UWarriorFunctionLibrary::~UWarriorFunctionLibrary() {}
// End Class UWarriorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorFunctionLibrary, UWarriorFunctionLibrary::StaticClass, TEXT("UWarriorFunctionLibrary"), &Z_Registration_Info_UClass_UWarriorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorFunctionLibrary), 682281254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_805444041(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
