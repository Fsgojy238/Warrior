// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilitySpecHandle;
struct FWarriorHeroAbilitySet;
#ifdef WARRIOR_WarriorAbilitySystemComponent_generated_h
#error "WarriorAbilitySystemComponent.generated.h already included, missing '#pragma once' in WarriorAbilitySystemComponent.h"
#endif
#define WARRIOR_WarriorAbilitySystemComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGrantedHeroWeaponAbilities); \
	DECLARE_FUNCTION(execGrantHeroWeaponAbilities);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UWarriorAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorAbilitySystemComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorAbilitySystemComponent(UWarriorAbilitySystemComponent&&); \
	UWarriorAbilitySystemComponent(const UWarriorAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorAbilitySystemComponent) \
	NO_API virtual ~UWarriorAbilitySystemComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_15_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UWarriorAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_WarriorAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
