// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AnimInstances/Hero/WarriorHeroAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroAnimInstance() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroAnimInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister();
// End Cross Module References

// Begin Class UWarriorHeroAnimInstance
void UWarriorHeroAnimInstance::StaticRegisterNativesUWarriorHeroAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroAnimInstance);
UClass* Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister()
{
	return UWarriorHeroAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/WarriorHeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroCharacter_MetaData[] = {
		{ "Category", "AnimData|References" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnterRelaxState_MetaData[] = {
		{ "Category", "AnimData|LocalmotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterRelaxStateThreshold_MetaData[] = {
		{ "Category", "AnimData|LocalmotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroCharacter;
	static void NewProp_bShouldEnterRelaxState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnterRelaxState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterRelaxStateThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_OwningHeroCharacter = { "OwningHeroCharacter", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorHeroAnimInstance, OwningHeroCharacter), Z_Construct_UClass_AWarriorHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroCharacter_MetaData), NewProp_OwningHeroCharacter_MetaData) };
void Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit(void* Obj)
{
	((UWarriorHeroAnimInstance*)Obj)->bShouldEnterRelaxState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState = { "bShouldEnterRelaxState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWarriorHeroAnimInstance), &Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldEnterRelaxState_MetaData), NewProp_bShouldEnterRelaxState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold = { "EnterRelaxStateThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorHeroAnimInstance, EnterRelaxStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterRelaxStateThreshold_MetaData), NewProp_EnterRelaxStateThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_OwningHeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorCharacterAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::ClassParams = {
	&UWarriorHeroAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorHeroAnimInstance>()
{
	return UWarriorHeroAnimInstance::StaticClass();
}
UWarriorHeroAnimInstance::UWarriorHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroAnimInstance);
UWarriorHeroAnimInstance::~UWarriorHeroAnimInstance() {}
// End Class UWarriorHeroAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroAnimInstance, UWarriorHeroAnimInstance::StaticClass, TEXT("UWarriorHeroAnimInstance"), &Z_Registration_Info_UClass_UWarriorHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroAnimInstance), 840797203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_1126984349(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
