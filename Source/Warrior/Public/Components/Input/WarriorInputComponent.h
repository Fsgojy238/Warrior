// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "WarriorInputComponent.generated.h"


/**
 * 自定义增强输入组件，扩展输入绑定功能，支持通过配置文件和游戏标签绑定输入
 */
UCLASS()
class WARRIOR_API UWarriorInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
public:

	/**
	 * 绑定原生输入动作（如，Move，Look）
	 * @param InInputConfig 输入配置数据资产
	 * @param InInputTag 标识输入的游戏标签
	 * @param TriggerEvent 输入触发事件类型
	 * @param ContextObject 回调函数所属对象
	 * @param Func 输入触发时调用的回调函数
	 */
	template<class UserObject,typename CallbackFunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func);
		
	/**
	 * 绑定能力相关输入动作
	 * @param InInputConfig 输入配置数据资产
	 * @param ContextObject 回调函数所属对象
	 * @param InputPressedFunc 输入按下时的回调函数
	 * @param InputReleasedFunc 输入释放时的回调函数
	 */
	template<class UserObject, typename CallbackFunc>
	void BindAbilityInputAction(const UDataAsset_InputConfig* InInputConfig, UserObject* ContextObject, CallbackFunc InputPressedFunc, CallbackFunc InputReleasedFunc);

};

template<class UserObject, typename CallbackFunc>
inline void UWarriorInputComponent::BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func)
{
	// 检查输入配置是否有效，无效则报错
	checkf(InInputConfig, TEXT("Input config data asset is null, can not proceed with binding"));

	// 从配置中查找与标签匹配的输入动作，找到则绑定
	if (UInputAction* FoundAction = InInputConfig->FindNativeInputActionByTag(InInputTag))
	{
		BindAction(FoundAction, TriggerEvent, ContextObject, Func);
	}
}

/**
 * 绑定能力输入动作的模板实现
 * 遍历配置中的能力输入动作，分别绑定按下和释放事件
 */
template<class UserObject, typename CallbackFunc>
void UWarriorInputComponent::BindAbilityInputAction(const UDataAsset_InputConfig* InInputConfig, UserObject* ContextObject, CallbackFunc InputPressedFunc, CallbackFunc InputReleasedFunc)
{
	// 检查输入配置是否有效，无效则报错
	checkf(InInputConfig, TEXT("Input config data asset is null, can not proceed with binding"));

	// 遍历配置中的所有能力输入动作配置
	for (const FWarriorInputActionConfig& AbilityInputActionConfig : InInputConfig->AbilityInputActions)
	{
		// 跳过无效的输入配置
		if (!AbilityInputActionConfig.IsValid()) continue;

		// 绑定输入按下（开始）和释放（完成）事件
		BindAction(AbilityInputActionConfig.InputAction, ETriggerEvent::Started, ContextObject, InputPressedFunc, AbilityInputActionConfig.InputTag);
		BindAction(AbilityInputActionConfig.InputAction, ETriggerEvent::Completed, ContextObject, InputReleasedFunc, AbilityInputActionConfig.InputTag);

	}
}
