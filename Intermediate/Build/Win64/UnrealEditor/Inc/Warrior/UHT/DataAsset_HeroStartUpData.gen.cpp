// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_HeroStartUpData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
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
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "WarriorHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "WarriorHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
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

// Begin Class UDataAsset_HeroStartUpData
void UDataAsset_HeroStartUpData::StaticRegisterNativesUDataAsset_HeroStartUpData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_HeroStartUpData);
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister()
{
	return UDataAsset_HeroStartUpData::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartUpAbilitySets_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroStartUpAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeroStartUpAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_HeroStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 956570723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_HeroStartUpData, HeroStartUpAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStartUpAbilitySets_MetaData), NewProp_HeroStartUpAbilitySets_MetaData) }; // 956570723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams = {
	&UDataAsset_HeroStartUpData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData()
{
	if (!Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UDataAsset_HeroStartUpData>()
{
	return UDataAsset_HeroStartUpData::StaticClass();
}
UDataAsset_HeroStartUpData::UDataAsset_HeroStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_HeroStartUpData);
UDataAsset_HeroStartUpData::~UDataAsset_HeroStartUpData() {}
// End Class UDataAsset_HeroStartUpData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewStructOps, TEXT("WarriorHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroAbilitySet), 956570723U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_HeroStartUpData, UDataAsset_HeroStartUpData::StaticClass, TEXT("UDataAsset_HeroStartUpData"), &Z_Registration_Info_UClass_UDataAsset_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_HeroStartUpData), 35445895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_3986439256(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
