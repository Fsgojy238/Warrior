// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorBaseGameMode.h"

#ifdef WARRIOR_WarriorBaseGameMode_generated_h
#error "WarriorBaseGameMode.generated.h already included, missing '#pragma once' in WarriorBaseGameMode.h"
#endif
#define WARRIOR_WarriorBaseGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorBaseGameMode *****************************************************
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorBaseGameMode(); \
	friend struct Z_Construct_UClass_AWarriorBaseGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorBaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorBaseGameMode_NoRegister) \
	DECLARE_SERIALIZER(AWarriorBaseGameMode)


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorBaseGameMode(AWarriorBaseGameMode&&) = delete; \
	AWarriorBaseGameMode(const AWarriorBaseGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorBaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorBaseGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorBaseGameMode) \
	NO_API virtual ~AWarriorBaseGameMode();


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorBaseGameMode;

// ********** End Class AWarriorBaseGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorBaseGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
