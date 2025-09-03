// Eric Chen 

#pragma once

#include "CoreMinimal.h"
#include "WarriorTypes/WarriorEnumTypes.h"

class FWarriorCountDownAction : public FPendingLatentAction
{
public: 
	FWarriorCountDownAction(float InTotalDownCountTime, float InUpdateInterval, float& InOutRemainingTime, EWarriorCountDownActionOutput& InCountDownOutput, const FLatentActionInfo& LatentInfo)
		: bNeedToCancel(false), TotalCountDownTime(InTotalDownCountTime), UpdateInterval(InUpdateInterval), OutRemainingTime(InOutRemainingTime),
		CountDownOutput(InCountDownOutput), ExecutionFucntion(LatentInfo.ExecutionFunction), OutputLink(LatentInfo.Linkage), CallbackTarget(LatentInfo.CallbackTarget),
		ElapsedInterval(0.f), ElapsedTimeSinceStart(0.f)
	{}

	virtual void UpdateOperation(FLatentResponse& Response) override;

	void CancelAction();

private:
	bool bNeedToCancel;               // 是否需要取消倒计时（比如技能被打断）
	float TotalCountDownTime;         // 总倒计时时间（比如5秒）
	float UpdateInterval;             // 每次更新的间隔（比如0.1秒，控制数字刷新频率）
	float& OutRemainingTime;          // 引用外部的"剩余时间"变量（改它=改UI显示的数字）
	EWarriorCountDownActionOutput& CountDownOutput;  // 引用外部的状态变量（比如通知"倒计时结束"）
	FName ExecutionFucntion;          // 倒计时结束后要调用的函数名
	int32 OutputLink;                 // 蓝图中后续要执行的节点索引（找到下一个节点）
	FWeakObjectPtr CallbackTarget;    // 回调的目标对象（比如技能组件，让它执行结束逻辑）
	float ElapsedInterval;            // 累计的"距离上次更新"的时间（到UpdateInterval就刷新）
	float ElapsedTimeSinceStart;      // 累计的总耗时（超过TotalCountDownTime就结束）
};

