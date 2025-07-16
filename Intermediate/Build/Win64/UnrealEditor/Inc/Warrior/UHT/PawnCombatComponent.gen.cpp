// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Components/Combat/PawnCombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCombatComponent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorWeaponBase_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent();
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
// End Cross Module References

// Begin Class UPawnCombatComponent Function GetCharacterCarriedWeaponByTag
struct Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics
{
	struct PawnCombatComponent_eventGetCharacterCarriedWeaponByTag_Parms
	{
		FGameplayTag InWeaponTagToGet;
		AWarriorWeaponBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xcd\xa8\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09 *\n\x09 * @param InWeaponTagToGet - \xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\n\x09 * @return \xc6\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xf2\xb7\xb5\xbb\xef\xbf\xbdnullptr\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/PawnCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xcd\xa8\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xd0\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\n@param InWeaponTagToGet - \xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\n@return \xc6\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xf2\xb7\xb5\xbb\xef\xbf\xbdnullptr" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTagToGet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::NewProp_InWeaponTagToGet = { "InWeaponTagToGet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnCombatComponent_eventGetCharacterCarriedWeaponByTag_Parms, InWeaponTagToGet), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnCombatComponent_eventGetCharacterCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_AWarriorWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::NewProp_InWeaponTagToGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnCombatComponent, nullptr, "GetCharacterCarriedWeaponByTag", nullptr, nullptr, Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PawnCombatComponent_eventGetCharacterCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::PawnCombatComponent_eventGetCharacterCarriedWeaponByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnCombatComponent::execGetCharacterCarriedWeaponByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTagToGet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorWeaponBase**)Z_Param__Result=P_THIS->GetCharacterCarriedWeaponByTag(Z_Param_InWeaponTagToGet);
	P_NATIVE_END;
}
// End Class UPawnCombatComponent Function GetCharacterCarriedWeaponByTag

// Begin Class UPawnCombatComponent Function GetCharacterCurrentEquippedWeapon
struct Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics
{
	struct PawnCombatComponent_eventGetCharacterCurrentEquippedWeapon_Parms
	{
		AWarriorWeaponBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09 *\n\x09 * @return \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf2\xb7\xb5\xbb\xef\xbf\xbdnullptr\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/PawnCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\n@return \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf2\xb7\xb5\xbb\xef\xbf\xbdnullptr" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnCombatComponent_eventGetCharacterCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWarriorWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnCombatComponent, nullptr, "GetCharacterCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PawnCombatComponent_eventGetCharacterCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::PawnCombatComponent_eventGetCharacterCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnCombatComponent::execGetCharacterCurrentEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorWeaponBase**)Z_Param__Result=P_THIS->GetCharacterCurrentEquippedWeapon();
	P_NATIVE_END;
}
// End Class UPawnCombatComponent Function GetCharacterCurrentEquippedWeapon

