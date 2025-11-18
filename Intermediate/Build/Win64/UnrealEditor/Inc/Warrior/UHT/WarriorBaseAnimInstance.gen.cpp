// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/WarriorBaseAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorBaseAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorBaseAnimInstance Function DoesOwnerHaveTag ***********************
struct Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics
{
	struct WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms
	{
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb6\xef\xbf\xbdOwningPawn\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb3\xef\xbf\xbd\xef\xbf\xbdtag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdHero\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(Layer)\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimInstances/WarriorBaseAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb6\xef\xbf\xbdOwningPawn\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb3\xef\xbf\xbd\xef\xbf\xbdtag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdHero\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(Layer)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms), &Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWarriorBaseAnimInstance, nullptr, "DoesOwnerHaveTag", Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::WarriorBaseAnimInstance_eventDoesOwnerHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorBaseAnimInstance::execDoesOwnerHaveTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesOwnerHaveTag(Z_Param_TagToCheck);
	P_NATIVE_END;
}
// ********** End Class UWarriorBaseAnimInstance Function DoesOwnerHaveTag *************************

// ********** Begin Class UWarriorBaseAnimInstance *************************************************
void UWarriorBaseAnimInstance::StaticRegisterNativesUWarriorBaseAnimInstance()
{
	UClass* Class = UWarriorBaseAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesOwnerHaveTag", &UWarriorBaseAnimInstance::execDoesOwnerHaveTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorBaseAnimInstance;
UClass* UWarriorBaseAnimInstance::GetPrivateStaticClass()
{
	using TClass = UWarriorBaseAnimInstance;
	if (!Z_Registration_Info_UClass_UWarriorBaseAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorBaseAnimInstance"),
			Z_Registration_Info_UClass_UWarriorBaseAnimInstance.InnerSingleton,
			StaticRegisterNativesUWarriorBaseAnimInstance,
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
	return Z_Registration_Info_UClass_UWarriorBaseAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister()
{
	return UWarriorBaseAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/WarriorBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/WarriorBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorBaseAnimInstance_DoesOwnerHaveTag, "DoesOwnerHaveTag" }, // 2051577214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::ClassParams = {
	&UWarriorBaseAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton;
}
UWarriorBaseAnimInstance::UWarriorBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorBaseAnimInstance);
UWarriorBaseAnimInstance::~UWarriorBaseAnimInstance() {}
// ********** End Class UWarriorBaseAnimInstance ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorBaseAnimInstance, UWarriorBaseAnimInstance::StaticClass, TEXT("UWarriorBaseAnimInstance"), &Z_Registration_Info_UClass_UWarriorBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorBaseAnimInstance), 3509917986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h__Script_Warrior_3294365063(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
