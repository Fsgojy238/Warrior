// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorHeroCharacter;
class AWarriorHeroController;
class UHeroCombatComponent;
#ifdef WARRIOR_WarriorHeroGameplayAbility_generated_h
#error "WarriorHeroGameplayAbility.generated.h already included, missing '#pragma once' in WarriorHeroGameplayAbility.h"
#endif
#define WARRIOR_WarriorHeroGameplayAbility_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroCharacterFromActorInfo);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UWarriorHeroGameplayAbility, UWarriorGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorHeroGameplayAbility)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorHeroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorHeroGameplayAbility(UWarriorHeroGameplayAbility&&); \
	UWarriorHeroGameplayAbility(const UWarriorHeroGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorHeroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorHeroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorHeroGameplayAbility) \
	NO_API virtual ~UWarriorHeroGameplayAbility();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_15_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarriorHeroGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
