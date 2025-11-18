// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WarriorFunctionLibrary.h"

#ifdef WARRIOR_WarriorFunctionLibrary_generated_h
#error "WarriorFunctionLibrary.generated.h already included, missing '#pragma once' in WarriorFunctionLibrary.h"
#endif
#define WARRIOR_WarriorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APawn;
class UObject;
class UPawnCombatComponent;
class UWarriorGameInstance;
enum class EWarriorConfirmType : uint8;
enum class EWarriorCountDownActionInput : uint8;
enum class EWarriorCountDownActionOutput : uint8;
enum class EWarriorGameDifficulty : uint8;
enum class EWarriorInputMode : uint8;
enum class EWarriorValidType : uint8;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;
struct FLatentActionInfo;
struct FScalableFloat;

// ********** Begin Class UWarriorFunctionLibrary **************************************************
#define FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryLoadSavedGameDifficulty); \
	DECLARE_FUNCTION(execSaveCurrentDifficulty); \
	DECLARE_FUNCTION(execToggleInputMode); \
	DECLARE_FUNCTION(execGetWarriorGameInstance); \
	DECLARE_FUNCTION(execCountDown); \
	DECLARE_FUNCTION(execApplyGameplayEffectSpecHandleToTargetActor); \
	DECLARE_FUNCTION(execIsValidBlock); \
	DECLARE_FUNCTION(execComputeHitReacDirectionTag); \
	DECLARE_FUNCTION(execGetScalableFloatValueAtLevel); \
	DECLARE_FUNCTION(execIsTargetPawnHostile); \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayTagFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarriorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWarriorFunctionLibrary)


#define FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarriorFunctionLibrary(UWarriorFunctionLibrary&&) = delete; \
	UWarriorFunctionLibrary(const UWarriorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorFunctionLibrary) \
	NO_API virtual ~UWarriorFunctionLibrary();


#define FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_19_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarriorFunctionLibrary;

// ********** End Class UWarriorFunctionLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_WarriorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
