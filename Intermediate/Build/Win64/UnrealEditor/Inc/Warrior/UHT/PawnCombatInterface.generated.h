// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PawnCombatInterface.h"

#ifdef WARRIOR_PawnCombatInterface_generated_h
#error "PawnCombatInterface.generated.h already included, missing '#pragma once' in PawnCombatInterface.h"
#endif
#define WARRIOR_PawnCombatInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPawnCombatInterface *************************************************
WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();

#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WARRIOR_API UPawnCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnCombatInterface(UPawnCombatInterface&&) = delete; \
	UPawnCombatInterface(const UPawnCombatInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WARRIOR_API, UPawnCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatInterface) \
	virtual ~UPawnCombatInterface() = default;


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnCombatInterface(); \
	friend struct Z_Construct_UClass_UPawnCombatInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIOR_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Warrior"), Z_Construct_UClass_UPawnCombatInterface_NoRegister) \
	DECLARE_SERIALIZER(UPawnCombatInterface)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnCombatInterface() {} \
public: \
	typedef UPawnCombatInterface UClassType; \
	typedef IPawnCombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_14_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnCombatInterface;

// ********** End Interface UPawnCombatInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
