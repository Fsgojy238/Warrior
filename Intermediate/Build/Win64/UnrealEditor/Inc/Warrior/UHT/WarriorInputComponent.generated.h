// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Input/WarriorInputComponent.h"

#ifdef WARRIOR_WarriorInputComponent_generated_h
#error "WarriorInputComponent.generated.h already included, missing '#pragma once' in WarriorInputComponent.h"
#endif
#define WARRIOR_WarriorInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWarriorInputComponent ***************************************************
WARRIOR_API UClass* Z_Construct_UClass_UWarriorInputComponent_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorInputComponent(); \
	friend struct Z_Construct_UClass_UWarriorInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UWarriorInputComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorInputComponent(UWarriorInputComponent&&) = delete; \
	UWarriorInputComponent(const UWarriorInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorInputComponent) \
	NO_API virtual ~UWarriorInputComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorInputComponent;

// ********** End Class UWarriorInputComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_Input_WarriorInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
