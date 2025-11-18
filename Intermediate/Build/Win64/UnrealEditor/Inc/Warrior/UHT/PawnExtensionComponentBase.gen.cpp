// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PawnExtensionComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePawnExtensionComponentBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPawnExtensionComponentBase **********************************************
void UPawnExtensionComponentBase::StaticRegisterNativesUPawnExtensionComponentBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPawnExtensionComponentBase;
UClass* UPawnExtensionComponentBase::GetPrivateStaticClass()
{
	using TClass = UPawnExtensionComponentBase;
	if (!Z_Registration_Info_UClass_UPawnExtensionComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PawnExtensionComponentBase"),
			Z_Registration_Info_UClass_UPawnExtensionComponentBase.InnerSingleton,
			StaticRegisterNativesUPawnExtensionComponentBase,
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
	return Z_Registration_Info_UClass_UPawnExtensionComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister()
{
	return UPawnExtensionComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPawnExtensionComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PawnExtensionComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/PawnExtensionComponentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnExtensionComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams = {
	&UPawnExtensionComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnExtensionComponentBase()
{
	if (!Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton, Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton;
}
UPawnExtensionComponentBase::UPawnExtensionComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnExtensionComponentBase);
UPawnExtensionComponentBase::~UPawnExtensionComponentBase() {}
// ********** End Class UPawnExtensionComponentBase ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnExtensionComponentBase, UPawnExtensionComponentBase::StaticClass, TEXT("UPawnExtensionComponentBase"), &Z_Registration_Info_UClass_UPawnExtensionComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnExtensionComponentBase), 2397230615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h__Script_Warrior_2662436629(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_PawnExtensionComponentBase_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
