// Eric Chen 


#include "Characters/WarriorHeroCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/Input/WarriorInputComponent.h"
#include "WarriorGameplayTags.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"

#include "WarriorDebugHelper.h"

AWarriorHeroCharacter::AWarriorHeroCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f); //��ʼ����������ײ����������˿�Ⱥ͸߶ȵ���ײ�����
	
	// ���ÿ�����ֱ����ת��ɫ  pitch�����¿�����roll�����㣩��yaw������ת��
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
    
	//���õ��ɱۣ�Spring Arm��
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent()); // �����ɱ۹̶��������� GetMesh()��ý�ɫ�����񣨽����壩
	CameraBoom->TargetArmLength = 200.f; //���ñ۳�

	/*
	�������ɱ�ĩ�˵�λ�ã�SocketOffset �ǵ��ɱ�ĩ�˲����������Ĭ��λ�õ�ƫ������
	X=0.f��ǰ������ƫ��Y=55.f������ƫ�� 55 ���ף���ɫ�ҲࣩZ=65.f������ƫ�� 65 ���ף���ɫͷ������
	*/
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f); 
	CameraBoom->bUsePawnControlRotation = true; //�Ƿ������ת

	//���������
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); //SocketName �ǵ��ɱ�ĩ�˵�һ������㣬���ͨ��������������ϡ�

	//���ý�ɫ�ƶ�����
	GetCharacterMovement()->bOrientRotationToMovement = true; //��ɫ�Զ�ת���ƶ�����
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f); //��ת�ٶ�
	GetCharacterMovement()->MaxWalkSpeed = 400.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f; //����ʱ���ƶ����ٶ�

}

void AWarriorHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!CharacterStartUpData.IsNull())
	{
		if (UDataAsset_StartUpDataBase* LoadedData = CharacterStartUpData.LoadSynchronous())
		{
			LoadedData->GiveToAbilitySystemComponent(WarriorAbilitySystemComponent);
		}
	}
}

void AWarriorHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"));

	// ��ȡ ������ �� ��ǿ������ϵͳ
	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	check(Subsystem);

	//��������ӳ�������ģ�0Ϊ���ȼ�
	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	// ת����ʹ���Զ����������
	UWarriorInputComponent* WarriorInputComponent = CastChecked<UWarriorInputComponent>(PlayerInputComponent);

	// ���ƶ����ӽ����뵽��Ӧ����
	WarriorInputComponent->BindNativeInputAction(InputConfigDataAsset, WarriorGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move);
	WarriorInputComponent->BindNativeInputAction(InputConfigDataAsset, WarriorGameplayTags::InputTag_Look, ETriggerEvent::Triggered, this, &ThisClass::Input_Look);

}

void AWarriorHeroCharacter::BeginPlay()
{
	Super::BeginPlay(); // ���ø����BeginPlay

}

void AWarriorHeroCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);  //��ȡ�������� Yaw��ˮƽ��ת����ȷ���ƶ��������ӽ�һ�¡�

	if (MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.Y);
	}

	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AWarriorHeroCharacter::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	if (LookAxisVector.X != 0.f)
	{
		AddControllerYawInput(LookAxisVector.X);
	}

	if (LookAxisVector.Y != 0.f)
	{
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
