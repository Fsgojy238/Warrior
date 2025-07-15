// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WarriorBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_WarriorBaseCharacter_generated_h
#error "WarriorBaseCharacter.generated.h already included, missing '#pragma once' in WarriorBaseCharacter.h"
#endif
#define WARRIOR_WarriorBaseCharacter_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorBaseCharacter(); \
	friend struct Z_Construct_UClass_AWarriorBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AWarriorBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AWarriorBaseCharacter*>(this); }


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorBaseCharacter(AWarriorBaseCharacter&&); \
	AWarriorBaseCharacter(const AWarriorBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorBaseCharacter) \
	NO_API virtual ~AWarriorBaseCharacter();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
