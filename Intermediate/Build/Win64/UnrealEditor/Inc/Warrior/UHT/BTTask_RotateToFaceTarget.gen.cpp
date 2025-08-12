// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AI/BTTask_RotateToFaceTarget.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget();
WARRIOR_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget_NoRegister();
// End Cross Module References

// Begin Class UBTTask_RotateToFaceTarget
void UBTTask_RotateToFaceTarget::StaticRegisterNativesUBTTask_RotateToFaceTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RotateToFaceTarget);
UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget_NoRegister()
{
	return UBTTask_RotateToFaceTarget::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTTask_RotateToFaceTarget.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RotateToFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnglePrecision_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RotateToFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RotateToFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetToFaceKey_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RotateToFaceTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnglePrecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetToFaceKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToFaceTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision = { "AnglePrecision", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, AnglePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnglePrecision_MetaData), NewProp_AnglePrecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_InTargetToFaceKey = { "InTargetToFaceKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, InTargetToFaceKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetToFaceKey_MetaData), NewProp_InTargetToFaceKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_InTargetToFaceKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::ClassParams = {
	&UBTTask_RotateToFaceTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget()
{
	if (!Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton, Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UBTTask_RotateToFaceTarget>()
{
	return UBTTask_RotateToFaceTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceTarget);
UBTTask_RotateToFaceTarget::~UBTTask_RotateToFaceTarget() {}
// End Class UBTTask_RotateToFaceTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTTask_RotateToFaceTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RotateToFaceTarget, UBTTask_RotateToFaceTarget::StaticClass, TEXT("UBTTask_RotateToFaceTarget"), &Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RotateToFaceTarget), 1078705227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTTask_RotateToFaceTarget_h_3696521396(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTTask_RotateToFaceTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTTask_RotateToFaceTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
