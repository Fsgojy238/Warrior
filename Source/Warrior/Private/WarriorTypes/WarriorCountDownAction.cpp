// Eric Chen 


#include "WarriorTypes/WarriorCountDownAction.h"


// 每帧执行的更新函数（延迟动作的核心逻辑）
// 作用：判断倒计时状态（取消/完成/进行中），更新时间并触发外部回调（如UI刷新）
void FWarriorCountDownAction::UpdateOperation(FLatentResponse& Response)
{
	// 1. 如果需要取消倒计时（如技能被打断）
	if (bNeedToCancel)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Cancelled;  // 标记状态为"已取消"
		// 结束当前延迟动作，并触发后续回调（通知外部"倒计时已取消"）
		Response.FinishAndTriggerIf(true, ExecutionFucntion, OutputLink, CallbackTarget);
		return;  // 退出函数，不再执行后续逻辑
	}

	// 2. 如果总耗时超过总倒计时时间（倒计时结束）
	if (ElapsedTimeSinceStart >= TotalCountDownTime)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Completed;  // 标记状态为"已完成"
		// 结束当前延迟动作，并触发后续回调（通知外部"倒计时结束"）
		Response.FinishAndTriggerIf(true, ExecutionFucntion, OutputLink, CallbackTarget);
		return;  // 退出函数，不再执行后续逻辑
	}

	// 3. 倒计时进行中：累计时间并判断是否需要更新外部状态（如UI数字）
	// 3.1 如果距离上次更新的时间还没到设定的间隔（如0.1秒），继续累计时间
	if (ElapsedInterval < UpdateInterval)
	{
		ElapsedInterval += Response.ElapsedTime();  // 累加当前帧的耗时（距离上次更新的时间）
	}
	// 3.2 达到更新间隔，需要刷新外部状态
	else
	{
		// 累加总耗时（用更新间隔或实际帧时间，避免误差）
		ElapsedTimeSinceStart += UpdateInterval > 0.f ? UpdateInterval : Response.ElapsedTime();
		// 计算剩余时间（总时间 - 已耗时），同步到外部变量（UI会显示这个值）
		OutRemainingTime = TotalCountDownTime - ElapsedTimeSinceStart;
		CountDownOutput = EWarriorCountDownActionOutput::Updated;  // 标记状态为"已更新"
		// 触发外部更新回调（不结束动作，只是通知UI刷新数字）
		Response.TriggerLink(ExecutionFucntion, OutputLink, CallbackTarget);
		ElapsedInterval = 0.f;  // 重置"距离上次更新的时间"，开始下一轮累计
	}
}

void FWarriorCountDownAction::CancelAction()
{
	bNeedToCancel = true;
}
