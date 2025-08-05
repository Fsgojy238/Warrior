// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/WarriorAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef WARRIOR_WarriorAIController_generated_h
#error "WarriorAIController.generated.h already included, missing '#pragma once' in WarriorAIController.h"
#endif
#define WARRIOR_WarriorAIController_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyPerceptionUpdated);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorAIController(); \
	friend struct Z_Construct_UClass_AWarriorAIController_Statics; \
public: \
	DECLARE_CLASS(AWarriorAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorAIController)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorAIController(AWarriorAIController&&); \
	AWarriorAIController(const AWarriorAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorAIController) \
	NO_API virtual ~AWarriorAIController();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_16_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Controllers_WarriorAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
