// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/EnemyUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWarriorWidgetBase;
#ifdef WARRIOR_EnemyUIComponent_generated_h
#error "EnemyUIComponent.generated.h already included, missing '#pragma once' in EnemyUIComponent.h"
#endif
#define WARRIOR_EnemyUIComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveEnemyDrawnWidgetsIfAny); \
	DECLARE_FUNCTION(execRegisterEnemyDrawnWidget);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyUIComponent(); \
	friend struct Z_Construct_UClass_UEnemyUIComponent_Statics; \
public: \
	DECLARE_CLASS(UEnemyUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UEnemyUIComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyUIComponent(UEnemyUIComponent&&); \
	UEnemyUIComponent(const UEnemyUIComponent&); \
public: \
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


template<> WARRIOR_API UClass* StaticClass<class UEnemyUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_EnemyUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
