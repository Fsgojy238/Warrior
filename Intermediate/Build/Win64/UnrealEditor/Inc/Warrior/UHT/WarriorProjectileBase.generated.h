// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/WarriorProjectileBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WARRIOR_WarriorProjectileBase_generated_h
#error "WarriorProjectileBase.generated.h already included, missing '#pragma once' in WarriorProjectileBase.h"
#endif
#define WARRIOR_WarriorProjectileBase_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap); \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_CALLBACK_WRAPPERS
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorProjectileBase(); \
	friend struct Z_Construct_UClass_AWarriorProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AWarriorProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorProjectileBase)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorProjectileBase(AWarriorProjectileBase&&); \
	AWarriorProjectileBase(const AWarriorProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorProjectileBase) \
	NO_API virtual ~AWarriorProjectileBase();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_22_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_CALLBACK_WRAPPERS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h


#define FOREACH_ENUM_EPROJECTILEDAMAGEPOLICY(op) \
	op(EProjectileDamagePolicy::OnHit) \
	op(EProjectileDamagePolicy::OnBeginOverlap) 

enum class EProjectileDamagePolicy : uint8;
template<> struct TIsUEnumClass<EProjectileDamagePolicy> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EProjectileDamagePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
