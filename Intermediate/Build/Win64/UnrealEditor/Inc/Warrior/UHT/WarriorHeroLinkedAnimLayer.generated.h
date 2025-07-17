// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWarriorHeroAnimInstance;
#ifdef WARRIOR_WarriorHeroLinkedAnimLayer_generated_h
#error "WarriorHeroLinkedAnimLayer.generated.h already included, missing '#pragma once' in WarriorHeroLinkedAnimLayer.h"
#endif
#define WARRIOR_WarriorHeroLinkedAnimLayer_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroAnimInstance);


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorHeroLinkedAnimLayer(); \
	friend struct Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics; \
public: \
	DECLARE_CLASS(UWarriorHeroLinkedAnimLayer, UWarriorBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UWarriorHeroLinkedAnimLayer)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorHeroLinkedAnimLayer(UWarriorHeroLinkedAnimLayer&&); \
	UWarriorHeroLinkedAnimLayer(const UWarriorHeroLinkedAnimLayer&); \
public: \
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


template<> WARRIOR_API UClass* StaticClass<class UWarriorHeroLinkedAnimLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_Hero_WarriorHeroLinkedAnimLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
