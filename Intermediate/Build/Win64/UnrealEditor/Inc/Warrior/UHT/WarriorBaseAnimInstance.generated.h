// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/WarriorBaseAnimInstance.h"

#ifdef WARRIOR_WarriorBaseAnimInstance_generated_h
#error "WarriorBaseAnimInstance.generated.h already included, missing '#pragma once' in WarriorBaseAnimInstance.h"
#endif
#define WARRIOR_WarriorBaseAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Class UWarriorBaseAnimInstance *************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesOwnerHaveTag);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UWarriorBaseAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorBaseAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UWarriorBaseAnimInstance)


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorBaseAnimInstance(UWarriorBaseAnimInstance&&) = delete; \
	UWarriorBaseAnimInstance(const UWarriorBaseAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorBaseAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorBaseAnimInstance) \
	NO_API virtual ~UWarriorBaseAnimInstance();


#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_13_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorBaseAnimInstance;

// ********** End Class UWarriorBaseAnimInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_AnimInstances_WarriorBaseAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
