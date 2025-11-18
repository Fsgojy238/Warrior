// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "WarriorTypes/WarriorStructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorAbilitySystemComponent Function GrantHeroWeaponAbilities *********
struct Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics
{
	struct WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms
	{
		TArray<FWarriorHeroAbilitySet> InDefaultWeaponAbilities;
		TArray<FWarriorHeroSpecialAbilitySet> InSpecialAbilities;
		int32 ApplyLevel;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ApplyLevel", "1" },
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultWeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecialAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDefaultWeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecialAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecialAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ApplyLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 1465880805
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, InDefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDefaultWeaponAbilities_MetaData), NewProp_InDefaultWeaponAbilities_MetaData) }; // 1465880805
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InSpecialAbilities_Inner = { "InSpecialAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3930325788
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InSpecialAbilities = { "InSpecialAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, InSpecialAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecialAbilities_MetaData), NewProp_InSpecialAbilities_MetaData) }; // 3930325788
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel = { "ApplyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, ApplyLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InSpecialAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InSpecialAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorAbilitySystemComponent, nullptr, "GrantHeroWeaponAbilities", Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::WarriorAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorAbilitySystemComponent::execGrantHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FWarriorHeroAbilitySet,Z_Param_Out_InDefaultWeaponAbilities);
	P_GET_TARRAY_REF(FWarriorHeroSpecialAbilitySet,Z_Param_Out_InSpecialAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_ApplyLevel);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantHeroWeaponAbilities(Z_Param_Out_InDefaultWeaponAbilities,Z_Param_Out_InSpecialAbilities,Z_Param_ApplyLevel,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// ********** End Class UWarriorAbilitySystemComponent Function GrantHeroWeaponAbilities ***********

// ********** Begin Class UWarriorAbilitySystemComponent Function RemoveGrantedHeroWeaponAbilities *
struct Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics
{
	struct WarriorAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandlesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms, InSpecHandlesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorAbilitySystemComponent, nullptr, "RemoveGrantedHeroWeaponAbilities", Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::WarriorAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::WarriorAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorAbilitySystemComponent::execRemoveGrantedHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGrantedHeroWeaponAbilities(Z_Param_Out_InSpecHandlesToRemove);
	P_NATIVE_END;
}
// ********** End Class UWarriorAbilitySystemComponent Function RemoveGrantedHeroWeaponAbilities ***

// ********** Begin Class UWarriorAbilitySystemComponent Function TryActivateAbilityByTag **********
struct Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics
{
	struct WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms
	{
		FGameplayTag AbiltiyTagToActivate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd""AI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd""AI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbiltiyTagToActivate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_AbiltiyTagToActivate = { "AbiltiyTagToActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms, AbiltiyTagToActivate), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_AbiltiyTagToActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorAbilitySystemComponent, nullptr, "TryActivateAbilityByTag", Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::WarriorAbilitySystemComponent_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorAbilitySystemComponent::execTryActivateAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbiltiyTagToActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_AbiltiyTagToActivate);
	P_NATIVE_END;
}
// ********** End Class UWarriorAbilitySystemComponent Function TryActivateAbilityByTag ************

// ********** Begin Class UWarriorAbilitySystemComponent *******************************************
void UWarriorAbilitySystemComponent::StaticRegisterNativesUWarriorAbilitySystemComponent()
{
	UClass* Class = UWarriorAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantHeroWeaponAbilities", &UWarriorAbilitySystemComponent::execGrantHeroWeaponAbilities },
		{ "RemoveGrantedHeroWeaponAbilities", &UWarriorAbilitySystemComponent::execRemoveGrantedHeroWeaponAbilities },
		{ "TryActivateAbilityByTag", &UWarriorAbilitySystemComponent::execTryActivateAbilityByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorAbilitySystemComponent;
UClass* UWarriorAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UWarriorAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorAbilitySystemComponent"),
			Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUWarriorAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister()
{
	return UWarriorAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/WarriorAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorAbilitySystemComponent_GrantHeroWeaponAbilities, "GrantHeroWeaponAbilities" }, // 3504662761
		{ &Z_Construct_UFunction_UWarriorAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities, "RemoveGrantedHeroWeaponAbilities" }, // 3517735101
		{ &Z_Construct_UFunction_UWarriorAbilitySystemComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 3305859373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::ClassParams = {
	&UWarriorAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton;
}
UWarriorAbilitySystemComponent::UWarriorAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAbilitySystemComponent);
UWarriorAbilitySystemComponent::~UWarriorAbilitySystemComponent() {}
// ********** End Class UWarriorAbilitySystemComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorAbilitySystemComponent, UWarriorAbilitySystemComponent::StaticClass, TEXT("UWarriorAbilitySystemComponent"), &Z_Registration_Info_UClass_UWarriorAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorAbilitySystemComponent), 927852396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h__Script_Warrior_1468361316(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
