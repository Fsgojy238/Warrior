// Eric Chen 


#include "Controllers/WarriorHeroController.h"

AWarriorHeroController::AWarriorHeroController()
{
	HeroTeamID = FGenericTeamId(0);
}

FGenericTeamId AWarriorHeroController::GetGenericTeamId() const
{
	return HeroTeamID;
}

//// 在WarriorHeroController的输入处理函数中
//void AWarriorHeroController::SetupInputComponent()
//{
//	Super::SetupInputComponent();
//	InputComponent->BindAxis("Turn", this, &AWarriorHeroController::HandleTurn);
//	InputComponent->BindAxis("LookUp", this, &AWarriorHeroController::HandleLookUp);
//}
//
//void AWarriorHeroController::HandleTurn(float Value)
//{
//	// 若处于锁定状态，屏蔽水平旋转输入
//	if (IsTargetLocked())
//		return;
//	AddYawInput(Value);
//}
//
//void AWarriorHeroController::HandleLookUp(float Value)
//{
//	// 垂直旋转可保留（允许抬头低头）
//	AddPitchInput(Value);
//}
//
//bool AWarriorHeroController::IsTargetLocked()
//{
//	return false;
//}
