// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widegts/WarriorWidgetBase.h"

#ifdef WARRIOR_WarriorWidgetBase_generated_h
#error "WarriorWidgetBase.generated.h already included, missing '#pragma once' in WarriorWidgetBase.h"
#endif
#define WARRIOR_WarriorWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UEnemyUIComponent;
class UHeroUIComponent;

// ********** Begin Class UWarriorWidgetBase *******************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitEnemyCreatedWidget);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_CALLBACK_WRAPPERS
WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorWidgetBase(); \
	friend struct Z_Construct_UClass_UWarriorWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UWarriorWidgetBase)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorWidgetBase(UWarriorWidgetBase&&) = delete; \
	UWarriorWidgetBase(const UWarriorWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorWidgetBase) \
	NO_API virtual ~UWarriorWidgetBase();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_15_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_CALLBACK_WRAPPERS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorWidgetBase;

// ********** End Class UWarriorWidgetBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Widegts_WarriorWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
