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
 * ��ȫ��ȡӵ�д������ Pawn ����ģ��汾��
 *
 * @tparam T - Ҫ���ص� Pawn ���ͣ�����̳��� APawn��
 * @return ӵ�д������ Pawn ����ָ�루����Ϊ T*��
 *
 * @��ע��ʹ�þ�̬����ȷ��ģ����� T �� APawn �����࣬
 *       ��ʹ�� CastChecked ����ǿ������ת����ȷ�����Ͱ�ȫ��
 * 
 * ʹ�ó��� Hero��Enemy ��ɫʱ��
 */
	template <class T>
	T* GetOwningPawn() const
	{
		// ��̬���ԣ�ȷ��ģ�����T��APawn�����࣬���T����APawn�����࣬�������ᱨ��
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' Template Parameter get GetPawn must be derived from APawn");
		// ʹ�� CastChecked ����ǿת�����ת��ʧ�ܣ���Owner����T���ͣ����ᴥ�����Դ���
		return CastChecked<T>(GetOwner());
	}

	/**
 * ��ȡӵ�д������ Pawn ���󣨷�ģ��汾��
 *
 * @return ӵ�д������ Pawn ����ָ�룬���ӵ���߲��� Pawn �򷵻� nullptr
 *
 * @��ע���˷���������ģ�巽�� GetOwningPawn<APawn>()������������
 */
	APawn* GetOwningPawn() const
	{
		return GetOwningPawn<APawn>();
	}
};
