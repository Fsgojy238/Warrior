// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/UI/PawnUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnPercentChangedDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnPercentChangedDelegate_Parms
	{
		float NewPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/PawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnPercentChangedDelegate_Parms, NewPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::NewProp_NewPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnPercentChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnPercentChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnPercentChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPercentChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPercentChangedDelegate, float NewPercent)
{
	struct _Script_Warrior_eventOnPercentChangedDelegate_Parms
	{
		float NewPercent;
	};
	_Script_Warrior_eventOnPercentChangedDelegate_Parms Parms;
	Parms.NewPercent=NewPercent;
	OnPercentChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPercentChangedDelegate

// Begin Class UPawnUIComponent
void UPawnUIComponent::StaticRegisterNativesUPawnUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnUIComponent);
UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister()
{
	return UPawnUIComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/PawnUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/PawnUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/PawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentHealthChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnUIComponent_Statics::NewProp_OnCurrentHealthChanged = { "OnCurrentHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnUIComponent, OnCurrentHealthChanged), Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentHealthChanged_MetaData), NewProp_OnCurrentHealthChanged_MetaData) }; // 2445266534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnUIComponent_Statics::NewProp_OnCurrentHealthChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUIComponent_Statics::ClassParams = {
	&UPawnUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPawnUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnUIComponent()
{
	if (!Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton, Z_Construct_UClass_UPawnUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UPawnUIComponent>()
{
	return UPawnUIComponent::StaticClass();
}
UPawnUIComponent::UPawnUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUIComponent);
UPawnUIComponent::~UPawnUIComponent() {}
// End Class UPawnUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUIComponent, UPawnUIComponent::StaticClass, TEXT("UPawnUIComponent"), &Z_Registration_Info_UClass_UPawnUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUIComponent), 4199148379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_2494304369(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
