// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroLinkedAnimLayer() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
// End Cross Module References

// Begin Class UWarriorHeroLinkedAnimLayer Function GetHeroAnimInstance
struct Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics
{
	struct WarriorHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms
	{
		UWarriorHeroAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroLinkedAnimLayer, nullptr, "GetHeroAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::WarriorHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::WarriorHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroLinkedAnimLayer::execGetHeroAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWarriorHeroAnimInstance**)Z_Param__Result=P_THIS->GetHeroAnimInstance();
	P_NATIVE_END;
}
// End Class UWarriorHeroLinkedAnimLayer Function GetHeroAnimInstance

// Begin Class UWarriorHeroLinkedAnimLayer
void UWarriorHeroLinkedAnimLayer::StaticRegisterNativesUWarriorHeroLinkedAnimLayer()
{
	UClass* Class = UWarriorHeroLinkedAnimLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroAnimInstance", &UWarriorHeroLinkedAnimLayer::execGetHeroAnimInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroLinkedAnimLayer);
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister()
{
	return UWarriorHeroLinkedAnimLayer::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorHeroLinkedAnimLayer_GetHeroAnimInstance, "GetHeroAnimInstance" }, // 2678344261
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams = {
	&UWarriorHeroLinkedAnimLayer::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorHeroLinkedAnimLayer>()
{
	return UWarriorHeroLinkedAnimLayer::StaticClass();
}
UWarriorHeroLinkedAnimLayer::UWarriorHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroLinkedAnimLayer);
UWarriorHeroLinkedAnimLayer::~UWarriorHeroLinkedAnimLayer() {}
// End Class UWarriorHeroLinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroLinkedAnimLayer, UWarriorHeroLinkedAnimLayer::StaticClass, TEXT("UWarriorHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroLinkedAnimLayer), 3803412676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_4171882647(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
