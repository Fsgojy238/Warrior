// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/PawnUIComponent.h"

#ifdef WARRIOR_PawnUIComponent_generated_h
#error "PawnUIComponent.generated.h already included, missing '#pragma once' in PawnUIComponent.h"
#endif
#define WARRIOR_PawnUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPercentChangedDelegate *********************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_9_DELEGATE \
WARRIOR_API void FOnPercentChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPercentChangedDelegate, float NewPercent);


// ********** End Delegate FOnPercentChangedDelegate ***********************************************

// ********** Begin Class UPawnUIComponent *********************************************************
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnUIComponent(); \
	friend struct Z_Construct_UClass_UPawnUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnUIComponent, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UPawnUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UPawnUIComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnUIComponent(UPawnUIComponent&&) = delete; \
	UPawnUIComponent(const UPawnUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnUIComponent) \
	NO_API virtual ~UPawnUIComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnUIComponent;

// ********** End Class UPawnUIComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_PawnUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
