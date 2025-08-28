// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitSpawnEnemies() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies();
WARRIOR_API UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_NoRegister();
WARRIOR_API UFunction* Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FWaitSpawnEnemiesDelegate
struct Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics
{
	struct _Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms
	{
		TArray<AWarriorEnemyCharacter*> SpawnedEnemies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedEnemies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedEnemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::NewProp_SpawnedEnemies_Inner = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::NewProp_SpawnedEnemies = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms, SpawnedEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedEnemies_MetaData), NewProp_SpawnedEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::NewProp_SpawnedEnemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::NewProp_SpawnedEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Warrior, nullptr, "WaitSpawnEnemiesDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::_Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::_Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitSpawnEnemiesDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSpawnEnemiesDelegate, TArray<AWarriorEnemyCharacter*> const& SpawnedEnemies)
{
	struct _Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms
	{
		TArray<AWarriorEnemyCharacter*> SpawnedEnemies;
	};
	_Script_Warrior_eventWaitSpawnEnemiesDelegate_Parms Parms;
	Parms.SpawnedEnemies=SpawnedEnemies;
	WaitSpawnEnemiesDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitSpawnEnemiesDelegate

// Begin Class UAbilityTask_WaitSpawnEnemies Function WaitSpawnEnemies
struct Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics
{
	struct AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTag EventTag;
		TSoftClassPtr<AWarriorEnemyCharacter>  SoftEnemyClassToSpawn;
		int32 NumToSpawn;
		FVector SpawnOrigin;
		float RandomSpawnRadius;
		UAbilityTask_WaitSpawnEnemies* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Warrior|AbilityTasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\xa1\xb1\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xcb\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Boss\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xa3\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xc5\xba\xc5\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\"Boss.Skill.Summon\"\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\n// \xd2\xaa\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xca\xb2\xc3\xb4\xef\xbf\xbd\xd6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xe0\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xa1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd""3\xd6\xbb\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xe3\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Boss\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\n// \xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xf3\xa3\xbf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""200\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa7""200\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\n" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Wait Gameplay Event And Spawn Enemies" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
		{ "NumToSpawn", "1" },
		{ "RandomSpawnRadius", "200" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\xa1\xb1\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xcb\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Boss\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xa3\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xc5\xba\xc5\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\"Boss.Skill.Summon\"\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\n\xd2\xaa\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xca\xb2\xc3\xb4\xef\xbf\xbd\xd6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xe0\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xa1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd""3\xd6\xbb\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xe3\xa3\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Boss\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\n\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xf3\xa3\xbf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""200\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa7""200\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xbb\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftEnemyClassToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSpawnRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_SoftEnemyClassToSpawn = { "SoftEnemyClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, SoftEnemyClassToSpawn), Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_NumToSpawn = { "NumToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, NumToSpawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_SpawnOrigin = { "SpawnOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, SpawnOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOrigin_MetaData), NewProp_SpawnOrigin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_RandomSpawnRadius = { "RandomSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, RandomSpawnRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_SoftEnemyClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_NumToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_SpawnOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_RandomSpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies, nullptr, "WaitSpawnEnemies", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::AbilityTask_WaitSpawnEnemies_eventWaitSpawnEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitSpawnEnemies::execWaitSpawnEnemies)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_SOFTCLASS(TSoftClassPtr<AWarriorEnemyCharacter> ,Z_Param_SoftEnemyClassToSpawn);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumToSpawn);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SpawnOrigin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RandomSpawnRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitSpawnEnemies**)Z_Param__Result=UAbilityTask_WaitSpawnEnemies::WaitSpawnEnemies(Z_Param_OwningAbility,Z_Param_EventTag,Z_Param_SoftEnemyClassToSpawn,Z_Param_NumToSpawn,Z_Param_Out_SpawnOrigin,Z_Param_RandomSpawnRadius);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitSpawnEnemies Function WaitSpawnEnemies

// Begin Class UAbilityTask_WaitSpawnEnemies
void UAbilityTask_WaitSpawnEnemies::StaticRegisterNativesUAbilityTask_WaitSpawnEnemies()
{
	UClass* Class = UAbilityTask_WaitSpawnEnemies::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitSpawnEnemies", &UAbilityTask_WaitSpawnEnemies::execWaitSpawnEnemies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitSpawnEnemies);
UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_NoRegister()
{
	return UAbilityTask_WaitSpawnEnemies::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitSpawnEnemies_WaitSpawnEnemies, "WaitSpawnEnemies" }, // 572819819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitSpawnEnemies>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::NewProp_OnSpawnFinished = { "OnSpawnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitSpawnEnemies, OnSpawnFinished), Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpawnFinished_MetaData), NewProp_OnSpawnFinished_MetaData) }; // 2770422
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitSpawnEnemies, DidNotSpawn), Z_Construct_UDelegateFunction_Warrior_WaitSpawnEnemiesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DidNotSpawn_MetaData), NewProp_DidNotSpawn_MetaData) }; // 2770422
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::NewProp_OnSpawnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::NewProp_DidNotSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::ClassParams = {
	&UAbilityTask_WaitSpawnEnemies::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitSpawnEnemies.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitSpawnEnemies.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitSpawnEnemies.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UAbilityTask_WaitSpawnEnemies>()
{
	return UAbilityTask_WaitSpawnEnemies::StaticClass();
}
UAbilityTask_WaitSpawnEnemies::UAbilityTask_WaitSpawnEnemies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitSpawnEnemies);
UAbilityTask_WaitSpawnEnemies::~UAbilityTask_WaitSpawnEnemies() {}
// End Class UAbilityTask_WaitSpawnEnemies

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitSpawnEnemies, UAbilityTask_WaitSpawnEnemies::StaticClass, TEXT("UAbilityTask_WaitSpawnEnemies"), &Z_Registration_Info_UClass_UAbilityTask_WaitSpawnEnemies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitSpawnEnemies), 795211405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_2779410199(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnEnemies_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
