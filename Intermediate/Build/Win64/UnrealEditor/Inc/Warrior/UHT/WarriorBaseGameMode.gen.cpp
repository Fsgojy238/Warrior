// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/WarriorBaseGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorBaseGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseGameMode();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorGameDifficulty();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorBaseGameMode *****************************************************
void AWarriorBaseGameMode::StaticRegisterNativesAWarriorBaseGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorBaseGameMode;
UClass* AWarriorBaseGameMode::GetPrivateStaticClass()
{
	using TClass = AWarriorBaseGameMode;
	if (!Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorBaseGameMode"),
			Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton,
			StaticRegisterNativesAWarriorBaseGameMode,
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
	return Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister()
{
	return AWarriorBaseGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorBaseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorBaseGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorBaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDifficulty_MetaData[] = {
		{ "Category", "Game Setting" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorBaseGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorBaseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorBaseGameMode_Statics::NewProp_CurrentDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorBaseGameMode_Statics::NewProp_CurrentDifficulty = { "CurrentDifficulty", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorBaseGameMode, CurrentDifficulty), Z_Construct_UEnum_Warrior_EWarriorGameDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDifficulty_MetaData), NewProp_CurrentDifficulty_MetaData) }; // 1999907421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorBaseGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorBaseGameMode_Statics::NewProp_CurrentDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorBaseGameMode_Statics::NewProp_CurrentDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams = {
	&AWarriorBaseGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorBaseGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorBaseGameMode()
{
	if (!Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton, Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorBaseGameMode);
AWarriorBaseGameMode::~AWarriorBaseGameMode() {}
// ********** End Class AWarriorBaseGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorBaseGameMode, AWarriorBaseGameMode::StaticClass, TEXT("AWarriorBaseGameMode"), &Z_Registration_Info_UClass_AWarriorBaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorBaseGameMode), 1735534624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h__Script_Warrior_287351411(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
