// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/UI/EnemyUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister();
// End Cross Module References

// Begin Class UEnemyUIComponent Function RegisterEnemyDrawnWidget
struct Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics
{
	struct EnemyUIComponent_eventRegisterEnemyDrawnWidget_Parms
	{
		UWarriorWidgetBase* InWidgetToRegister;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetToRegister_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetToRegister;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::NewProp_InWidgetToRegister = { "InWidgetToRegister", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyUIComponent_eventRegisterEnemyDrawnWidget_Parms, InWidgetToRegister), Z_Construct_UClass_UWarriorWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetToRegister_MetaData), NewProp_InWidgetToRegister_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::NewProp_InWidgetToRegister,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIComponent, nullptr, "RegisterEnemyDrawnWidget", nullptr, nullptr, Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::EnemyUIComponent_eventRegisterEnemyDrawnWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::EnemyUIComponent_eventRegisterEnemyDrawnWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyUIComponent::execRegisterEnemyDrawnWidget)
{
	P_GET_OBJECT(UWarriorWidgetBase,Z_Param_InWidgetToRegister);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEnemyDrawnWidget(Z_Param_InWidgetToRegister);
	P_NATIVE_END;
}
// End Class UEnemyUIComponent Function RegisterEnemyDrawnWidget

// Begin Class UEnemyUIComponent Function RemoveEnemyDrawnWidgetsIfAny
struct Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIComponent, nullptr, "RemoveEnemyDrawnWidgetsIfAny", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyUIComponent::execRemoveEnemyDrawnWidgetsIfAny)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEnemyDrawnWidgetsIfAny();
	P_NATIVE_END;
}
// End Class UEnemyUIComponent Function RemoveEnemyDrawnWidgetsIfAny

// Begin Class UEnemyUIComponent
void UEnemyUIComponent::StaticRegisterNativesUEnemyUIComponent()
{
	UClass* Class = UEnemyUIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterEnemyDrawnWidget", &UEnemyUIComponent::execRegisterEnemyDrawnWidget },
		{ "RemoveEnemyDrawnWidgetsIfAny", &UEnemyUIComponent::execRemoveEnemyDrawnWidgetsIfAny },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyUIComponent);
UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister()
{
	return UEnemyUIComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/EnemyUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyDrawnWidget, "RegisterEnemyDrawnWidget" }, // 828541195
		{ &Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyDrawnWidgetsIfAny, "RemoveEnemyDrawnWidgetsIfAny" }, // 3772470147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams = {
	&UEnemyUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyUIComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton, Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UEnemyUIComponent>()
{
	return UEnemyUIComponent::StaticClass();
}
UEnemyUIComponent::UEnemyUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUIComponent);
UEnemyUIComponent::~UEnemyUIComponent() {}
// End Class UEnemyUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyUIComponent, UEnemyUIComponent::StaticClass, TEXT("UEnemyUIComponent"), &Z_Registration_Info_UClass_UEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyUIComponent), 2609482459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_365225428(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
