// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/PickUps/WarriorPickUpBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WARRIOR_WarriorPickUpBase_generated_h
#error "WarriorPickUpBase.generated.h already included, missing '#pragma once' in WarriorPickUpBase.h"
#endif
#define WARRIOR_WarriorPickUpBase_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPickUpCollisionSphereBeginOverlap);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorPickUpBase(); \
	friend struct Z_Construct_UClass_AWarriorPickUpBase_Statics; \
public: \
	DECLARE_CLASS(AWarriorPickUpBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorPickUpBase)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorPickUpBase(AWarriorPickUpBase&&); \
	AWarriorPickUpBase(const AWarriorPickUpBase&); \
public: \
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


template<> WARRIOR_API UClass* StaticClass<class AWarriorPickUpBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Items_PickUps_WarriorPickUpBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
