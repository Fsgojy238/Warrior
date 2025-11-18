// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WarriorHeroCharacter.h"

#ifdef WARRIOR_WarriorHeroCharacter_generated_h
#error "WarriorHeroCharacter.generated.h already included, missing '#pragma once' in WarriorHeroCharacter.h"
#endif
#define WARRIOR_WarriorHeroCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorHeroCharacter ****************************************************
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorHeroCharacter(); \
	friend struct Z_Construct_UClass_AWarriorHeroCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorHeroCharacter, AWarriorBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_AWarriorHeroCharacter_NoRegister) \
	DECLARE_SERIALIZER(AWarriorHeroCharacter)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorHeroCharacter(AWarriorHeroCharacter&&) = delete; \
	AWarriorHeroCharacter(const AWarriorHeroCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorHeroCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorHeroCharacter) \
	NO_API virtual ~AWarriorHeroCharacter();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_20_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorHeroCharacter;

// ********** End Class AWarriorHeroCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Characters_WarriorHeroCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
