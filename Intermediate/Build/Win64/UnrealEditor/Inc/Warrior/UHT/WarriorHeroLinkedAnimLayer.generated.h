// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"

#ifdef WARRIOR_WarriorHeroLinkedAnimLayer_generated_h
#error "WarriorHeroLinkedAnimLayer.generated.h already included, missing '#pragma once' in WarriorHeroLinkedAnimLayer.h"
#endif
#define WARRIOR_WarriorHeroLinkedAnimLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWarriorHeroAnimInstance;

// ********** Begin Class UWarriorHeroLinkedAnimLayer **********************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroAnimInstance);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorHeroLinkedAnimLayer(); \
	friend struct Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorHeroLinkedAnimLayer, UWarriorBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister) \
	DECLARE_SERIALIZER(UWarriorHeroLinkedAnimLayer)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorHeroLinkedAnimLayer(UWarriorHeroLinkedAnimLayer&&) = delete; \
	UWarriorHeroLinkedAnimLayer(const UWarriorHeroLinkedAnimLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorHeroLinkedAnimLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorHeroLinkedAnimLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorHeroLinkedAnimLayer) \
	NO_API virtual ~UWarriorHeroLinkedAnimLayer();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorHeroLinkedAnimLayer;

// ********** End Class UWarriorHeroLinkedAnimLayer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
