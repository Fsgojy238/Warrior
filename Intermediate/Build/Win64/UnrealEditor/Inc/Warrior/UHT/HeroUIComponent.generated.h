// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/HeroUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture2D;
struct FGameplayTag;
#ifdef WARRIOR_HeroUIComponent_generated_h
#error "HeroUIComponent.generated.h already included, missing '#pragma once' in HeroUIComponent.h"
#endif
#define WARRIOR_HeroUIComponent_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_10_DELEGATE \
WARRIOR_API void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_11_DELEGATE \
WARRIOR_API void FOnAbilityIconSlotUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityIconSlotUpdatedDelegate, FGameplayTag AbilityInputTag, const TSoftObjectPtr<UMaterialInterface>& SoftAbilityIconMaterial);


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroUIComponent(); \
	friend struct Z_Construct_UClass_UHeroUIComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UHeroUIComponent)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroUIComponent(UHeroUIComponent&&); \
	UHeroUIComponent(const UHeroUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroUIComponent) \
	NO_API virtual ~UHeroUIComponent();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_16_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UHeroUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
