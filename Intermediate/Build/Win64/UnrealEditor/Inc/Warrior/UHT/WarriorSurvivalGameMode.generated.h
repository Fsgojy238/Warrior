// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorSurvivalGameMode.h"

#ifdef WARRIOR_WarriorSurvivalGameMode_generated_h
#error "WarriorSurvivalGameMode.generated.h already included, missing '#pragma once' in WarriorSurvivalGameMode.h"
#endif
#define WARRIOR_WarriorSurvivalGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AWarriorEnemyCharacter;
enum class EWarriorSurvialGameModeState : uint8;

// ********** Begin ScriptStruct FWarriorEnemyWaveSpawnInfo ****************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnInfo_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct();


struct FWarriorEnemyWaveSpawnInfo;
// ********** End ScriptStruct FWarriorEnemyWaveSpawnInfo ******************************************

// ********** Begin ScriptStruct FWarriorEnemyWaveSpawnerTableRow **********************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWarriorEnemyWaveSpawnerTableRow_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FWarriorEnemyWaveSpawnerTableRow;
// ********** End ScriptStruct FWarriorEnemyWaveSpawnerTableRow ************************************

// ********** Begin Delegate FOnSurvialGameModeStateChangedDelegate ********************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_51_DELEGATE \
WARRIOR_API void FOnSurvialGameModeStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSurvialGameModeStateChangedDelegate, EWarriorSurvialGameModeState CurrentState);


// ********** End Delegate FOnSurvialGameModeStateChangedDelegate **********************************

// ********** Begin Class AWarriorSurvivalGameMode *************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterSpawnedEnemies); \
	DECLARE_FUNCTION(execOnEnemyDestoryed);


WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorSurvivalGameMode(); \
	friend struct Z_Construct_UClass_AWarriorSurvivalGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorSurvivalGameMode, AWarriorBaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorSurvivalGameMode_NoRegister) \
	DECLARE_SERIALIZER(AWarriorSurvivalGameMode)


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorSurvivalGameMode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorSurvivalGameMode(AWarriorSurvivalGameMode&&) = delete; \
	AWarriorSurvivalGameMode(const AWarriorSurvivalGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorSurvivalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorSurvivalGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorSurvivalGameMode) \
	NO_API virtual ~AWarriorSurvivalGameMode();


#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_56_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorSurvivalGameMode;

// ********** End Class AWarriorSurvivalGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_GameModes_WarriorSurvivalGameMode_h

// ********** Begin Enum EWarriorSurvialGameModeState **********************************************
#define FOREACH_ENUM_EWARRIORSURVIALGAMEMODESTATE(op) \
	op(EWarriorSurvialGameModeState::WaitSpawnNewWave) \
	op(EWarriorSurvialGameModeState::SpawningNewWave) \
	op(EWarriorSurvialGameModeState::InProgress) \
	op(EWarriorSurvialGameModeState::WaveCompleted) \
	op(EWarriorSurvialGameModeState::AllWaveDone) \
	op(EWarriorSurvialGameModeState::PlayerDied) 

enum class EWarriorSurvialGameModeState : uint8;
template<> struct TIsUEnumClass<EWarriorSurvialGameModeState> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorSurvialGameModeState>();
// ********** End Enum EWarriorSurvialGameModeState ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
