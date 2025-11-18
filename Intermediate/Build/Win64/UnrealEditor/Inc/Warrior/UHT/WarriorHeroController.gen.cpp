// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controllers/WarriorHeroController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorHeroController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroController();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorHeroController ***************************************************
void AWarriorHeroController::StaticRegisterNativesAWarriorHeroController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorHeroController;
UClass* AWarriorHeroController::GetPrivateStaticClass()
{
	using TClass = AWarriorHeroController;
	if (!Z_Registration_Info_UClass_AWarriorHeroController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorHeroController"),
			Z_Registration_Info_UClass_AWarriorHeroController.InnerSingleton,
			StaticRegisterNativesAWarriorHeroController,
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
	return Z_Registration_Info_UClass_AWarriorHeroController.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister()
{
	return AWarriorHeroController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorHeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/WarriorHeroController.h" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorHeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWarriorHeroController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AWarriorHeroController, IGenericTeamAgentInterface), false },  // 657866642
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams = {
	&AWarriorHeroController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroController()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton, Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroController);
AWarriorHeroController::~AWarriorHeroController() {}
// ********** End Class AWarriorHeroController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroController, AWarriorHeroController::StaticClass, TEXT("AWarriorHeroController"), &Z_Registration_Info_UClass_AWarriorHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroController), 882447778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h__Script_Warrior_2590571537(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
