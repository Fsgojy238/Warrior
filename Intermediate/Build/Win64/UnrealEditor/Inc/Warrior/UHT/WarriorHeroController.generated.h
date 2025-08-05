// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/WarriorHeroController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_WarriorHeroController_generated_h
#error "WarriorHeroController.generated.h already included, missing '#pragma once' in WarriorHeroController.h"
#endif
#define WARRIOR_WarriorHeroController_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorHeroController(); \
	friend struct Z_Construct_UClass_AWarriorHeroController_Statics; \
public: \
	DECLARE_CLASS(AWarriorHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorHeroController) \
	virtual UObject* _getUObject() const override { return const_cast<AWarriorHeroController*>(this); }


#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorHeroController(AWarriorHeroController&&); \
	AWarriorHeroController(const AWarriorHeroController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorHeroController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorHeroController) \
	NO_API virtual ~AWarriorHeroController();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorHeroController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
