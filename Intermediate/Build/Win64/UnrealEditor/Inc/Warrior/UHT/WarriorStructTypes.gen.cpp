// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorTypes/WarriorStructTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorStructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData();
// End Cross Module References

// Begin ScriptStruct FWarriorHeroAbilitySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet;
class UScriptStruct* FWarriorHeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorHeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FWarriorHeroAbilitySet>()
{
	return FWarriorHeroAbilitySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "WarriorHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "WarriorHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
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
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton;
}
// End ScriptStruct FWarriorHeroAbilitySet

// Begin ScriptStruct FWarriorHeroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData;
class UScriptStruct* FWarriorHeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroWeaponData, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorHeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FWarriorHeroWeaponData>()
{
	return FWarriorHeroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorStructTypes.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 4102101415
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponAbilities_MetaData), NewProp_DefaultWeaponAbilities_MetaData) }; // 4102101415
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities,
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
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton;
}
// End ScriptStruct FWarriorHeroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewStructOps, TEXT("WarriorHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroAbilitySet), 4102101415U) },
		{ FWarriorHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewStructOps, TEXT("WarriorHeroWeaponData"), &Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroWeaponData), 1351378307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_3336226883(TEXT("/Script/Warrior"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
