// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/WarriorGameplayAbility.h"

#ifdef WARRIOR_WarriorGameplayAbility_generated_h
#error "WarriorGameplayAbility.generated.h already included, missing '#pragma once' in WarriorGameplayAbility.h"
#endif
#define WARRIOR_WarriorGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPawnCombatComponent;
class UWarriorAbilitySystemComponent;
enum class EWarriorSuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FHitResult;

// ********** Begin Class UWarriorGameplayAbility **************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyGameplayEffectSpecHandleToHitResults); \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetWarriorAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetPawnCombatComponentFromActorInfo);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UWarriorGameplayAbility)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorGameplayAbility(UWarriorGameplayAbility&&) = delete; \
	UWarriorGameplayAbility(const UWarriorGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorGameplayAbility) \
	NO_API virtual ~UWarriorGameplayAbility();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorGameplayAbility;

// ********** End Class UWarriorGameplayAbility ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h

// ********** Begin Enum EWarriorAbilityActivationPolicy *******************************************
#define FOREACH_ENUM_EWARRIORABILITYACTIVATIONPOLICY(op) \
	op(EWarriorAbilityActivationPolicy::OnTriggered) \
	op(EWarriorAbilityActivationPolicy::OnGiven) 

enum class EWarriorAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EWarriorAbilityActivationPolicy> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>();
// ********** End Enum EWarriorAbilityActivationPolicy *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
