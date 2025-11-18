// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/WarriorWeaponBase.h"

#ifdef WARRIOR_WarriorWeaponBase_generated_h
#error "WarriorWeaponBase.generated.h already included, missing '#pragma once' in WarriorWeaponBase.h"
#endif
#define WARRIOR_WarriorWeaponBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AWarriorWeaponBase *******************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverlap);


WARRIOR_API UClass* Z_Construct_UClass_AWarriorWeaponBase_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorWeaponBase(); \
	friend struct Z_Construct_UClass_AWarriorWeaponBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorWeaponBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorWeaponBase_NoRegister) \
	DECLARE_SERIALIZER(AWarriorWeaponBase)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorWeaponBase(AWarriorWeaponBase&&) = delete; \
	AWarriorWeaponBase(const AWarriorWeaponBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorWeaponBase) \
	NO_API virtual ~AWarriorWeaponBase();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorWeaponBase;

// ********** End Class AWarriorWeaponBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Items_Weapons_WarriorWeaponBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
