// Eric Chen 


#include "Components/UI/EnemyUIComponent.h"
#include "Widegts/WarriorWidgetBase.h"


void UEnemyUIComponent::RegisterEnemyDrawnWidget(UWarriorWidgetBase* InWidgetToRegister)
{
	EnemyDrawnWidgets.Add(InWidgetToRegister);
}

void UEnemyUIComponent::RemoveEnemyDrawnWidgetsIfAny()
{
	if (EnemyDrawnWidgets.IsEmpty())
	{
		return;
	}

	for (UWarriorWidgetBase* DrawnWidget : EnemyDrawnWidgets)
	{
		if (DrawnWidget)
		{
			//È¥³ý¿Ø¼þ
			DrawnWidget->RemoveFromParent();
		}
	}
	EnemyDrawnWidgets.Empty();
}
