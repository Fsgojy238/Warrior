// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/GameInstances/WarriorGameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister();
WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorGameLevelSet();
// End Cross Module References

// Begin ScriptStruct FWarriorGameLevelSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorGameLevelSet;
class UScriptStruct* FWarriorGameLevelSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorGameLevelSet, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("WarriorGameLevelSet"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.OuterSingleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FWarriorGameLevelSet>()
{
	return FWarriorGameLevelSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelTag_MetaData[] = {
		{ "Category", "GameData.Level" },
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "WarriorGameLevelSet" },
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorGameLevelSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::NewProp_LevelTag = { "LevelTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorGameLevelSet, LevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelTag_MetaData), NewProp_LevelTag_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorGameLevelSet, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::NewProp_LevelTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	&NewStructOps,
	"WarriorGameLevelSet",
	Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::PropPointers),
	sizeof(FWarriorGameLevelSet),
	alignof(FWarriorGameLevelSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorGameLevelSet()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.InnerSingleton, Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorGameLevelSet.InnerSingleton;
}
// End ScriptStruct FWarriorGameLevelSet

// Begin Class UWarriorGameInstance Function GetGameLevelByTag
struct Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics
{
	struct WarriorGameInstance_eventGetGameLevelByTag_Parms
	{
		FGameplayTag InTag;
		TSoftObjectPtr<UWorld> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "GameplayTagFilter", "GameData.Level" },
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameInstance_eventGetGameLevelByTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameInstance_eventGetGameLevelByTag_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::NewProp_InTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorGameInstance, nullptr, "GetGameLevelByTag", nullptr, nullptr, Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::WarriorGameInstance_eventGetGameLevelByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::WarriorGameInstance_eventGetGameLevelByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameInstance::execGetGameLevelByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UWorld>*)Z_Param__Result=P_THIS->GetGameLevelByTag(Z_Param_InTag);
	P_NATIVE_END;
}
// End Class UWarriorGameInstance Function GetGameLevelByTag

// Begin Class UWarriorGameInstance
void UWarriorGameInstance::StaticRegisterNativesUWarriorGameInstance()
{
	UClass* Class = UWarriorGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameLevelByTag", &UWarriorGameInstance::execGetGameLevelByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorGameInstance);
UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister()
{
	return UWarriorGameInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameInstances/WarriorGameInstance.h" },
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameLevelSets_MetaData[] = {
		{ "Category", "WarriorGameInstance" },
		{ "ModuleRelativePath", "Public/GameInstances/WarriorGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameLevelSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameLevelSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorGameInstance_GetGameLevelByTag, "GetGameLevelByTag" }, // 496974751
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorGameInstance_Statics::NewProp_GameLevelSets_Inner = { "GameLevelSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorGameLevelSet, METADATA_PARAMS(0, nullptr) }; // 1356966709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWarriorGameInstance_Statics::NewProp_GameLevelSets = { "GameLevelSets", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorGameInstance, GameLevelSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameLevelSets_MetaData), NewProp_GameLevelSets_MetaData) }; // 1356966709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameInstance_Statics::NewProp_GameLevelSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameInstance_Statics::NewProp_GameLevelSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameInstance_Statics::ClassParams = {
	&UWarriorGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWarriorGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton, Z_Construct_UClass_UWarriorGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameInstance.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorGameInstance>()
{
	return UWarriorGameInstance::StaticClass();
}
UWarriorGameInstance::UWarriorGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameInstance);
UWarriorGameInstance::~UWarriorGameInstance() {}
// End Class UWarriorGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorGameLevelSet::StaticStruct, Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics::NewStructOps, TEXT("WarriorGameLevelSet"), &Z_Registration_Info_UScriptStruct_WarriorGameLevelSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorGameLevelSet), 1356966709U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameInstance, UWarriorGameInstance::StaticClass, TEXT("UWarriorGameInstance"), &Z_Registration_Info_UClass_UWarriorGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameInstance), 1999198945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_459240324(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
