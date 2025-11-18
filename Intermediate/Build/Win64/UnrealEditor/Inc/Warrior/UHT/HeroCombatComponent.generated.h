// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/HeroCombatComponent.h"

#ifdef WARRIOR_HeroCombatComponent_generated_h
#error "HeroCombatComponent.generated.h already included, missing '#pragma once' in HeroCombatComponent.h"
#endif
#define WARRIOR_HeroCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AWarriorHeroWeapon;
struct FGameplayTag;

// ********** Begin Class UHeroCombatComponent *****************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCurrentEquippedWeaponDamageAtLevel); \
	DECLARE_FUNCTION(execGetHeroCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetHeroCarriedWeaponByTag);


WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroCombatComponent(); \
	friend struct Z_Construct_UClass_UHeroCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UHeroCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UHeroCombatComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroCombatComponent(UHeroCombatComponent&&) = delete; \
	UHeroCombatComponent(const UHeroCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroCombatComponent) \
	NO_API virtual ~UHeroCombatComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroCombatComponent;

// ********** End Class UHeroCombatComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_HeroCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
