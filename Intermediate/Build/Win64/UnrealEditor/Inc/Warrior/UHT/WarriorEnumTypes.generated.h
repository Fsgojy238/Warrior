// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WarriorTypes/WarriorEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_WarriorEnumTypes_generated_h
#error "WarriorEnumTypes.generated.h already included, missing '#pragma once' in WarriorEnumTypes.h"
#endif
#define WARRIOR_WarriorEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h


#define FOREACH_ENUM_EWARRIORCONFIRMTYPE(op) \
	op(EWarriorConfirmType::Yes) \
	op(EWarriorConfirmType::No) 

enum class EWarriorConfirmType : uint8;
template<> struct TIsUEnumClass<EWarriorConfirmType> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorConfirmType>();

#define FOREACH_ENUM_EWARRIORVALIDTYPE(op) \
	op(EWarriorValidType::Valid) \
	op(EWarriorValidType::Invalid) 

enum class EWarriorValidType : uint8;
template<> struct TIsUEnumClass<EWarriorValidType> { enum { Value = true }; };
template<> WARRIOR_API UEnum* StaticEnum<EWarriorValidType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
