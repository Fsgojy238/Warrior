// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/PickUps/WarriorStoneBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorStoneBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorStoneBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorStoneBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorStoneBase Function BP_OnStoneConsumed ****************************
static FName NAME_AWarriorStoneBase_BP_OnStoneConsumed = FName(TEXT("BP_OnStoneConsumed"));
void AWarriorStoneBase::BP_OnStoneConsumed()
{
	UFunction* Func = FindFunctionChecked(NAME_AWarriorStoneBase_BP_OnStoneConsumed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Stone Consumed" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorStoneBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWarriorStoneBase, nullptr, "BP_OnStoneConsumed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AWarriorStoneBase Function BP_OnStoneConsumed ******************************

// ********** Begin Class AWarriorStoneBase ********************************************************
void AWarriorStoneBase::StaticRegisterNativesAWarriorStoneBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorStoneBase;
UClass* AWarriorStoneBase::GetPrivateStaticClass()
{
	using TClass = AWarriorStoneBase;
	if (!Z_Registration_Info_UClass_AWarriorStoneBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorStoneBase"),
			Z_Registration_Info_UClass_AWarriorStoneBase.InnerSingleton,
			StaticRegisterNativesAWarriorStoneBase,
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
	return Z_Registration_Info_UClass_AWarriorStoneBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorStoneBase_NoRegister()
{
	return AWarriorStoneBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorStoneBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/PickUps/WarriorStoneBase.h" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorStoneBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoneGameplayEffectClass_MetaData[] = {
		{ "Category", "WarriorStoneBase" },
		{ "ModuleRelativePath", "Public/Items/PickUps/WarriorStoneBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StoneGameplayEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorStoneBase_BP_OnStoneConsumed, "BP_OnStoneConsumed" }, // 112348571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorStoneBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWarriorStoneBase_Statics::NewProp_StoneGameplayEffectClass = { "StoneGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorStoneBase, StoneGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoneGameplayEffectClass_MetaData), NewProp_StoneGameplayEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorStoneBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorStoneBase_Statics::NewProp_StoneGameplayEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorStoneBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorPickUpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorStoneBase_Statics::ClassParams = {
	&AWarriorStoneBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorStoneBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorStoneBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorStoneBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorStoneBase()
{
	if (!Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton, Z_Construct_UClass_AWarriorStoneBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorStoneBase.OuterSingleton;
}
AWarriorStoneBase::AWarriorStoneBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorStoneBase);
AWarriorStoneBase::~AWarriorStoneBase() {}
// ********** End Class AWarriorStoneBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorStoneBase, AWarriorStoneBase::StaticClass, TEXT("AWarriorStoneBase"), &Z_Registration_Info_UClass_AWarriorStoneBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorStoneBase), 2729670334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h__Script_Warrior_2873267500(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorStoneBase_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
