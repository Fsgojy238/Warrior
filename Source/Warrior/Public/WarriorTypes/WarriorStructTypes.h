// Eric Chen 

#pragma once

#include "GameplayTagContainer.h"
#include "ScalableFloat.h"

#include "WarriorStructTypes.generated.h"

class UWarriorHeroLinkedAnimLayer;
class UWarriorHeroGameplayAbility;
class UInputMappingContext;


/**
 * 英雄能力集结构体，用于定义能力与输入的关联
 */
USTRUCT(BlueprintType)
struct FWarriorHeroAbilitySet
{
	GENERATED_BODY()

	/** 关联的输入标签（用于绑定输入） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	/** 要授予的游戏能力类 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UWarriorHeroGameplayAbility> AbilityToGrant;

	/** 检查该能力集是否有效（输入标签和能力类是否存在） */
	bool IsValid() const;
};

/**
 * 英雄特殊能力集结构体，继承基础能力集，扩展特殊能力属性
 */
USTRUCT(BlueprintType)
struct FWarriorHeroSpecialAbilitySet : public FWarriorHeroAbilitySet
{
	GENERATED_BODY()

	/** 能力图标的软引用材质（延迟加载） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInterface> SoftAbilityIconMaterial;

	/** 能力冷却相关的游戏标签 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Player.Cooldown"))
	FGameplayTag AbilityCooldownTag;

};

/**
 * 英雄武器数据结构体，存储武器相关的配置信息
 */
USTRUCT(BlueprintType)
struct FWarriorHeroWeaponData
{
	GENERATED_BODY()

	/** 武器要关联的动画层类 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UWarriorHeroLinkedAnimLayer> WeaponAnimLayerToLink;

	/** 武器对应的输入映射上下文 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* WeaponInputMappingContext;

	/** 武器的默认能力集列表（按输入标签组织） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FWarriorHeroAbilitySet> DefaultWeaponAbilities;

	/** 武器的特殊能力集列表（按输入标签组织） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FWarriorHeroSpecialAbilitySet> SpecialWeaponAbilities;

	/** 武器的基础伤害值（可缩放） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FScalableFloat WeaponBaseDamage;

	/** 武器图标的软引用纹理（延迟加载） */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> SoftWeaponIconTexture;
};