// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Controllers/WarriorAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorAIController();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorAIController_NoRegister();
// End Cross Module References

// Begin Class AWarriorAIController Function OnEnemyPerceptionUpdated
struct Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics
{
	struct WarriorAIController_eventOnEnemyPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAIController_eventOnEnemyPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorAIController_eventOnEnemyPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorAIController, nullptr, "OnEnemyPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::WarriorAIController_eventOnEnemyPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::WarriorAIController_eventOnEnemyPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorAIController::execOnEnemyPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AWarriorAIController Function OnEnemyPerceptionUpdated

// Begin Class AWarriorAIController
void AWarriorAIController::StaticRegisterNativesAWarriorAIController()
{
	UClass* Class = AWarriorAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyPerceptionUpdated", &AWarriorAIController::execOnEnemyPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorAIController);
UClass* Z_Construct_UClass_AWarriorAIController_NoRegister()
{
	return AWarriorAIController::StaticClass();
}
struct Z_Construct_UClass_AWarriorAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/WarriorAIController.h" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPerceptionComponent_MetaData[] = {
		{ "Category", "WarriorAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseConfig_Sight_MetaData[] = {
		{ "Category", "WarriorAIController" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDetourCrowdAvoidance_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetourCrowdAvoidanceQuality_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryRange_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseConfig_Sight;
	static void NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDetourCrowdAvoidance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetourCrowdAvoidanceQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorAIController_OnEnemyPerceptionUpdated, "OnEnemyPerceptionUpdated" }, // 580034833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorAIController_Statics::NewProp_EnemyPerceptionComponent = { "EnemyPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorAIController, EnemyPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPerceptionComponent_MetaData), NewProp_EnemyPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorAIController_Statics::NewProp_AISenseConfig_Sight = { "AISenseConfig_Sight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorAIController, AISenseConfig_Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseConfig_Sight_MetaData), NewProp_AISenseConfig_Sight_MetaData) };
void Z_Construct_UClass_AWarriorAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj)
{
	((AWarriorAIController*)Obj)->bEnableDetourCrowdAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWarriorAIController_Statics::NewProp_bEnableDetourCrowdAvoidance = { "bEnableDetourCrowdAvoidance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWarriorAIController), &Z_Construct_UClass_AWarriorAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDetourCrowdAvoidance_MetaData), NewProp_bEnableDetourCrowdAvoidance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarriorAIController_Statics::NewProp_DetourCrowdAvoidanceQuality = { "DetourCrowdAvoidanceQuality", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorAIController, DetourCrowdAvoidanceQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetourCrowdAvoidanceQuality_MetaData), NewProp_DetourCrowdAvoidanceQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarriorAIController_Statics::NewProp_CollisionQueryRange = { "CollisionQueryRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorAIController, CollisionQueryRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryRange_MetaData), NewProp_CollisionQueryRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIController_Statics::NewProp_EnemyPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIController_Statics::NewProp_AISenseConfig_Sight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIController_Statics::NewProp_bEnableDetourCrowdAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIController_Statics::NewProp_DetourCrowdAvoidanceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIController_Statics::NewProp_CollisionQueryRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorAIController_Statics::ClassParams = {
	&AWarriorAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorAIController()
{
	if (!Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton, Z_Construct_UClass_AWarriorAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorAIController.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorAIController>()
{
	return AWarriorAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorAIController);
AWarriorAIController::~AWarriorAIController() {}
// End Class AWarriorAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorAIController, AWarriorAIController::StaticClass, TEXT("AWarriorAIController"), &Z_Registration_Info_UClass_AWarriorAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorAIController), 3397703705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_1033941447(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
