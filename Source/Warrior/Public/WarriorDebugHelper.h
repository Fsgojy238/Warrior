#pragma once

#include "Engine/Engine.h"  

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)  // FString �� UE �е��ַ�������
	{
		if (GEngine)  // GEngine��UE �е�ȫ������ָ�룬ָ��ǰ��Ϸ����ʵ����������Ƿ���ڣ��ǿգ��Ա��������
		{
			GEngine->AddOnScreenDebugMessage(InKey, 7.f, Color, Msg);

			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg); // Warning ����־���𣨿��ڿ���̨���ˣ� TEXT("%s") �Ǹ�ʽ���ַ�����*Msg �� FString ת��Ϊ const TCHAR*
		}
	}
}