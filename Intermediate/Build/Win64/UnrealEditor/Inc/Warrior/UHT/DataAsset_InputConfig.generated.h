// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/Input/DataAsset_InputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_DataAsset_InputConfig_generated_h
#error "DataAsset_InputConfig.generated.h already included, missing '#pragma once' in DataAsset_InputConfig.h"
#endif
#define WARRIOR_DataAsset_InputConfig_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct();


template<> WARRIOR_API UScriptStruct* StaticStruct<struct FWarriorInputActionConfig>();

#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAsset_InputConfig(); \
	friend struct Z_Construct_UClass_UDataAsset_InputConfig_Statics; \
public: \
	DECLARE_CLASS(UDataAsset_InputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UDataAsset_InputConfig)


#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataAsset_InputConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataAsset_InputConfig(UDataAsset_InputConfig&&); \
	UDataAsset_InputConfig(const UDataAsset_InputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataAsset_InputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset_InputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset_InputConfig) \
	NO_API virtual ~UDataAsset_InputConfig();


#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_26_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_29_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UDataAsset_InputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_DataAssets_Input_DataAsset_InputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
