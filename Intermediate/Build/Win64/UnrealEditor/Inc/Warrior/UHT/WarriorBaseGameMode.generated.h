// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorBaseGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_WarriorBaseGameMode_generated_h
#error "WarriorBaseGameMode.generated.h already included, missing '#pragma once' in WarriorBaseGameMode.h"
#endif
#define WARRIOR_WarriorBaseGameMode_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorBaseGameMode(); \
	friend struct Z_Construct_UClass_AWarriorBaseGameMode_Statics; \
public: \
	DECLARE_CLASS(AWarriorBaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorBaseGameMode)


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorBaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorBaseGameMode(AWarriorBaseGameMode&&); \
	AWarriorBaseGameMode(const AWarriorBaseGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorBaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorBaseGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorBaseGameMode) \
	NO_API virtual ~AWarriorBaseGameMode();


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_12_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorBaseGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
