// Eric Chen 


#include "Controllers/WarriorAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception//AISenseConfig_Sight.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "WarriorDebugHelper.h"

// C++初始化列表
AWarriorAIController::AWarriorAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent"))
{
	//获取路径跟随组件
	if (UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
	{
		Debug::Print(TEXT("CrowdFollowingComponent valid"), FColor::Green);
	}

	// 创建视觉感知配置（AI的"眼睛参数设置"）
	AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("EnemySenseConfig_Sight");

	// 视觉识别规则：只检测敌人，忽略友军和中立单位
	AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false;
	AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false;

	// 视觉性能参数：5000单位视野范围，360度全向视野
	AISenseConfig_Sight->SightRadius = 5000.f;          // 可见距离
	AISenseConfig_Sight->LoseSightRadius = 0.f;         
	AISenseConfig_Sight->PeripheralVisionAngleDegrees = 360.f;  // 视野角度

	// 创建感知组件（AI的"视觉中枢"，处理视觉信息）
	EnemyPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("EnemyPerceptionComponent");

	// 将视觉配置绑定到感知组件，设置主要感知方式为视觉
	EnemyPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);  // 关联视觉参数
	EnemyPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());  // 视觉优先

	// 绑定感知回调：当检测到目标（如玩家）状态变化时，触发OnEnemyPerceptionUpdated函数
	EnemyPerceptionComponent->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &ThisClass::OnEnemyPerceptionUpdated);

	// 设置阵营ID为1
	SetGenericTeamId(FGenericTeamId(1));

}

ETeamAttitude::Type AWarriorAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	// 把 “其他角色” 转换成 “Pawn” 类型
	const APawn* PawnToCheck = Cast<const APawn>(&Other);

	// 从“其他角色的控制器”里，获取“阵营接口”，因为Controller里存着阵营信息。
	const IGenericTeamAgentInterface* OtherTeamAgent = Cast<const IGenericTeamAgentInterface>(PawnToCheck->GetController());

	if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() != GetGenericTeamId())
	{
		return ETeamAttitude::Hostile;
	}

	return ETeamAttitude::Friendly;
}

void AWarriorAIController::OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed() && Actor)
	{
		if (UBlackboardComponent* BlackboardComponent = GetBlackboardComponent())
		{
			BlackboardComponent->SetValueAsObject(FName("TargetActor"), Actor);
		}
	}
}
