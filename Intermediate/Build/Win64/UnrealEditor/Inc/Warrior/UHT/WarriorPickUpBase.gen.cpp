// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Items/PickUps/WarriorPickUpBase.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorPickUpBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase_NoRegister();
// End Cross Module References

// Begin Class AWarriorPickUpBase Function OnPickUpCollisionSphereBeginOverlap
struct Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics
{
	struct WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorPickUpBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms), &Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorPickUpBase, nullptr, "OnPickUpCollisionSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::WarriorPickUpBase_eventOnPickUpCollisionSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorPickUpBase::execOnPickUpCollisionSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickUpCollisionSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWarriorPickUpBase Function OnPickUpCollisionSphereBeginOverlap

// Begin Class AWarriorPickUpBase
void AWarriorPickUpBase::StaticRegisterNativesAWarriorPickUpBase()
{
	UClass* Class = AWarriorPickUpBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPickUpCollisionSphereBeginOverlap", &AWarriorPickUpBase::execOnPickUpCollisionSphereBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorPickUpBase);
UClass* Z_Construct_UClass_AWarriorPickUpBase_NoRegister()
{
	return AWarriorPickUpBase::StaticClass();
}
struct Z_Construct_UClass_AWarriorPickUpBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/PickUps/WarriorPickUpBase.h" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorPickUpBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpCollisionSphere_MetaData[] = {
		{ "Category", "Pick Up Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorPickUpBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpCollisionSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorPickUpBase_OnPickUpCollisionSphereBeginOverlap, "OnPickUpCollisionSphereBeginOverlap" }, // 3784659596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorPickUpBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorPickUpBase_Statics::NewProp_PickUpCollisionSphere = { "PickUpCollisionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorPickUpBase, PickUpCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpCollisionSphere_MetaData), NewProp_PickUpCollisionSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorPickUpBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorPickUpBase_Statics::NewProp_PickUpCollisionSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorPickUpBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorPickUpBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorPickUpBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorPickUpBase_Statics::ClassParams = {
	&AWarriorPickUpBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorPickUpBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorPickUpBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorPickUpBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorPickUpBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorPickUpBase()
{
	if (!Z_Registration_Info_UClass_AWarriorPickUpBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorPickUpBase.OuterSingleton, Z_Construct_UClass_AWarriorPickUpBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorPickUpBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorPickUpBase>()
{
	return AWarriorPickUpBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorPickUpBase);
AWarriorPickUpBase::~AWarriorPickUpBase() {}
// End Class AWarriorPickUpBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorPickUpBase, AWarriorPickUpBase::StaticClass, TEXT("AWarriorPickUpBase"), &Z_Registration_Info_UClass_AWarriorPickUpBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorPickUpBase), 4181855692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_3718596338(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
