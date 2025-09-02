// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorTypes/WarriorEnumTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorEnumTypes() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorConfirmType();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorSuccessType();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorValidType();
// End Cross Module References

// Begin Enum EWarriorConfirmType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorConfirmType;
static UEnum* EWarriorConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorConfirmType, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorConfirmType"));
	}
	return Z_Registration_Info_UEnum_EWarriorConfirmType.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorConfirmType>()
{
	return EWarriorConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorEnumTypes.h" },
		{ "No.Name", "EWarriorConfirmType::No" },
		{ "Yes.Name", "EWarriorConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorConfirmType::Yes", (int64)EWarriorConfirmType::Yes },
		{ "EWarriorConfirmType::No", (int64)EWarriorConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorConfirmType",
	"EWarriorConfirmType",
	Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorConfirmType()
{
	if (!Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorConfirmType.InnerSingleton;
}
// End Enum EWarriorConfirmType

// Begin Enum EWarriorValidType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorValidType;
static UEnum* EWarriorValidType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorValidType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorValidType, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorValidType"));
	}
	return Z_Registration_Info_UEnum_EWarriorValidType.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorValidType>()
{
	return EWarriorValidType_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorValidType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EWarriorValidType::Invalid" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorEnumTypes.h" },
		{ "Valid.Name", "EWarriorValidType::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorValidType::Valid", (int64)EWarriorValidType::Valid },
		{ "EWarriorValidType::Invalid", (int64)EWarriorValidType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorValidType",
	"EWarriorValidType",
	Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorValidType()
{
	if (!Z_Registration_Info_UEnum_EWarriorValidType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorValidType.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorValidType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorValidType.InnerSingleton;
}
// End Enum EWarriorValidType

// Begin Enum EWarriorSuccessType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorSuccessType;
static UEnum* EWarriorSuccessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorSuccessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorSuccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorSuccessType, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorSuccessType"));
	}
	return Z_Registration_Info_UEnum_EWarriorSuccessType.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorSuccessType>()
{
	return EWarriorSuccessType_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failed.Name", "EWarriorSuccessType::Failed" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorEnumTypes.h" },
		{ "Successful.Name", "EWarriorSuccessType::Successful" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorSuccessType::Successful", (int64)EWarriorSuccessType::Successful },
		{ "EWarriorSuccessType::Failed", (int64)EWarriorSuccessType::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorSuccessType",
	"EWarriorSuccessType",
	Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorSuccessType()
{
	if (!Z_Registration_Info_UEnum_EWarriorSuccessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorSuccessType.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorSuccessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorSuccessType.InnerSingleton;
}
// End Enum EWarriorSuccessType

// Begin Enum EWarriorCountDownActionInput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorCountDownActionInput;
static UEnum* EWarriorCountDownActionInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorCountDownActionInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorCountDownActionInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorCountDownActionInput"));
	}
	return Z_Registration_Info_UEnum_EWarriorCountDownActionInput.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorCountDownActionInput>()
{
	return EWarriorCountDownActionInput_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cancel.Name", "EWarriorCountDownActionInput::Cancel" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorEnumTypes.h" },
		{ "Start.Name", "EWarriorCountDownActionInput::Start" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorCountDownActionInput::Start", (int64)EWarriorCountDownActionInput::Start },
		{ "EWarriorCountDownActionInput::Cancel", (int64)EWarriorCountDownActionInput::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorCountDownActionInput",
	"EWarriorCountDownActionInput",
	Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput()
{
	if (!Z_Registration_Info_UEnum_EWarriorCountDownActionInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorCountDownActionInput.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorCountDownActionInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorCountDownActionInput.InnerSingleton;
}
// End Enum EWarriorCountDownActionInput

// Begin Enum EWarriorCountDownActionOutput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorCountDownActionOutput;
static UEnum* EWarriorCountDownActionOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EWarriorCountDownActionOutput"));
	}
	return Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EWarriorCountDownActionOutput>()
{
	return EWarriorCountDownActionOutput_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cancelled.Name", "EWarriorCountDownActionOutput::Cancelled" },
		{ "Completed.Name", "EWarriorCountDownActionOutput::Completed" },
		{ "ModuleRelativePath", "Public/WarriorTypes/WarriorEnumTypes.h" },
		{ "Updated.Name", "EWarriorCountDownActionOutput::Updated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorCountDownActionOutput::Updated", (int64)EWarriorCountDownActionOutput::Updated },
		{ "EWarriorCountDownActionOutput::Completed", (int64)EWarriorCountDownActionOutput::Completed },
		{ "EWarriorCountDownActionOutput::Cancelled", (int64)EWarriorCountDownActionOutput::Cancelled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EWarriorCountDownActionOutput",
	"EWarriorCountDownActionOutput",
	Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput()
{
	if (!Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.InnerSingleton, Z_Construct_UEnum_Warrior_EWarriorCountDownActionOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorCountDownActionOutput.InnerSingleton;
}
// End Enum EWarriorCountDownActionOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorConfirmType_StaticEnum, TEXT("EWarriorConfirmType"), &Z_Registration_Info_UEnum_EWarriorConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1841062664U) },
		{ EWarriorValidType_StaticEnum, TEXT("EWarriorValidType"), &Z_Registration_Info_UEnum_EWarriorValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2216850729U) },
		{ EWarriorSuccessType_StaticEnum, TEXT("EWarriorSuccessType"), &Z_Registration_Info_UEnum_EWarriorSuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3005604401U) },
		{ EWarriorCountDownActionInput_StaticEnum, TEXT("EWarriorCountDownActionInput"), &Z_Registration_Info_UEnum_EWarriorCountDownActionInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3648965920U) },
		{ EWarriorCountDownActionOutput_StaticEnum, TEXT("EWarriorCountDownActionOutput"), &Z_Registration_Info_UEnum_EWarriorCountDownActionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1618345052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_4017879569(TEXT("/Script/Warrior"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
