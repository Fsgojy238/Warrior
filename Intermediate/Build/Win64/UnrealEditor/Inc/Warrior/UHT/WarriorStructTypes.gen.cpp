// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorTypes/WarriorStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorStructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData();
// End Cross Module References

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
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
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
		{ FWarriorHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewStructOps, TEXT("WarriorHeroWeaponData"), &Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroWeaponData), 850183981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_3007665131(TEXT("/Script/Warrior"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
