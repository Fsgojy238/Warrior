// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/PawnExtensionComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnExtensionComponentBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister();
// End Cross Module References

// Begin Class UPawnExtensionComponentBase
void UPawnExtensionComponentBase::StaticRegisterNativesUPawnExtensionComponentBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnExtensionComponentBase);
UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister()
{
	return UPawnExtensionComponentBase::StaticClass();
}
struct Z_Construct_UClass_UPawnExtensionComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PawnExtensionComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/PawnExtensionComponentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnExtensionComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams = {
	&UPawnExtensionComponentBase::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnExtensionComponentBase()
{
	if (!Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton, Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UPawnExtensionComponentBase>()
{
	return UPawnExtensionComponentBase::StaticClass();
}
UPawnExtensionComponentBase::UPawnExtensionComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnExtensionComponentBase);
UPawnExtensionComponentBase::~UPawnExtensionComponentBase() {}
// End Class UPawnExtensionComponentBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnExtensionComponentBase, UPawnExtensionComponentBase::StaticClass, TEXT("UPawnExtensionComponentBase"), &Z_Registration_Info_UClass_UPawnExtensionComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnExtensionComponentBase), 3513910380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h_4239935913(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
