// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/WarriorAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAttributeSet();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister();
// End Cross Module References

// Begin Class UWarriorAttributeSet
void UWarriorAttributeSet::StaticRegisterNativesUWarriorAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorAttributeSet);
UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister()
{
	return UWarriorAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UWarriorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/WarriorAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeffensePower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/WarriorAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeffensePower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_CurrentRage = { "CurrentRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, CurrentRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRage_MetaData), NewProp_CurrentRage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRage_MetaData), NewProp_MaxRage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_DeffensePower = { "DeffensePower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, DeffensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeffensePower_MetaData), NewProp_DeffensePower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_CurrentRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_DeffensePower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams = {
	&UWarriorAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorAttributeSet()
{
	if (!Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton, Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorAttributeSet>()
{
	return UWarriorAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAttributeSet);
UWarriorAttributeSet::~UWarriorAttributeSet() {}
// End Class UWarriorAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorAttributeSet, UWarriorAttributeSet::StaticClass, TEXT("UWarriorAttributeSet"), &Z_Registration_Info_UClass_UWarriorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorAttributeSet), 3355548564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAttributeSet_h_3999590667(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
