// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/SaveGame/WarriorSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorSaveGame();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorSaveGame_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EWarriorGameDifficulty();
// End Cross Module References

// Begin Class UWarriorSaveGame
void UWarriorSaveGame::StaticRegisterNativesUWarriorSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorSaveGame);
UClass* Z_Construct_UClass_UWarriorSaveGame_NoRegister()
{
	return UWarriorSaveGame::StaticClass();
}
struct Z_Construct_UClass_UWarriorSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGame/WarriorSaveGame.h" },
		{ "ModuleRelativePath", "Public/SaveGame/WarriorSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCurrentGameDifficulty_MetaData[] = {
		{ "Category", "WarriorSaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/WarriorSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SavedCurrentGameDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SavedCurrentGameDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWarriorSaveGame_Statics::NewProp_SavedCurrentGameDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWarriorSaveGame_Statics::NewProp_SavedCurrentGameDifficulty = { "SavedCurrentGameDifficulty", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorSaveGame, SavedCurrentGameDifficulty), Z_Construct_UEnum_Warrior_EWarriorGameDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCurrentGameDifficulty_MetaData), NewProp_SavedCurrentGameDifficulty_MetaData) }; // 1999907421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorSaveGame_Statics::NewProp_SavedCurrentGameDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorSaveGame_Statics::NewProp_SavedCurrentGameDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorSaveGame_Statics::ClassParams = {
	&UWarriorSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorSaveGame()
{
	if (!Z_Registration_Info_UClass_UWarriorSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorSaveGame.OuterSingleton, Z_Construct_UClass_UWarriorSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorSaveGame.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<UWarriorSaveGame>()
{
	return UWarriorSaveGame::StaticClass();
}
UWarriorSaveGame::UWarriorSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorSaveGame);
UWarriorSaveGame::~UWarriorSaveGame() {}
// End Class UWarriorSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorSaveGame, UWarriorSaveGame::StaticClass, TEXT("UWarriorSaveGame"), &Z_Registration_Info_UClass_UWarriorSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorSaveGame), 3395289370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_3636673813(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_SaveGame_WarriorSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
