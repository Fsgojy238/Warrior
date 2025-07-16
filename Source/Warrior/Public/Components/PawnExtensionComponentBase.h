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
 * 使用场景 Hero和Enemy 角色时、
 */
	template <class T>
	T* GetOwningPawn() const
	{
		// 静态断言：确保模板参数T是APawn的子类，如果T不是APawn的子类，编译器会报错。
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' Template Parameter get GetPawn must be derived from APawn");
		// 使用 CastChecked 进行强转，如果转换失败（即Owner不是T类型），会触发断言错误
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
};
