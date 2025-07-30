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

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorConfirmType_StaticEnum, TEXT("EWarriorConfirmType"), &Z_Registration_Info_UEnum_EWarriorConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1841062664U) },
		{ EWarriorValidType_StaticEnum, TEXT("EWarriorValidType"), &Z_Registration_Info_UEnum_EWarriorValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2216850729U) },
		{ EWarriorSuccessType_StaticEnum, TEXT("EWarriorSuccessType"), &Z_Registration_Info_UEnum_EWarriorSuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3005604401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_3319117658(TEXT("/Script/Warrior"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_WarriorTypes_WarriorEnumTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
