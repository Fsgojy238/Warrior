// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroLinkedAnimLayer() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
// End Cross Module References

// Begin Class UWarriorHeroLinkedAnimLayer
void UWarriorHeroLinkedAnimLayer::StaticRegisterNativesUWarriorHeroLinkedAnimLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroLinkedAnimLayer);
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister()
{
	return UWarriorHeroLinkedAnimLayer::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams = {
	&UWarriorHeroLinkedAnimLayer::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorHeroLinkedAnimLayer>()
{
	return UWarriorHeroLinkedAnimLayer::StaticClass();
}
UWarriorHeroLinkedAnimLayer::UWarriorHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroLinkedAnimLayer);
UWarriorHeroLinkedAnimLayer::~UWarriorHeroLinkedAnimLayer() {}
// End Class UWarriorHeroLinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroLinkedAnimLayer, UWarriorHeroLinkedAnimLayer::StaticClass, TEXT("UWarriorHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroLinkedAnimLayer), 157299843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_3754060809(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
