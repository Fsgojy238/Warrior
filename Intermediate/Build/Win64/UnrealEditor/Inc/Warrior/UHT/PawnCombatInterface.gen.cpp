// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/PawnCombatInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePawnCombatInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatInterface();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPawnCombatInterface *************************************************
void UPawnCombatInterface::StaticRegisterNativesUPawnCombatInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPawnCombatInterface;
UClass* UPawnCombatInterface::GetPrivateStaticClass()
{
	using TClass = UPawnCombatInterface;
	if (!Z_Registration_Info_UClass_UPawnCombatInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PawnCombatInterface"),
			Z_Registration_Info_UClass_UPawnCombatInterface.InnerSingleton,
			StaticRegisterNativesUPawnCombatInterface,
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
	return Z_Registration_Info_UClass_UPawnCombatInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister()
{
	return UPawnCombatInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPawnCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PawnCombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnCombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams = {
	&UPawnCombatInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnCombatInterface()
{
	if (!Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton, Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton;
}
UPawnCombatInterface::UPawnCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnCombatInterface);
// ********** End Interface UPawnCombatInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnCombatInterface, UPawnCombatInterface::StaticClass, TEXT("UPawnCombatInterface"), &Z_Registration_Info_UClass_UPawnCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnCombatInterface), 90420462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h__Script_Warrior_1186217225(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
