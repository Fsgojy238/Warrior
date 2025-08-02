// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Widegts/WarriorWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorWidgetBase() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister();
// End Cross Module References

// Begin Class UWarriorWidgetBase Function BP_OnOwningHeroUIComponentInitialized
struct WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms
{
	UHeroUIComponent* OwningHeroUIComponent;
};
static const FName NAME_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized = FName(TEXT("BP_OnOwningHeroUIComponentInitialized"));
void UWarriorWidgetBase::BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* OwningHeroUIComponent)
{
	WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms Parms;
	Parms.OwningHeroUIComponent=OwningHeroUIComponent;
	UFunction* Func = FindFunctionChecked(NAME_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Hero UI Component Initialized" },
		{ "ModuleRelativePath", "Public/Widegts/WarriorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent = { "OwningHeroUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms, OwningHeroUIComponent), Z_Construct_UClass_UHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroUIComponent_MetaData), NewProp_OwningHeroUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorWidgetBase, nullptr, "BP_OnOwningHeroUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWarriorWidgetBase Function BP_OnOwningHeroUIComponentInitialized

// Begin Class UWarriorWidgetBase
void UWarriorWidgetBase::StaticRegisterNativesUWarriorWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorWidgetBase);
UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister()
{
	return UWarriorWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UWarriorWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widegts/WarriorWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widegts/WarriorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized, "BP_OnOwningHeroUIComponentInitialized" }, // 1797497159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorWidgetBase_Statics::ClassParams = {
	&UWarriorWidgetBase::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorWidgetBase()
{
	if (!Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton, Z_Construct_UClass_UWarriorWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorWidgetBase>()
{
	return UWarriorWidgetBase::StaticClass();
}
UWarriorWidgetBase::UWarriorWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorWidgetBase);
UWarriorWidgetBase::~UWarriorWidgetBase() {}
// End Class UWarriorWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorWidgetBase, UWarriorWidgetBase::StaticClass, TEXT("UWarriorWidgetBase"), &Z_Registration_Info_UClass_UWarriorWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorWidgetBase), 4001096907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_1990836372(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
