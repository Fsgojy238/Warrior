// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PawnCombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_PawnCombatInterface_generated_h
#error "PawnCombatInterface.generated.h already included, missing '#pragma once' in PawnCombatInterface.h"
#endif
#define WARRIOR_PawnCombatInterface_generated_h

#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WARRIOR_API UPawnCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnCombatInterface(UPawnCombatInterface&&); \
	UPawnCombatInterface(const UPawnCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WARRIOR_API, UPawnCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatInterface) \
	WARRIOR_API virtual ~UPawnCombatInterface();


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnCombatInterface(); \
	friend struct Z_Construct_UClass_UPawnCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Warrior"), WARRIOR_API) \
	DECLARE_SERIALIZER(UPawnCombatInterface)


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnCombatInterface() {} \
public: \
	typedef UPawnCombatInterface UClassType; \
	typedef IPawnCombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_12_PROLOG
#define FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UPawnCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_Interface_PawnCombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
