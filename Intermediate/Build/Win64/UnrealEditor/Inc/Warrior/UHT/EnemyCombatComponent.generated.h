// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/EnemyCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_EnemyCombatComponent_generated_h
#error "EnemyCombatComponent.generated.h already included, missing '#pragma once' in EnemyCombatComponent.h"
#endif
#define WARRIOR_EnemyCombatComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyCombatComponent(); \
	friend struct Z_Construct_UClass_UEnemyCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UEnemyCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UEnemyCombatComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyCombatComponent(UEnemyCombatComponent&&); \
	UEnemyCombatComponent(const UEnemyCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyCombatComponent) \
	NO_API virtual ~UEnemyCombatComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_12_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UEnemyCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_EnemyCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
