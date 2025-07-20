// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnExtensionComponentBase.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WARRIOR_API UPawnExtensionComponentBase : public UActorComponent
{
	GENERATED_BODY()

protected:

	/**
 * 安全获取拥有此组件的 Pawn 对象（模板版本）
 *
 * @tparam T - 要返回的 Pawn 类型（必须继承自 APawn）
 * @return 拥有此组件的 Pawn 对象指针（类型为 T*）
 *
 * @备注：使用静态断言确保模板参数 T 是 APawn 的子类，
 *       并使用 CastChecked 进行强制类型转换，确保类型安全。
 * 
 */
	template <class T>
	T* GetOwningPawn() const
	{
		// 静态断言：确保模板参数T是APawn的子类，如果T不是APawn的子类，编译器会报错。
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' Template Parameter get GetPawn must be derived from APawn");
		return CastChecked<T>(GetOwner());
	}

	/**
 * 获取拥有此组件的 Pawn 对象（非模板版本）
 *
 * @return 拥有此组件的 Pawn 对象指针，如果拥有者不是 Pawn 则返回 nullptr
 *
 * @备注：此方法调用了模板方法 GetOwningPawn<APawn>()，并返回其结果
 */
	APawn* GetOwningPawn() const
	{
		return GetOwningPawn<APawn>();
	}

	template <class T>
	T* GetOwningController() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, AController>::Value, "'T' Template Parameter to GetController must be derived from AController");
		return GetOwningPawn<APawn>()->GetController<T>();
	}
};
