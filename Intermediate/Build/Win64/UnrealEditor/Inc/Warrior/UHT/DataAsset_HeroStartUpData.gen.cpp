// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_HeroStartUpData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
// End Cross Module References

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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_HeroStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_HeroStartUpData, UDataAsset_HeroStartUpData::StaticClass, TEXT("UDataAsset_HeroStartUpData"), &Z_Registration_Info_UClass_UDataAsset_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_HeroStartUpData), 3155288474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_1279508036(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
