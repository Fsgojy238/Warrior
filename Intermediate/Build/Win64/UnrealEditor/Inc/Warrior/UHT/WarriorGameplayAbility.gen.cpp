// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/WarriorGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy();
// End Cross Module References

// Begin Enum EWarriorAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy;
static UEnum* EWarriorAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>()
{
	return EWarriorAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "OnGiven.Name", "EWarriorAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EWarriorAbilityActivationPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorAbilityActivationPolicy::OnTriggered", (int64)EWarriorAbilityActivationPolicy::OnTriggered },
		{ "EWarriorAbilityActivationPolicy::OnGiven", (int64)EWarriorAbilityActivationPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorAbilityActivationPolicy",
	"EWarriorAbilityActivationPolicy",
	Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton;
}
// End Enum EWarriorAbilityActivationPolicy

// Begin Class UWarriorGameplayAbility
void UWarriorGameplayAbility::StaticRegisterNativesUWarriorGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorGameplayAbility);
UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister()
{
	return UWarriorGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UWarriorGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "WarriorAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UGameplayAbility Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_Warrior_EWarriorAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 1168535515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams = {
	&UWarriorGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorGameplayAbility>()
{
	return UWarriorGameplayAbility::StaticClass();
}
UWarriorGameplayAbility::UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameplayAbility);
UWarriorGameplayAbility::~UWarriorGameplayAbility() {}
// End Class UWarriorGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorAbilityActivationPolicy_StaticEnum, TEXT("EWarriorAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168535515U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameplayAbility, UWarriorGameplayAbility::StaticClass, TEXT("UWarriorGameplayAbility"), &Z_Registration_Info_UClass_UWarriorGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameplayAbility), 163085364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_3254241642(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
