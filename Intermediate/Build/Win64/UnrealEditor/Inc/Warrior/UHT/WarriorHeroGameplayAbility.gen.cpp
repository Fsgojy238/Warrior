// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroGameplayAbility() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
// End Cross Module References

// Begin Class UWarriorHeroGameplayAbility Function GetHeroCharacterFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms
	{
		AWarriorHeroCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroCharacter**)Z_Param__Result=P_THIS->GetHeroCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroCharacterFromActorInfo

// Begin Class UWarriorHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms
	{
		UHeroCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHeroCombatComponent**)Z_Param__Result=P_THIS->GetHeroCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo

// Begin Class UWarriorHeroGameplayAbility Function GetHeroControllerFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms
	{
		AWarriorHeroController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroController**)Z_Param__Result=P_THIS->GetHeroControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroControllerFromActorInfo

// Begin Class UWarriorHeroGameplayAbility
void UWarriorHeroGameplayAbility::StaticRegisterNativesUWarriorHeroGameplayAbility()
{
	UClass* Class = UWarriorHeroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCharacterFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroCharacterFromActorInfo },
		{ "GetHeroCombatComponentFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo },
		{ "GetHeroControllerFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroControllerFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroGameplayAbility);
UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister()
{
	return UWarriorHeroGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCharacterFromActorInfo, "GetHeroCharacterFromActorInfo" }, // 1724430518
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo, "GetHeroCombatComponentFromActorInfo" }, // 2767376351
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo, "GetHeroControllerFromActorInfo" }, // 640993003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::ClassParams = {
	&UWarriorHeroGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorHeroGameplayAbility>()
{
	return UWarriorHeroGameplayAbility::StaticClass();
}
UWarriorHeroGameplayAbility::UWarriorHeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroGameplayAbility);
UWarriorHeroGameplayAbility::~UWarriorHeroGameplayAbility() {}
// End Class UWarriorHeroGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroGameplayAbility, UWarriorHeroGameplayAbility::StaticClass, TEXT("UWarriorHeroGameplayAbility"), &Z_Registration_Info_UClass_UWarriorHeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroGameplayAbility), 1626953750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_502490644(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
