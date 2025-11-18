// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"

#ifdef WARRIOR_WarriorHeroGameplayAbility_generated_h
#error "WarriorHeroGameplayAbility.generated.h already included, missing '#pragma once' in WarriorHeroGameplayAbility.h"
#endif
#define WARRIOR_WarriorHeroGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AWarriorHeroCharacter;
class AWarriorHeroController;
class UGameplayEffect;
class UHeroCombatComponent;
class UHeroUIComponent;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;

// ********** Begin Class UWarriorHeroGameplayAbility **********************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroUIComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAbilityRemainingCooldownByTag); \
	DECLARE_FUNCTION(execMakeHeroDamageEffectSpecHandle); \
	DECLARE_FUNCTION(execGetHeroCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroCharacterFromActorInfo);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorHeroGameplayAbility, UWarriorGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UWarriorHeroGameplayAbility)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorHeroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorHeroGameplayAbility(UWarriorHeroGameplayAbility&&) = delete; \
	UWarriorHeroGameplayAbility(const UWarriorHeroGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorHeroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorHeroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorHeroGameplayAbility) \
	NO_API virtual ~UWarriorHeroGameplayAbility();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_16_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorHeroGameplayAbility;

// ********** End Class UWarriorHeroGameplayAbility ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
