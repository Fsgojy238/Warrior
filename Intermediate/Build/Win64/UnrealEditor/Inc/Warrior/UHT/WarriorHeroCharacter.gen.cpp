// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Characters/WarriorHeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
// End Cross Module References

// Begin Class AWarriorHeroCharacter
void AWarriorHeroCharacter::StaticRegisterNativesAWarriorHeroCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroCharacter);
UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister()
{
	return AWarriorHeroCharacter::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WarriorHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroCombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroCombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_HeroCombatComponent = { "HeroCombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, HeroCombatComponent), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroCombatComponent_MetaData), NewProp_HeroCombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_InputConfigDataAsset = { "InputConfigDataAsset", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, InputConfigDataAsset), Z_Construct_UClass_UDataAsset_InputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigDataAsset_MetaData), NewProp_InputConfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_HeroCombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_InputConfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams = {
	&AWarriorHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton, Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorHeroCharacter>()
{
	return AWarriorHeroCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroCharacter);
AWarriorHeroCharacter::~AWarriorHeroCharacter() {}
// End Class AWarriorHeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroCharacter, AWarriorHeroCharacter::StaticClass, TEXT("AWarriorHeroCharacter"), &Z_Registration_Info_UClass_AWarriorHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroCharacter), 1152431696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_1954535234(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
