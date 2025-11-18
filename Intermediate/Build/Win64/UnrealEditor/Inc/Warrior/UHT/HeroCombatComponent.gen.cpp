// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Combat/HeroCombatComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag ******************
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics
{
	struct HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms
	{
		FGameplayTag InWeaponTag;
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xcd\xa8\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xcd\xa8\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InWeaponTag = { "InWeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, InWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InWeaponTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCarriedWeaponByTag", Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCarriedWeaponByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCarriedWeaponByTag(Z_Param_InWeaponTag);
	P_NATIVE_END;
}
// ********** End Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag ********************

// ********** Begin Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon ***************
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms
	{
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentEquippedWeapon", Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCurrentEquippedWeapon();
	P_NATIVE_END;
}
// ********** End Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon *****************

// ********** Begin Class UHeroCombatComponent Function GetHeroCurrentEquippedWeaponDamageAtLevel **
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentEquippedWeaponDamageAtLevel_Parms
	{
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xbc\xef\xbf\xbd \xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd3\xa2\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xbc\xef\xbf\xbd \xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippedWeaponDamageAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippedWeaponDamageAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentEquippedWeaponDamageAtLevel", Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeaponDamageAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeaponDamageAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentEquippedWeaponDamageAtLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeroCurrentEquippedWeaponDamageAtLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// ********** End Class UHeroCombatComponent Function GetHeroCurrentEquippedWeaponDamageAtLevel ****

// ********** Begin Class UHeroCombatComponent *****************************************************
void UHeroCombatComponent::StaticRegisterNativesUHeroCombatComponent()
{
	UClass* Class = UHeroCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCarriedWeaponByTag", &UHeroCombatComponent::execGetHeroCarriedWeaponByTag },
		{ "GetHeroCurrentEquippedWeapon", &UHeroCombatComponent::execGetHeroCurrentEquippedWeapon },
		{ "GetHeroCurrentEquippedWeaponDamageAtLevel", &UHeroCombatComponent::execGetHeroCurrentEquippedWeaponDamageAtLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroCombatComponent;
UClass* UHeroCombatComponent::GetPrivateStaticClass()
{
	using TClass = UHeroCombatComponent;
	if (!Z_Registration_Info_UClass_UHeroCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroCombatComponent"),
			Z_Registration_Info_UClass_UHeroCombatComponent.InnerSingleton,
			StaticRegisterNativesUHeroCombatComponent,
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
	return Z_Registration_Info_UClass_UHeroCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister()
{
	return UHeroCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xd3\xa2\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xc9\xab\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdPawn\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * \xef\xbf\xbd\xef\xbf\xbd\xd5\xb9\xef\xbf\xbd\xef\xbf\xbd\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "Components/Combat/HeroCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd3\xa2\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xc9\xab\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdPawn\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xd5\xb9\xef\xbf\xbd\xef\xbf\xbd\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag, "GetHeroCarriedWeaponByTag" }, // 606561786
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon, "GetHeroCurrentEquippedWeapon" }, // 4226520122
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeaponDamageAtLevel, "GetHeroCurrentEquippedWeaponDamageAtLevel" }, // 2201658708
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams = {
	&UHeroCombatComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroCombatComponent()
{
	if (!Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton, Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton;
}
UHeroCombatComponent::UHeroCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCombatComponent);
UHeroCombatComponent::~UHeroCombatComponent() {}
// ********** End Class UHeroCombatComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroCombatComponent, UHeroCombatComponent::StaticClass, TEXT("UHeroCombatComponent"), &Z_Registration_Info_UClass_UHeroCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroCombatComponent), 692780535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h__Script_Warrior_455366143(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
