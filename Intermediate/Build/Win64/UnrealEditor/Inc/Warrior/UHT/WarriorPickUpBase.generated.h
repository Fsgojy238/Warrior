// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/PickUps/WarriorPickUpBase.h"

#ifdef WARRIOR_WarriorPickUpBase_generated_h
#error "WarriorPickUpBase.generated.h already included, missing '#pragma once' in WarriorPickUpBase.h"
#endif
#define WARRIOR_WarriorPickUpBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AWarriorPickUpBase *******************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPickUpCollisionSphereBeginOverlap);


WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorPickUpBase(); \
	friend struct Z_Construct_UClass_AWarriorPickUpBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorPickUpBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorPickUpBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorPickUpBase_NoRegister) \
	DECLARE_SERIALIZER(AWarriorPickUpBase)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorPickUpBase(AWarriorPickUpBase&&) = delete; \
	AWarriorPickUpBase(const AWarriorPickUpBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorPickUpBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorPickUpBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorPickUpBase) \
	NO_API virtual ~AWarriorPickUpBase();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_11_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorPickUpBase;

// ********** End Class AWarriorPickUpBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
