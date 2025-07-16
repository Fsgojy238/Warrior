// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/Combat/HeroCombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCombatComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent();
// End Cross Module References

// Begin Class UHeroCombatComponent
void UHeroCombatComponent::StaticRegisterNativesUHeroCombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroCombatComponent);
UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister()
{
	return UHeroCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/HeroCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams = {
	&UHeroCombatComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroCombatComponent()
{
	if (!Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton, Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroCombatComponent>()
{
	return UHeroCombatComponent::StaticClass();
}
UHeroCombatComponent::UHeroCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCombatComponent);
UHeroCombatComponent::~UHeroCombatComponent() {}
// End Class UHeroCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroCombatComponent, UHeroCombatComponent::StaticClass, TEXT("UHeroCombatComponent"), &Z_Registration_Info_UClass_UHeroCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroCombatComponent), 2811135160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_1347592844(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
