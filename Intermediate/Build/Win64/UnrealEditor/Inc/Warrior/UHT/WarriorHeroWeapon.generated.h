// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/WarriorHeroWeapon.h"

#ifdef WARRIOR_WarriorHeroWeapon_generated_h
#error "WarriorHeroWeapon.generated.h already included, missing '#pragma once' in WarriorHeroWeapon.h"
#endif
#define WARRIOR_WarriorHeroWeapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAbilitySpecHandle;

// ********** Begin Class AWarriorHeroWeapon *******************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrantedAbilitySpecHandles); \
	DECLARE_FUNCTION(execAssignGrantedAbilitySpecHandles);


WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorHeroWeapon(); \
	friend struct Z_Construct_UClass_AWarriorHeroWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorHeroWeapon, AWarriorWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister) \
	DECLARE_SERIALIZER(AWarriorHeroWeapon)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorHeroWeapon(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorHeroWeapon(AWarriorHeroWeapon&&) = delete; \
	AWarriorHeroWeapon(const AWarriorHeroWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorHeroWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorHeroWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorHeroWeapon) \
	NO_API virtual ~AWarriorHeroWeapon();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorHeroWeapon;

// ********** End Class AWarriorHeroWeapon *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorHeroWeapon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
