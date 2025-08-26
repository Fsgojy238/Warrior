// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Characters/WarriorEnemyCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorEnemyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
// End Cross Module References

// Begin Class AWarriorEnemyCharacter Function OnBodyCollisionBoxBeginOverlap
struct Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics
{
	struct WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms), &Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorEnemyCharacter, nullptr, "OnBodyCollisionBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::WarriorEnemyCharacter_eventOnBodyCollisionBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorEnemyCharacter::execOnBodyCollisionBoxBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBodyCollisionBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWarriorEnemyCharacter Function OnBodyCollisionBoxBeginOverlap

// Begin Class AWarriorEnemyCharacter
void AWarriorEnemyCharacter::StaticRegisterNativesAWarriorEnemyCharacter()
{
	UClass* Class = AWarriorEnemyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBodyCollisionBoxBeginOverlap", &AWarriorEnemyCharacter::execOnBodyCollisionBoxBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollisionBox_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollisionBoxAttachBoneName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandCollisionBox_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandCollisionBoxAttachBoneName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyUIComponent_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHealthWidgetComponent_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandCollisionBox;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandCollisionBoxAttachBoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandCollisionBox;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandCollisionBoxAttachBoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyUIComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHealthWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorEnemyCharacter_OnBodyCollisionBoxBeginOverlap, "OnBodyCollisionBoxBeginOverlap" }, // 1910144334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatComponent_MetaData), NewProp_EnemyCombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_LeftHandCollisionBox = { "LeftHandCollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, LeftHandCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandCollisionBox_MetaData), NewProp_LeftHandCollisionBox_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_LeftHandCollisionBoxAttachBoneName = { "LeftHandCollisionBoxAttachBoneName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, LeftHandCollisionBoxAttachBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandCollisionBoxAttachBoneName_MetaData), NewProp_LeftHandCollisionBoxAttachBoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_RightHandCollisionBox = { "RightHandCollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, RightHandCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandCollisionBox_MetaData), NewProp_RightHandCollisionBox_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_RightHandCollisionBoxAttachBoneName = { "RightHandCollisionBoxAttachBoneName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, RightHandCollisionBoxAttachBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandCollisionBoxAttachBoneName_MetaData), NewProp_RightHandCollisionBoxAttachBoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyUIComponent = { "EnemyUIComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyUIComponent), Z_Construct_UClass_UEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyUIComponent_MetaData), NewProp_EnemyUIComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyHealthWidgetComponent = { "EnemyHealthWidgetComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyHealthWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyHealthWidgetComponent_MetaData), NewProp_EnemyHealthWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_LeftHandCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_LeftHandCollisionBoxAttachBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_RightHandCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_RightHandCollisionBoxAttachBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyUIComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyHealthWidgetComponent,
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
	FuncInfo,
	Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AWarriorEnemyCharacter, AWarriorEnemyCharacter::StaticClass, TEXT("AWarriorEnemyCharacter"), &Z_Registration_Info_UClass_AWarriorEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorEnemyCharacter), 253522206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_2651780074(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorEnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
