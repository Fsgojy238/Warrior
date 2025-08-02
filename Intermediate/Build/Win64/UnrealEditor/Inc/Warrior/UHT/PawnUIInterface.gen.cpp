// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Interface/PawnUIInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUIInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIInterface();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();
// End Cross Module References

// Begin Interface UPawnUIInterface
void UPawnUIInterface::StaticRegisterNativesUPawnUIInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnUIInterface);
UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister()
{
	return UPawnUIInterface::StaticClass();
}
struct Z_Construct_UClass_UPawnUIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PawnUIInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnUIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams = {
	&UPawnUIInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnUIInterface()
{
	if (!Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton, Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UPawnUIInterface>()
{
	return UPawnUIInterface::StaticClass();
}
UPawnUIInterface::UPawnUIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUIInterface);
UPawnUIInterface::~UPawnUIInterface() {}
// End Interface UPawnUIInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnUIInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUIInterface, UPawnUIInterface::StaticClass, TEXT("UPawnUIInterface"), &Z_Registration_Info_UClass_UPawnUIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUIInterface), 2069802710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnUIInterface_h_2035776123(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnUIInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnUIInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
