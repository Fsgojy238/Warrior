// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarrior_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Warrior;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Warrior()
	{
		if (!Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Warrior",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x31DAC6E2,
				0x2991DB38,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Warrior.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Warrior(Z_Construct_UPackage__Script_Warrior, TEXT("/Script/Warrior"), Z_Registration_Info_UPackage__Script_Warrior, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x31DAC6E2, 0x2991DB38));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
