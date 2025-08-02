// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/UI/EnemyUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent();
// End Cross Module References

// Begin Class UEnemyUIComponent
void UEnemyUIComponent::StaticRegisterNativesUEnemyUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyUIComponent);
UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister()
{
	return UEnemyUIComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/EnemyUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams = {
	&UEnemyUIComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyUIComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton, Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UEnemyUIComponent>()
{
	return UEnemyUIComponent::StaticClass();
}
UEnemyUIComponent::UEnemyUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUIComponent);
UEnemyUIComponent::~UEnemyUIComponent() {}
// End Class UEnemyUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyUIComponent, UEnemyUIComponent::StaticClass, TEXT("UEnemyUIComponent"), &Z_Registration_Info_UClass_UEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyUIComponent), 2357310730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_2462318163(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
