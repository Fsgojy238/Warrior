// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/EnemyUIComponent.h"

#ifdef WARRIOR_EnemyUIComponent_generated_h
#error "EnemyUIComponent.generated.h already included, missing '#pragma once' in EnemyUIComponent.h"
#endif
#define WARRIOR_EnemyUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWarriorWidgetBase;

// ********** Begin Class UEnemyUIComponent ********************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveEnemyDrawnWidgetsIfAny); \
	DECLARE_FUNCTION(execRegisterEnemyDrawnWidget);


WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyUIComponent(); \
	friend struct Z_Construct_UClass_UEnemyUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UEnemyUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UEnemyUIComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyUIComponent(UEnemyUIComponent&&) = delete; \
	UEnemyUIComponent(const UEnemyUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyUIComponent) \
	NO_API virtual ~UEnemyUIComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyUIComponent;

// ********** End Class UEnemyUIComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
