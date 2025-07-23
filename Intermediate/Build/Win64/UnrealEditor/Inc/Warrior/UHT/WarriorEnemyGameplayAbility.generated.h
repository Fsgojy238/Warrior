// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorEnemyCharacter;
class UEnemyCombatComponent;
#ifdef WARRIOR_WarriorEnemyGameplayAbility_generated_h
#error "WarriorEnemyGameplayAbility.generated.h already included, missing '#pragma once' in WarriorEnemyGameplayAbility.h"
#endif
#define WARRIOR_WarriorEnemyGameplayAbility_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnemyCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetEnemyCharacterFromActorInfo);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorEnemyGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorEnemyGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UWarriorEnemyGameplayAbility, UWarriorGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorEnemyGameplayAbility)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorEnemyGameplayAbility(UWarriorEnemyGameplayAbility&&); \
	UWarriorEnemyGameplayAbility(const UWarriorEnemyGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorEnemyGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorEnemyGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorEnemyGameplayAbility) \
	NO_API virtual ~UWarriorEnemyGameplayAbility();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_15_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarriorEnemyGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorEnemyGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
