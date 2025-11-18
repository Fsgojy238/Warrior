// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"

#ifdef WARRIOR_DataAsset_HeroStartUpData_generated_h
#error "DataAsset_HeroStartUpData.generated.h already included, missing '#pragma once' in DataAsset_HeroStartUpData.h"
#endif
#define WARRIOR_DataAsset_HeroStartUpData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataAsset_HeroStartUpData ***********************************************
WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAsset_HeroStartUpData(); \
	friend struct Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataAsset_HeroStartUpData, UDataAsset_StartUpDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister) \
	DECLARE_SERIALIZER(UDataAsset_HeroStartUpData)


#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataAsset_HeroStartUpData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataAsset_HeroStartUpData(UDataAsset_HeroStartUpData&&) = delete; \
	UDataAsset_HeroStartUpData(const UDataAsset_HeroStartUpData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataAsset_HeroStartUpData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset_HeroStartUpData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset_HeroStartUpData) \
	NO_API virtual ~UDataAsset_HeroStartUpData();


#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataAsset_HeroStartUpData;

// ********** End Class UDataAsset_HeroStartUpData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
