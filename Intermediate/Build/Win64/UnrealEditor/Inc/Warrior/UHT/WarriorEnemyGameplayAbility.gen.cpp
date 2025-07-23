// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorEnemyGameplayAbility() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
// End Cross Module References

// Begin Class UWarriorEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo
struct Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics
{
	struct WarriorEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms
	{
		AWarriorEnemyCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorEnemyGameplayAbility, nullptr, "GetEnemyCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::WarriorEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::WarriorEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorEnemyCharacter**)Z_Param__Result=P_THIS->GetEnemyCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo

// Begin Class UWarriorEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics
{
	struct WarriorEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms
	{
		UEnemyCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorEnemyGameplayAbility, nullptr, "GetEnemyCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::WarriorEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::WarriorEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnemyCombatComponent**)Z_Param__Result=P_THIS->GetEnemyCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo

// Begin Class UWarriorEnemyGameplayAbility
void UWarriorEnemyGameplayAbility::StaticRegisterNativesUWarriorEnemyGameplayAbility()
{
	UClass* Class = UWarriorEnemyGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnemyCharacterFromActorInfo", &UWarriorEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo },
		{ "GetEnemyCombatComponentFromActorInfo", &UWarriorEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorEnemyGameplayAbility);
UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister()
{
	return UWarriorEnemyGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCharacterFromActorInfo, "GetEnemyCharacterFromActorInfo" }, // 2689394657
		{ &Z_Construct_UFunction_UWarriorEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo, "GetEnemyCombatComponentFromActorInfo" }, // 3936079996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorEnemyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::ClassParams = {
	&UWarriorEnemyGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorEnemyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorEnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorEnemyGameplayAbility.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorEnemyGameplayAbility>()
{
	return UWarriorEnemyGameplayAbility::StaticClass();
}
UWarriorEnemyGameplayAbility::UWarriorEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorEnemyGameplayAbility);
UWarriorEnemyGameplayAbility::~UWarriorEnemyGameplayAbility() {}
// End Class UWarriorEnemyGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorEnemyGameplayAbility, UWarriorEnemyGameplayAbility::StaticClass, TEXT("UWarriorEnemyGameplayAbility"), &Z_Registration_Info_UClass_UWarriorEnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorEnemyGameplayAbility), 2700125277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_250825015(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
