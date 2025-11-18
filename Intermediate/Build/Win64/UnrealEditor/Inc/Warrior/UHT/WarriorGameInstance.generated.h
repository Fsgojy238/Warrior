// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInstances/WarriorGameInstance.h"

#ifdef WARRIOR_WarriorGameInstance_generated_h
#error "WarriorGameInstance.generated.h already included, missing '#pragma once' in WarriorGameInstance.h"
#endif
#define WARRIOR_WarriorGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWorld;
struct FGameplayTag;

// ********** Begin ScriptStruct FWarriorGameLevelSet **********************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorGameLevelSet_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct();


struct FWarriorGameLevelSet;
// ********** End ScriptStruct FWarriorGameLevelSet ************************************************

// ********** Begin Class UWarriorGameInstance *****************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameLevelByTag);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorGameInstance(); \
	friend struct Z_Construct_UClass_UWarriorGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UWarriorGameInstance)


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorGameInstance(UWarriorGameInstance&&) = delete; \
	UWarriorGameInstance(const UWarriorGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorGameInstance) \
	NO_API virtual ~UWarriorGameInstance();


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_31_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorGameInstance;

// ********** End Class UWarriorGameInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_GameInstances_WarriorGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
