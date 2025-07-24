// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Characters/WarriorEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorEnemyCharacter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
// End Cross Module References

// Begin Class AWarriorEnemyCharacter
void AWarriorEnemyCharacter::StaticRegisterNativesAWarriorEnemyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorEnemyCharacter);
UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister()
{
	return AWarriorEnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_AWarriorEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WarriorEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatComponent_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End APawn Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatComponent_MetaData), NewProp_EnemyCombatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::ClassParams = {
	&AWarriorEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton, Z_Construct_UClass_AWarriorEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorEnemyCharacter>()
{
	return AWarriorEnemyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorEnemyCharacter);
AWarriorEnemyCharacter::~AWarriorEnemyCharacter() {}
// End Class AWarriorEnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorEnemyCharacter, AWarriorEnemyCharacter::StaticClass, TEXT("AWarriorEnemyCharacter"), &Z_Registration_Info_UClass_AWarriorEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorEnemyCharacter), 1940101101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_821309185(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
