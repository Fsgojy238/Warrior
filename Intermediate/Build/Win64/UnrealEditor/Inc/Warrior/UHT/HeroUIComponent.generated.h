// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/HeroUIComponent.h"

#ifdef WARRIOR_HeroUIComponent_generated_h
#error "HeroUIComponent.generated.h already included, missing '#pragma once' in HeroUIComponent.h"
#endif
#define WARRIOR_HeroUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;
class UTexture2D;
struct FGameplayTag;

// ********** Begin Delegate FOnEquippedWeaponChangedDelegate **************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_10_DELEGATE \
WARRIOR_API void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon);


// ********** End Delegate FOnEquippedWeaponChangedDelegate ****************************************

// ********** Begin Delegate FOnAbilityIconSlotUpdatedDelegate *************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_11_DELEGATE \
WARRIOR_API void FOnAbilityIconSlotUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityIconSlotUpdatedDelegate, FGameplayTag AbilityInputTag, const TSoftObjectPtr<UMaterialInterface>& SoftAbilityIconMaterial);


// ********** End Delegate FOnAbilityIconSlotUpdatedDelegate ***************************************

// ********** Begin Delegate FOnAbilityCooldownBeginDelegate ***************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_12_DELEGATE \
WARRIOR_API void FOnAbilityCooldownBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownBeginDelegate, FGameplayTag AbilityInputTag, float TotalCooldownTime, float RemainCooldownTime);


// ********** End Delegate FOnAbilityCooldownBeginDelegate *****************************************

// ********** Begin Delegate FOnStoneInteractedDelegate ********************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_13_DELEGATE \
WARRIOR_API void FOnStoneInteractedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStoneInteractedDelegate, bool bShouldDisplayInputKey);


// ********** End Delegate FOnStoneInteractedDelegate **********************************************

// ********** Begin Class UHeroUIComponent *********************************************************
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroUIComponent(); \
	friend struct Z_Construct_UClass_UHeroUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UHeroUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UHeroUIComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroUIComponent(UHeroUIComponent&&) = delete; \
	UHeroUIComponent(const UHeroUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroUIComponent) \
	NO_API virtual ~UHeroUIComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_17_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroUIComponent;

// ********** End Class UHeroUIComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
