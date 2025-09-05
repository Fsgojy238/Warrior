// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Items/PickUps/WarriorStoneBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorStoneBase() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorStoneBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorStoneBase_NoRegister();
// End Cross Module References

// Begin Class AWarriorStoneBase
void AWarriorStoneBase::StaticRegisterNativesAWarriorStoneBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorStoneBase);
UClass* Z_Construct_UClass_AWarriorStoneBase_NoRegister()
{
	return AWarriorStoneBase::StaticClass();
}
struct Z_Construct_UClass_AWarriorStoneBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/PickUps/WarriorStoneBase.h" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorStoneBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorStoneBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorStoneBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorPickUpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorStoneBase_Statics::ClassParams = {
	&AWarriorStoneBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorStoneBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorStoneBase()
{
	if (!Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton, Z_Construct_UClass_AWarriorStoneBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorStoneBase>()
{
	return AWarriorStoneBase::StaticClass();
}
AWarriorStoneBase::AWarriorStoneBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorStoneBase);
AWarriorStoneBase::~AWarriorStoneBase() {}
// End Class AWarriorStoneBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorStoneBase, AWarriorStoneBase::StaticClass, TEXT("AWarriorStoneBase"), &Z_Registration_Info_UClass_AWarriorStoneBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorStoneBase), 948434092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h_3362286601(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
