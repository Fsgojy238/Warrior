// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Controllers/WarriorAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorAIController();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorAIController_NoRegister();
// End Cross Module References

// Begin Class AWarriorAIController
void AWarriorAIController::StaticRegisterNativesAWarriorAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorAIController);
UClass* Z_Construct_UClass_AWarriorAIController_NoRegister()
{
	return AWarriorAIController::StaticClass();
}
struct Z_Construct_UClass_AWarriorAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/WarriorAIController.h" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorAIController_Statics::ClassParams = {
	&AWarriorAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorAIController()
{
	if (!Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton, Z_Construct_UClass_AWarriorAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorAIController>()
{
	return AWarriorAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorAIController);
AWarriorAIController::~AWarriorAIController() {}
// End Class AWarriorAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorAIController, AWarriorAIController::StaticClass, TEXT("AWarriorAIController"), &Z_Registration_Info_UClass_AWarriorAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorAIController), 2430387101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_1377559143(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
