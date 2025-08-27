// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorEnemyCharacter;
class UAbilityTask_WaitSpawnEnemies;
class UGameplayAbility;
struct FGameplayTag;
#ifdef WARRIOR_AbilityTask_WaitSpawnEnemies_generated_h
#error "AbilityTask_WaitSpawnEnemies.generated.h already included, missing '#pragma once' in AbilityTask_WaitSpawnEnemies.h"
#endif
#define WARRIOR_AbilityTask_WaitSpawnEnemies_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_12_DELEGATE \
WARRIOR_API void FWaitSpawnEnemiesDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSpawnEnemiesDelegate, TArray<AWarriorEnemyCharacter*> const& SpawnedEnemies);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitSpawnEnemies);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitSpawnEnemies(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitSpawnEnemies, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitSpawnEnemies)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitSpawnEnemies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitSpawnEnemies(UAbilityTask_WaitSpawnEnemies&&); \
	UAbilityTask_WaitSpawnEnemies(const UAbilityTask_WaitSpawnEnemies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitSpawnEnemies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitSpawnEnemies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitSpawnEnemies) \
	NO_API virtual ~UAbilityTask_WaitSpawnEnemies();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_17_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UAbilityTask_WaitSpawnEnemies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
