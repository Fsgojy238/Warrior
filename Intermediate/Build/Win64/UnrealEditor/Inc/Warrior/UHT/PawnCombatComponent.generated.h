// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/PawnCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_PawnCombatComponent_generated_h
#error "PawnCombatComponent.generated.h already included, missing '#pragma once' in PawnCombatComponent.h"
#endif
#define WARRIOR_PawnCombatComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnCombatComponent(); \
	friend struct Z_Construct_UClass_UPawnCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatComponent, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UPawnCombatComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnCombatComponent(UPawnCombatComponent&&); \
	UPawnCombatComponent(const UPawnCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatComponent) \
	NO_API virtual ~UPawnCombatComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_12_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UPawnCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
