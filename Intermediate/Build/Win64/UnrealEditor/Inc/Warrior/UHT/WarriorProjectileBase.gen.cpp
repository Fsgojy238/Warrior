// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Items/WarriorProjectileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorProjectileBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorProjectileBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorProjectileBase_NoRegister();
WARRIOR_API UEnum* Z_Construct_UEnum_Warrior_EProjectileDamagePolicy();
// End Cross Module References

// Begin Enum EProjectileDamagePolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileDamagePolicy;
static UEnum* EProjectileDamagePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy, (UObject*)Z_Construct_UPackage__Script_Warrior(), TEXT("EProjectileDamagePolicy"));
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton;
}
template<> WARRIOR_API UEnum* StaticEnum<EProjectileDamagePolicy>()
{
	return EProjectileDamagePolicy_StaticEnum();
}
struct Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
		{ "OnBeginOverlap.Name", "EProjectileDamagePolicy::OnBeginOverlap" },
		{ "OnHit.Name", "EProjectileDamagePolicy::OnHit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileDamagePolicy::OnHit", (int64)EProjectileDamagePolicy::OnHit },
		{ "EProjectileDamagePolicy::OnBeginOverlap", (int64)EProjectileDamagePolicy::OnBeginOverlap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Warrior,
	nullptr,
	"EProjectileDamagePolicy",
	"EProjectileDamagePolicy",
	Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Warrior_EProjectileDamagePolicy()
{
	if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton, Z_Construct_UEnum_Warrior_EProjectileDamagePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton;
}
// End Enum EProjectileDamagePolicy

// Begin Class AWarriorProjectileBase
void AWarriorProjectileBase::StaticRegisterNativesAWarriorProjectileBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorProjectileBase);
UClass* Z_Construct_UClass_AWarriorProjectileBase_NoRegister()
{
	return AWarriorProjectileBase::StaticClass();
}
struct Z_Construct_UClass_AWarriorProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/WarriorProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileNiagaraComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamagePolicy_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Items/WarriorProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileNiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileDamagePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileDamagePolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileCollisionBox = { "ProjectileCollisionBox", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCollisionBox_MetaData), NewProp_ProjectileCollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileNiagaraComponent = { "ProjectileNiagaraComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileNiagaraComponent_MetaData), NewProp_ProjectileNiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComp_MetaData), NewProp_ProjectileMovementComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy = { "ProjectileDamagePolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorProjectileBase, ProjectileDamagePolicy), Z_Construct_UEnum_Warrior_EProjectileDamagePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamagePolicy_MetaData), NewProp_ProjectileDamagePolicy_MetaData) }; // 2847725561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorProjectileBase_Statics::NewProp_ProjectileDamagePolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorProjectileBase_Statics::ClassParams = {
	&AWarriorProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorProjectileBase()
{
	if (!Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton, Z_Construct_UClass_AWarriorProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorProjectileBase.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorProjectileBase>()
{
	return AWarriorProjectileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorProjectileBase);
AWarriorProjectileBase::~AWarriorProjectileBase() {}
// End Class AWarriorProjectileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileDamagePolicy_StaticEnum, TEXT("EProjectileDamagePolicy"), &Z_Registration_Info_UEnum_EProjectileDamagePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2847725561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorProjectileBase, AWarriorProjectileBase::StaticClass, TEXT("AWarriorProjectileBase"), &Z_Registration_Info_UClass_AWarriorProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorProjectileBase), 654025422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_1607156218(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEprojects_Warrior_Source_Warrior_Public_Items_WarriorProjectileBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
