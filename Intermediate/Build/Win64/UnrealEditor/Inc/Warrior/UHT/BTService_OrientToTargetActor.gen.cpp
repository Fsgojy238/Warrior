// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AI/BTService_OrientToTargetActor.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_OrientToTargetActor() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor();
WARRIOR_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister();
// End Cross Module References

// Begin Class UBTService_OrientToTargetActor
void UBTService_OrientToTargetActor::StaticRegisterNativesUBTService_OrientToTargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_OrientToTargetActor);
UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister()
{
	return UBTService_OrientToTargetActor::StaticClass();
}
struct Z_Construct_UClass_UBTService_OrientToTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTService_OrientToTargetActor.h" },
		{ "ModuleRelativePath", "Public/AI/BTService_OrientToTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActorKey_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/AI/BTService_OrientToTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/AI/BTService_OrientToTargetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetActorKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_OrientToTargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey = { "InTargetActorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_OrientToTargetActor, InTargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActorKey_MetaData), NewProp_InTargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_OrientToTargetActor, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams = {
	&UBTService_OrientToTargetActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_OrientToTargetActor()
{
	if (!Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton, Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UBTService_OrientToTargetActor>()
{
	return UBTService_OrientToTargetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_OrientToTargetActor);
UBTService_OrientToTargetActor::~UBTService_OrientToTargetActor() {}
// End Class UBTService_OrientToTargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTService_OrientToTargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_OrientToTargetActor, UBTService_OrientToTargetActor::StaticClass, TEXT("UBTService_OrientToTargetActor"), &Z_Registration_Info_UClass_UBTService_OrientToTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_OrientToTargetActor), 3001957366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTService_OrientToTargetActor_h_3323919116(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTService_OrientToTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AI_BTService_OrientToTargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
