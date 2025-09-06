// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_PickUpStones() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorStoneBase_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones();
WARRIOR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
// End Cross Module References

// Begin Class UHeroGameplayAbility_PickUpStones Function CollectStones
struct Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin UGameplayAbility Interface.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_PickUpStones, nullptr, "CollectStones", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_PickUpStones::execCollectStones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectStones();
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_PickUpStones Function CollectStones

// Begin Class UHeroGameplayAbility_PickUpStones Function ConsumeStones
struct Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_PickUpStones, nullptr, "ConsumeStones", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_PickUpStones::execConsumeStones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeStones();
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_PickUpStones Function ConsumeStones

// Begin Class UHeroGameplayAbility_PickUpStones
void UHeroGameplayAbility_PickUpStones::StaticRegisterNativesUHeroGameplayAbility_PickUpStones()
{
	UClass* Class = UHeroGameplayAbility_PickUpStones::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectStones", &UHeroGameplayAbility_PickUpStones::execCollectStones },
		{ "ConsumeStones", &UHeroGameplayAbility_PickUpStones::execConsumeStones },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility_PickUpStones);
UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_NoRegister()
{
	return UHeroGameplayAbility_PickUpStones::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedStones_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceDistance_MetaData[] = {
		{ "Category", "HeroGameplayAbility_PickUpStones" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoneTraceChannel_MetaData[] = {
		{ "Category", "HeroGameplayAbility_PickUpStones" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TarceBoxSize_MetaData[] = {
		{ "Category", "HeroGameplayAbility_PickUpStones" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShape_MetaData[] = {
		{ "Category", "HeroGameplayAbility_PickUpStones" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_PickUpStones.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectedStones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectedStones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxTraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StoneTraceChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StoneTraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TarceBoxSize;
	static void NewProp_bDrawDebugShape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_CollectStones, "CollectStones" }, // 3230618370
		{ &Z_Construct_UFunction_UHeroGameplayAbility_PickUpStones_ConsumeStones, "ConsumeStones" }, // 48039712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_PickUpStones>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_CollectedStones_Inner = { "CollectedStones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWarriorStoneBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_CollectedStones = { "CollectedStones", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_PickUpStones, CollectedStones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedStones_MetaData), NewProp_CollectedStones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_BoxTraceDistance = { "BoxTraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_PickUpStones, BoxTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceDistance_MetaData), NewProp_BoxTraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_StoneTraceChannel_Inner = { "StoneTraceChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_StoneTraceChannel = { "StoneTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_PickUpStones, StoneTraceChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoneTraceChannel_MetaData), NewProp_StoneTraceChannel_MetaData) }; // 1798967895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_TarceBoxSize = { "TarceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_PickUpStones, TarceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TarceBoxSize_MetaData), NewProp_TarceBoxSize_MetaData) };
void Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_bDrawDebugShape_SetBit(void* Obj)
{
	((UHeroGameplayAbility_PickUpStones*)Obj)->bDrawDebugShape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_bDrawDebugShape = { "bDrawDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility_PickUpStones), &Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_bDrawDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShape_MetaData), NewProp_bDrawDebugShape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_CollectedStones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_CollectedStones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_BoxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_StoneTraceChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_StoneTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_TarceBoxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::NewProp_bDrawDebugShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::ClassParams = {
	&UHeroGameplayAbility_PickUpStones::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility_PickUpStones()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_PickUpStones_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroGameplayAbility_PickUpStones>()
{
	return UHeroGameplayAbility_PickUpStones::StaticClass();
}
UHeroGameplayAbility_PickUpStones::UHeroGameplayAbility_PickUpStones(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_PickUpStones);
UHeroGameplayAbility_PickUpStones::~UHeroGameplayAbility_PickUpStones() {}
// End Class UHeroGameplayAbility_PickUpStones

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility_PickUpStones, UHeroGameplayAbility_PickUpStones::StaticClass, TEXT("UHeroGameplayAbility_PickUpStones"), &Z_Registration_Info_UClass_UHeroGameplayAbility_PickUpStones, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility_PickUpStones), 2200382159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_2175898328(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_HeroGameplayAbility_PickUpStones_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