// Begin Class UPawnCombatComponent Function RegisterSpawnedWeapon
struct Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics
{
	struct PawnCombatComponent_eventRegisterSpawnedWeapon_Parms
	{
		FGameplayTag InWeaponTagToRegister;
		AWarriorWeaponBase* InWeaponToRegister;
		bool bRegisterAsEquippedWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09 *\n\x09 * @param InWeaponTagToRegister - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb1\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\"Weapon.Pistol\"\xef\xbf\xbd\xef\xbf\xbd\n\x09 * @param InWeaponToRegister - \xd2\xaa\xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\n\x09 * @param bRegisterAsEquippedWeapon - \xef\xbf\xbd\xc7\xb7\xf1\xbd\xab\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xaa\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09 *\n\x09 */" },
#endif
		{ "CPP_Default_bRegisterAsEquippedWeapon", "false" },
		{ "ModuleRelativePath", "Public/Components/Combat/PawnCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\n@param InWeaponTagToRegister - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb1\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdGameplayTag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\"Weapon.Pistol\"\xef\xbf\xbd\xef\xbf\xbd\n@param InWeaponToRegister - \xd2\xaa\xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\n@param bRegisterAsEquippedWeapon - \xef\xbf\xbd\xc7\xb7\xf1\xbd\xab\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xaa\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTagToRegister;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeaponToRegister;
	static void NewProp_bRegisterAsEquippedWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsEquippedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_InWeaponTagToRegister = { "InWeaponTagToRegister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnCombatComponent_eventRegisterSpawnedWeapon_Parms, InWeaponTagToRegister), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_InWeaponToRegister = { "InWeaponToRegister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnCombatComponent_eventRegisterSpawnedWeapon_Parms, InWeaponToRegister), Z_Construct_UClass_AWarriorWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_bRegisterAsEquippedWeapon_SetBit(void* Obj)
{
	((PawnCombatComponent_eventRegisterSpawnedWeapon_Parms*)Obj)->bRegisterAsEquippedWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_bRegisterAsEquippedWeapon = { "bRegisterAsEquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnCombatComponent_eventRegisterSpawnedWeapon_Parms), &Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_bRegisterAsEquippedWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_InWeaponTagToRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_InWeaponToRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::NewProp_bRegisterAsEquippedWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnCombatComponent, nullptr, "RegisterSpawnedWeapon", nullptr, nullptr, Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PawnCombatComponent_eventRegisterSpawnedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::PawnCombatComponent_eventRegisterSpawnedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnCombatComponent::execRegisterSpawnedWeapon)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTagToRegister);
	P_GET_OBJECT(AWarriorWeaponBase,Z_Param_InWeaponToRegister);
	P_GET_UBOOL(Z_Param_bRegisterAsEquippedWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSpawnedWeapon(Z_Param_InWeaponTagToRegister,Z_Param_InWeaponToRegister,Z_Param_bRegisterAsEquippedWeapon);
	P_NATIVE_END;
}
// End Class UPawnCombatComponent Function RegisterSpawnedWeapon

// Begin Class UPawnCombatComponent
void UPawnCombatComponent::StaticRegisterNativesUPawnCombatComponent()
{
	UClass* Class = UPawnCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterCarriedWeaponByTag", &UPawnCombatComponent::execGetCharacterCarriedWeaponByTag },
		{ "GetCharacterCurrentEquippedWeapon", &UPawnCombatComponent::execGetCharacterCurrentEquippedWeapon },
		{ "RegisterSpawnedWeapon", &UPawnCombatComponent::execRegisterSpawnedWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnCombatComponent);
UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister()
{
	return UPawnCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/PawnCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/PawnCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippedWeaponTag_MetaData[] = {
		{ "Category", "Warrior|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdGameplayTag\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/Combat/PawnCombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdGameplayTag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentEquippedWeaponTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCarriedWeaponByTag, "GetCharacterCarriedWeaponByTag" }, // 652916175
		{ &Z_Construct_UFunction_UPawnCombatComponent_GetCharacterCurrentEquippedWeapon, "GetCharacterCurrentEquippedWeapon" }, // 2338313188
		{ &Z_Construct_UFunction_UPawnCombatComponent_RegisterSpawnedWeapon, "RegisterSpawnedWeapon" }, // 81283191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnCombatComponent_Statics::NewProp_CurrentEquippedWeaponTag = { "CurrentEquippedWeaponTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnCombatComponent, CurrentEquippedWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEquippedWeaponTag_MetaData), NewProp_CurrentEquippedWeaponTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnCombatComponent_Statics::NewProp_CurrentEquippedWeaponTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnCombatComponent_Statics::ClassParams = {
	&UPawnCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPawnCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnCombatComponent()
{
	if (!Z_Registration_Info_UClass_UPawnCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnCombatComponent.OuterSingleton, Z_Construct_UClass_UPawnCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnCombatComponent.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UPawnCombatComponent>()
{
	return UPawnCombatComponent::StaticClass();
}
UPawnCombatComponent::UPawnCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnCombatComponent);
UPawnCombatComponent::~UPawnCombatComponent() {}
// End Class UPawnCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnCombatComponent, UPawnCombatComponent::StaticClass, TEXT("UPawnCombatComponent"), &Z_Registration_Info_UClass_UPawnCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnCombatComponent), 3278217572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_1381269867(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Components_Combat_PawnCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
