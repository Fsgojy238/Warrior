// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/PawnCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorWeaponBase;
enum class EToogleDamageType : uint8;
struct FGameplayTag;
#ifdef WARRIOR_PawnCombatComponent_generated_h
#error "PawnCombatComponent.generated.h already included, missing '#pragma once' in PawnCombatComponent.h"
#endif
#define WARRIOR_PawnCombatComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleWeaponCollision); \
	DECLARE_FUNCTION(execGetCharacterCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetCharacterCarriedWeaponByTag); \
	DECLARE_FUNCTION(execRegisterSpawnedWeapon);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnCombatComponent(); \
	friend struct Z_Construct_UClass_UPawnCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatComponent, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UPawnCombatComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_ENHANCED_CONSTRUCTORS \
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


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_24_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UPawnCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h


#define FOREACH_ENUM_ETOOGLEDAMAGETYPE(op) \
	op(EToogleDamageType::CurrentEquippedWeapon) \
	op(EToogleDamageType::LeftHand) \
	op(EToogleDamageType::RightHand) 

enum class EToogleDamageType : uint8;
template<> struct TIsUEnumClass<EToogleDamageType> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EToogleDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
