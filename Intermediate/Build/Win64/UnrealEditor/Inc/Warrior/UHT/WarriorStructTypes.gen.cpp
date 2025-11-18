// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WarriorTypes/WarriorStructTypes.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorStructTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWarriorHeroAbilitySet ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet;
class UScriptStruct* FWarriorHeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorHeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "WarriorHeroAbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xa3\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xa3\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "WarriorHeroAbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	&NewStructOps,
	"WarriorHeroAbilitySet",
	Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers),
	sizeof(FWarriorHeroAbilitySet),
	alignof(FWarriorHeroAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet.InnerSingleton;
}
// ********** End ScriptStruct FWarriorHeroAbilitySet **********************************************

// ********** Begin ScriptStruct FWarriorHeroSpecialAbilitySet *************************************
static_assert(std::is_polymorphic<FWarriorHeroSpecialAbilitySet>() == std::is_polymorphic<FWarriorHeroAbilitySet>(), "USTRUCT FWarriorHeroSpecialAbilitySet cannot be polymorphic unless super FWarriorHeroAbilitySet is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet;
class UScriptStruct* FWarriorHeroSpecialAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorHeroSpecialAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xcc\xb3\xd0\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xcc\xb3\xd0\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAbilityIconMaterial_MetaData[] = {
		{ "Category", "WarriorHeroSpecialAbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldownTag_MetaData[] = {
		{ "Categories", "Player.Cooldown" },
		{ "Category", "WarriorHeroSpecialAbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftAbilityIconMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityCooldownTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroSpecialAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::NewProp_SoftAbilityIconMaterial = { "SoftAbilityIconMaterial", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroSpecialAbilitySet, SoftAbilityIconMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAbilityIconMaterial_MetaData), NewProp_SoftAbilityIconMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::NewProp_AbilityCooldownTag = { "AbilityCooldownTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroSpecialAbilitySet, AbilityCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCooldownTag_MetaData), NewProp_AbilityCooldownTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::NewProp_SoftAbilityIconMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::NewProp_AbilityCooldownTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	Z_Construct_UScriptStruct_FWarriorHeroAbilitySet,
	&NewStructOps,
	"WarriorHeroSpecialAbilitySet",
	Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::PropPointers),
	sizeof(FWarriorHeroSpecialAbilitySet),
	alignof(FWarriorHeroSpecialAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet.InnerSingleton;
}
// ********** End ScriptStruct FWarriorHeroSpecialAbilitySet ***************************************

// ********** Begin ScriptStruct FWarriorHeroWeaponData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData;
class UScriptStruct* FWarriorHeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroWeaponData, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorHeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xa2\n */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd3\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xbd\xe1\xb9\xb9\xef\xbf\xbd\xe5\xa3\xac\xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
		{ "TitleProperty", "InputTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialWeaponAbilities_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
		{ "TitleProperty", "InputTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBaseDamage_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa3\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftWeaponIconTexture_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecialWeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponBaseDamage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIconTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 1465880805
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponAbilities_MetaData), NewProp_DefaultWeaponAbilities_MetaData) }; // 1465880805
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SpecialWeaponAbilities_Inner = { "SpecialWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3930325788
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SpecialWeaponAbilities = { "SpecialWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, SpecialWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialWeaponAbilities_MetaData), NewProp_SpecialWeaponAbilities_MetaData) }; // 3930325788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponBaseDamage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBaseDamage_MetaData), NewProp_WeaponBaseDamage_MetaData) }; // 3660911330
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SoftWeaponIconTexture = { "SoftWeaponIconTexture", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, SoftWeaponIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftWeaponIconTexture_MetaData), NewProp_SoftWeaponIconTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SpecialWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SpecialWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SoftWeaponIconTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	&NewStructOps,
	"WarriorHeroWeaponData",
	Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers),
	sizeof(FWarriorHeroWeaponData),
	alignof(FWarriorHeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData.InnerSingleton;
}
// ********** End ScriptStruct FWarriorHeroWeaponData **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h__Script_Warrior_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewStructOps, TEXT("WarriorHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_FWarriorHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroAbilitySet), 1465880805U) },
		{ FWarriorHeroSpecialAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroSpecialAbilitySet_Statics::NewStructOps, TEXT("WarriorHeroSpecialAbilitySet"), &Z_Registration_Info_UScriptStruct_FWarriorHeroSpecialAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroSpecialAbilitySet), 3930325788U) },
		{ FWarriorHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewStructOps, TEXT("WarriorHeroWeaponData"), &Z_Registration_Info_UScriptStruct_FWarriorHeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroWeaponData), 1379325815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h__Script_Warrior_3020008643(TEXT("/Script/Warrior"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h__Script_Warrior_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h__Script_Warrior_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
