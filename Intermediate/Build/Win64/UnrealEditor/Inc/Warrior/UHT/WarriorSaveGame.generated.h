// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveGame/WarriorSaveGame.h"

#ifdef WARRIOR_WarriorSaveGame_generated_h
#error "WarriorSaveGame.generated.h already included, missing '#pragma once' in WarriorSaveGame.h"
#endif
#define WARRIOR_WarriorSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWarriorSaveGame *********************************************************
WARRIOR_API UClass* Z_Construct_UClass_UWarriorSaveGame_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorSaveGame(); \
	friend struct Z_Construct_UClass_UWarriorSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UWarriorSaveGame)


#define FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorSaveGame(UWarriorSaveGame&&) = delete; \
	UWarriorSaveGame(const UWarriorSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorSaveGame) \
	NO_API virtual ~UWarriorSaveGame();


#define FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorSaveGame;

// ********** End Class UWarriorSaveGame ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
