// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_EnemyStartUpData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister();
// End Cross Module References

// Begin Class UDataAsset_EnemyStartUpData
void UDataAsset_EnemyStartUpData::StaticRegisterNativesUDataAsset_EnemyStartUpData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_EnemyStartUpData);
UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData_NoRegister()
{
	return UDataAsset_EnemyStartUpData::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatAbilities_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyCombatAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyCombatAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_EnemyStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities_Inner = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_EnemyStartUpData, EnemyCombatAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatAbilities_MetaData), NewProp_EnemyCombatAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::ClassParams = {
	&UDataAsset_EnemyStartUpData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData()
{
	if (!Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UDataAsset_EnemyStartUpData>()
{
	return UDataAsset_EnemyStartUpData::StaticClass();
}
UDataAsset_EnemyStartUpData::UDataAsset_EnemyStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_EnemyStartUpData);
UDataAsset_EnemyStartUpData::~UDataAsset_EnemyStartUpData() {}
// End Class UDataAsset_EnemyStartUpData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_EnemyStartUpData, UDataAsset_EnemyStartUpData::StaticClass, TEXT("UDataAsset_EnemyStartUpData"), &Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_EnemyStartUpData), 2218051189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_2637113269(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
