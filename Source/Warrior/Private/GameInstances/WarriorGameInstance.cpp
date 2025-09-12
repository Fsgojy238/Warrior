// Eric Chen 


#include "GameInstances/WarriorGameInstance.h"

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
