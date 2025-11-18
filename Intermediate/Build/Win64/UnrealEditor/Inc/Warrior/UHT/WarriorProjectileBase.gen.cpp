// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/WarriorProjectileBase.h"
#include "Engine/HitResult.h"
#include "GameplayEffectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorProjectileBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorProjectileBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorProjectileBase_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EProjectileDamagePolicy();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectileDamagePolicy ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileDamagePolicy;
static UEnum* EProjectileDamagePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EProjectileDamagePolicy"));
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EProjectileDamagePolicy>()
{
	return EProjectileDamagePolicy_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
		{ "OnBeginOverlap.Name", "EProjectileDamagePolicy::OnBeginOverlap" },
		{ "OnHit.Name", "EProjectileDamagePolicy::OnHit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileDamagePolicy::OnHit", (int64)EProjectileDamagePolicy::OnHit },
		{ "EProjectileDamagePolicy::OnBeginOverlap", (int64)EProjectileDamagePolicy::OnBeginOverlap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EProjectileDamagePolicy",
	"EProjectileDamagePolicy",
	Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EProjectileDamagePolicy()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton, Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton;
}
// ********** End Enum EProjectileDamagePolicy *****************************************************

// ********** Begin Class AWarriorProjectileBase Function BP_OnSpawnProjectileHitFX ****************
struct WarriorProjectileBase_eventBP_OnSpawnProjectileHitFX_Parms
{
	FVector HitLocation;
};
static FName NAME_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX = FName(TEXT("BP_OnSpawnProjectileHitFX"));
void AWarriorProjectileBase::BP_OnSpawnProjectileHitFX(FVector const& HitLocation)
{
	WarriorProjectileBase_eventBP_OnSpawnProjectileHitFX_Parms Parms;
	Parms.HitLocation=HitLocation;
	UFunction* Func = FindFunctionChecked(NAME_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Spawn Projectile Hit FX" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventBP_OnSpawnProjectileHitFX_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWarriorProjectileBase, nullptr, "BP_OnSpawnProjectileHitFX", Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::PropPointers), sizeof(WarriorProjectileBase_eventBP_OnSpawnProjectileHitFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WarriorProjectileBase_eventBP_OnSpawnProjectileHitFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AWarriorProjectileBase Function BP_OnSpawnProjectileHitFX ******************

// ********** Begin Class AWarriorProjectileBase Function OnProjectileBeginOverlap *****************
struct Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics
{
	struct WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms), &Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWarriorProjectileBase, nullptr, "OnProjectileBeginOverlap", Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::WarriorProjectileBase_eventOnProjectileBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorProjectileBase::execOnProjectileBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AWarriorProjectileBase Function OnProjectileBeginOverlap *******************

// ********** Begin Class AWarriorProjectileBase Function OnProjectileHit **************************
struct Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics
{
	struct WarriorProjectileBase_eventOnProjectileHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorProjectileBase_eventOnProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWarriorProjectileBase, nullptr, "OnProjectileHit", Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::WarriorProjectileBase_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::WarriorProjectileBase_eventOnProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorProjectileBase::execOnProjectileHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AWarriorProjectileBase Function OnProjectileHit ****************************

// ********** Begin Class AWarriorProjectileBase ***************************************************
void AWarriorProjectileBase::StaticRegisterNativesAWarriorProjectileBase()
{
	UClass* Class = AWarriorProjectileBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnProjectileBeginOverlap", &AWarriorProjectileBase::execOnProjectileBeginOverlap },
		{ "OnProjectileHit", &AWarriorProjectileBase::execOnProjectileHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorProjectileBase;
UClass* AWarriorProjectileBase::GetPrivateStaticClass()
{
	using TClass = AWarriorProjectileBase;
	if (!Z_Registration_Info_UClass_AWarriorProjectileBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorProjectileBase"),
			Z_Registration_Info_UClass_AWarriorProjectileBase.InnerSingleton,
			StaticRegisterNativesAWarriorProjectileBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AWarriorProjectileBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorProjectileBase_NoRegister()
{
	return AWarriorProjectileBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/WarriorProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileNiagaraComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamagePolicy_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamageEffectSpecHandle_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileNiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileDamagePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileDamagePolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileDamageEffectSpecHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorProjectileBase_BP_OnSpawnProjectileHitFX, "BP_OnSpawnProjectileHitFX" }, // 3899506609
		{ &Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileBeginOverlap, "OnProjectileBeginOverlap" }, // 4028279037
		{ &Z_Construct_UFunction_AWarriorProjectileBase_OnProjectileHit, "OnProjectileHit" }, // 3741265617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileCollisionBox = { "ProjectileCollisionBox", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCollisionBox_MetaData), NewProp_ProjectileCollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileNiagaraComponent = { "ProjectileNiagaraComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileNiagaraComponent_MetaData), NewProp_ProjectileNiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComp_MetaData), NewProp_ProjectileMovementComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy = { "ProjectileDamagePolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileDamagePolicy), Z_Construct_UEnum_Warrior_EProjectileDamagePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamagePolicy_MetaData), NewProp_ProjectileDamagePolicy_MetaData) }; // 2847725561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle = { "ProjectileDamageEffectSpecHandle", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileDamageEffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamageEffectSpecHandle_MetaData), NewProp_ProjectileDamageEffectSpecHandle_MetaData) }; // 4275563785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorProjectileBase_Statics::ClassParams = {
	&AWarriorProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorProjectileBase()
{
	if (!Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton, Z_Construct_UClass_AWarriorProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorProjectileBase);
AWarriorProjectileBase::~AWarriorProjectileBase() {}
// ********** End Class AWarriorProjectileBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileDamagePolicy_StaticEnum, TEXT("EProjectileDamagePolicy"), &Z_Registration_Info_UEnum_EProjectileDamagePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2847725561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorProjectileBase, AWarriorProjectileBase::StaticClass, TEXT("AWarriorProjectileBase"), &Z_Registration_Info_UClass_AWarriorProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorProjectileBase), 2395225568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_4214666344(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h__Script_Warrior_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
