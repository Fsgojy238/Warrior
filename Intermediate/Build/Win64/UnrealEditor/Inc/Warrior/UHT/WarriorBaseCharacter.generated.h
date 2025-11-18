// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WarriorBaseCharacter.h"

#ifdef WARRIOR_WarriorBaseCharacter_generated_h
#error "WarriorBaseCharacter.generated.h already included, missing '#pragma once' in WarriorBaseCharacter.h"
#endif
#define WARRIOR_WarriorBaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorBaseCharacter ****************************************************
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorBaseCharacter(); \
	friend struct Z_Construct_UClass_AWarriorBaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorBaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(AWarriorBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AWarriorBaseCharacter*>(this); }


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorBaseCharacter(AWarriorBaseCharacter&&) = delete; \
	AWarriorBaseCharacter(const AWarriorBaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorBaseCharacter) \
	NO_API virtual ~AWarriorBaseCharacter();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_20_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorBaseCharacter;

// ********** End Class AWarriorBaseCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
