// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/UI/HeroUIComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroUIComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent();
WARRIOR_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnUIComponent();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnEquippedWeaponChangedDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::NewProp_SoftWeaponIcon = { "SoftWeaponIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms, SoftWeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::NewProp_SoftWeaponIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnEquippedWeaponChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon)
{
	struct _Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
	_Script_Warrior_eventOnEquippedWeaponChangedDelegate_Parms Parms;
	Parms.SoftWeaponIcon=SoftWeaponIcon;
	OnEquippedWeaponChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEquippedWeaponChangedDelegate

// Begin Delegate FOnAbilityIconSlotUpdatedDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms
	{
		FGameplayTag AbilityInputTag;
		TSoftObjectPtr<UMaterialInterface> SoftAbilityIconMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftAbilityIconMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::NewProp_AbilityInputTag = { "AbilityInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms, AbilityInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::NewProp_SoftAbilityIconMaterial = { "SoftAbilityIconMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms, SoftAbilityIconMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::NewProp_AbilityInputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::NewProp_SoftAbilityIconMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnAbilityIconSlotUpdatedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityIconSlotUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityIconSlotUpdatedDelegate, FGameplayTag AbilityInputTag, const TSoftObjectPtr<UMaterialInterface>& SoftAbilityIconMaterial)
{
	struct _Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms
	{
		FGameplayTag AbilityInputTag;
		TSoftObjectPtr<UMaterialInterface> SoftAbilityIconMaterial;
	};
	_Script_Warrior_eventOnAbilityIconSlotUpdatedDelegate_Parms Parms;
	Parms.AbilityInputTag=AbilityInputTag;
	Parms.SoftAbilityIconMaterial=SoftAbilityIconMaterial;
	OnAbilityIconSlotUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityIconSlotUpdatedDelegate

// Begin Delegate FOnAbilityCooldownBeginDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms
	{
		FGameplayTag AbilityInputTag;
		float TotalCooldownTime;
		float RemainCooldownTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalCooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainCooldownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_AbilityInputTag = { "AbilityInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms, AbilityInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_TotalCooldownTime = { "TotalCooldownTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms, TotalCooldownTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_RemainCooldownTime = { "RemainCooldownTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms, RemainCooldownTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_AbilityInputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_TotalCooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::NewProp_RemainCooldownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnAbilityCooldownBeginDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityCooldownBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownBeginDelegate, FGameplayTag AbilityInputTag, float TotalCooldownTime, float RemainCooldownTime)
{
	struct _Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms
	{
		FGameplayTag AbilityInputTag;
		float TotalCooldownTime;
		float RemainCooldownTime;
	};
	_Script_Warrior_eventOnAbilityCooldownBeginDelegate_Parms Parms;
	Parms.AbilityInputTag=AbilityInputTag;
	Parms.TotalCooldownTime=TotalCooldownTime;
	Parms.RemainCooldownTime=RemainCooldownTime;
	OnAbilityCooldownBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityCooldownBeginDelegate

// Begin Delegate FOnStoneInteractedDelegate
struct Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventOnStoneInteractedDelegate_Parms
	{
		bool bShouldDisplayInputKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldDisplayInputKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayInputKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::NewProp_bShouldDisplayInputKey_SetBit(void* Obj)
{
	((_Script_Warrior_eventOnStoneInteractedDelegate_Parms*)Obj)->bShouldDisplayInputKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::NewProp_bShouldDisplayInputKey = { "bShouldDisplayInputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Warrior_eventOnStoneInteractedDelegate_Parms), &Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::NewProp_bShouldDisplayInputKey_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::NewProp_bShouldDisplayInputKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "OnStoneInteractedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnStoneInteractedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::_Script_Warrior_eventOnStoneInteractedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoneInteractedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStoneInteractedDelegate, bool bShouldDisplayInputKey)
{
	struct _Script_Warrior_eventOnStoneInteractedDelegate_Parms
	{
		bool bShouldDisplayInputKey;
	};
	_Script_Warrior_eventOnStoneInteractedDelegate_Parms Parms;
	Parms.bShouldDisplayInputKey=bShouldDisplayInputKey ? true : false;
	OnStoneInteractedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStoneInteractedDelegate

// Begin Class UHeroUIComponent
void UHeroUIComponent::StaticRegisterNativesUHeroUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroUIComponent);
UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister()
{
	return UHeroUIComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/HeroUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityIconSlotUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStoneInteracted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentRageChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedWeaponChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityIconSlotUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoneInteracted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged = { "OnCurrentRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnCurrentRageChanged), Z_Construct_UDelegateFunction_Warrior_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentRageChanged_MetaData), NewProp_OnCurrentRageChanged_MetaData) }; // 2445266534
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged = { "OnEquippedWeaponChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnEquippedWeaponChanged), Z_Construct_UDelegateFunction_Warrior_OnEquippedWeaponChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquippedWeaponChanged_MetaData), NewProp_OnEquippedWeaponChanged_MetaData) }; // 2811676128
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated = { "OnAbilityIconSlotUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnAbilityIconSlotUpdated), Z_Construct_UDelegateFunction_Warrior_OnAbilityIconSlotUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityIconSlotUpdated_MetaData), NewProp_OnAbilityIconSlotUpdated_MetaData) }; // 3675342784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin = { "OnAbilityCooldownBegin", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnAbilityCooldownBegin), Z_Construct_UDelegateFunction_Warrior_OnAbilityCooldownBeginDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCooldownBegin_MetaData), NewProp_OnAbilityCooldownBegin_MetaData) }; // 4226848494
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnStoneInteracted = { "OnStoneInteracted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnStoneInteracted), Z_Construct_UDelegateFunction_Warrior_OnStoneInteractedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStoneInteracted_MetaData), NewProp_OnStoneInteracted_MetaData) }; // 1457483221
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnStoneInteracted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams = {
	&UHeroUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroUIComponent()
{
	if (!Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton, Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UHeroUIComponent>()
{
	return UHeroUIComponent::StaticClass();
}
UHeroUIComponent::UHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroUIComponent);
UHeroUIComponent::~UHeroUIComponent() {}
// End Class UHeroUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroUIComponent, UHeroUIComponent::StaticClass, TEXT("UHeroUIComponent"), &Z_Registration_Info_UClass_UHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroUIComponent), 1741978275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_2068485653(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_UI_HeroUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
