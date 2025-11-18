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
 */
	APawn* GetOwningPawn() const
	{
		return GetOwningPawn<APawn>();
	}

/**
 * 获取拥有此组件的 Controller 
 */
	template <class T>
	T* GetOwningController() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, AController>::Value, "'T' Template Parameter to GetController must be derived from AController");
		return GetOwningPawn<APawn>()->GetController<T>();
	}
};
