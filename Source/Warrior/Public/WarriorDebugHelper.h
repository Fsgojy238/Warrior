#pragma once

#include "Engine/Engine.h"  

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)  // FString 是 UE 中的字符串类型
	{
		if (GEngine)  // GEngine：UE 中的全局引擎指针，指向当前游戏引擎实例。检查其是否存在（非空）以避免崩溃。
		{
			GEngine->AddOnScreenDebugMessage(InKey, 7.f, Color, Msg);

			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg); // Warning 是日志级别（可在控制台过滤） TEXT("%s") 是格式化字符串，*Msg 将 FString 转换为 const TCHAR*
		}
	}
}