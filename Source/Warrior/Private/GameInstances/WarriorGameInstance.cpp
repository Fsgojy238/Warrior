// Eric Chen 


#include "GameInstances/WarriorGameInstance.h"
#include "MoviePlayer.h"

void UWarriorGameInstance::Init()
{
	Super::Init();

	// 绑定“地图加载前”的事件：当要开始加载新地图时，自动触发OnPreLoadMap函数
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &ThisClass::OnPreLoadMap);
	// 绑定“地图加载完成”的事件：当新地图完全加载好后，自动触发OnDestinationWorldLoaded函数
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &ThisClass::OnDestinationWorldLoaded);
}

void UWarriorGameInstance::OnPreLoadMap(const FString& MapName)
{
	// 创建加载界面的属性配置（控制加载界面怎么显示）
	FLoadingScreenAttributes LoadingScreenAttributes;
	// 配置1：加载完成后，自动关闭加载界面
	LoadingScreenAttributes.bAutoCompleteWhenLoadingCompletes = true;
	// 配置2：加载界面最少显示2秒（防止加载太快导致界面闪一下就消失）
	LoadingScreenAttributes.MinimumLoadingScreenDisplayTime = 2.f;
	// 配置3：用引擎自带的“测试加载界面”作为显示内容（实际项目会替换成自定义界面）
	LoadingScreenAttributes.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();

	// 根据上面的配置，显示加载界面
	GetMoviePlayer()->SetupLoadingScreen(LoadingScreenAttributes);
}

void UWarriorGameInstance::OnDestinationWorldLoaded(UWorld* LoadedWorld)
{
	GetMoviePlayer()->StopMovie();
}

TSoftObjectPtr<UWorld> UWarriorGameInstance::GetGameLevelByTag(FGameplayTag InTag) const
{
	if (InTag.IsValid())
	{
		for (const FWarriorGameLevelSet& GameLevelSet : GameLevelSets)
		{
			if (!GameLevelSet.IsValid())
			{
				continue;
			}

			if (GameLevelSet.LevelTag == InTag)
			{
				return GameLevelSet.Level;
			}
		}
	}

	return TSoftObjectPtr<UWorld>();
}
