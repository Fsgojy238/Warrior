// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/Combat/EnemyCombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombatComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyCombatComponent();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent();
// End Cross Module References

// Begin Class UEnemyCombatComponent
void UEnemyCombatComponent::StaticRegisterNativesUEnemyCombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCombatComponent);
UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister()
{
	return UEnemyCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/EnemyCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/EnemyCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams = {
	&UEnemyCombatComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyCombatComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton, Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UEnemyCombatComponent>()
{
	return UEnemyCombatComponent::StaticClass();
}
UEnemyCombatComponent::UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombatComponent);
UEnemyCombatComponent::~UEnemyCombatComponent() {}
// End Class UEnemyCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombatComponent, UEnemyCombatComponent::StaticClass, TEXT("UEnemyCombatComponent"), &Z_Registration_Info_UClass_UEnemyCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombatComponent), 1691141644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_1949482795(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
