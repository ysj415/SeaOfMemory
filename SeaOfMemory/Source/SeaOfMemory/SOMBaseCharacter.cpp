// Fill out your copyright notice in the Description page of Project Settings.


#include "SOMBaseCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PhysicsVolume.h"
#include "MyPlayerController.h"
#include "CineCameraComponent.h"
#include "CameraWidget.h"
#include "CharacterWidget.h"
#include "Components/Image.h"
#include "SkillSubsystem.h"
#include "Kismet/KismetMathLibrary.h"
#include "SOMGameDataBase.h"
#include "NiagaraComponent.h"
#include "WaterBodyOceanActor.h"
#include "Components/SphereComponent.h"
#include "ImageSubsystem.h"
#include "CoordinateConversion.h"
#include "UGridSubsystem.h"
#include "NewCollectionWidget.h"
#include "Components/AudioComponent.h"
#include "Public/Bait.h"
#include "Public/Repellent.h"
#include "NewMessageWidget.h"
#include "Public/MassageSubsystem.h"
#include "Public/StorySubsystem.h"

#define CHARACTER_COLLISION_RADIUS 34
#define CHARACTER_COLLISION_HALFHEIGHT 90


// Sets default values
ASOMBaseCharacter::ASOMBaseCharacter()
{
	//초기화
	CameraWidget = NULL;
	MyController = NULL;
	RightValue = 0.0;
	Speed = 0.0;
	IsReadyToDiving = false;
	IsInfiniteBreath = false;

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set CapsuleComponent
	GetCapsuleComponent()->InitCapsuleSize(CHARACTER_COLLISION_RADIUS, CHARACTER_COLLISION_HALFHEIGHT);

	// Set SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->bDoCollisionTest = true;
	SpringArm->ProbeChannel = ECollisionChannel::ECC_Camera;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f));

	// Set Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	// Set CineCamera
	CineCamera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("CineCamera"));
	CineCamera->SetupAttachment(RootComponent);
	CineCamera->SetupAttachment(RootComponent);
	CineCamera->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	Camera->SetActive(true);
	CineCamera->SetActive(false);

	// Set AudioComponent
	BackgroundAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("BackgroundAudio"));
	EffectAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("EffectAudio"));
	MessageAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MessageAudio"));;
	BoatAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("BoatAudio"));;


	// Set Movement Rotation Setting
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	SpringArm->bUsePawnControlRotation = true;

	// Set Swim Movement
	OwenPhysicsVolume = GetCharacterMovement()->GetPhysicsVolume();
	//GetCharacterMovement()->
	SwimModeState = SOMCharacterMovementMode::WALKMODE;

	/*SNSManager = CreateDefaultSubobject<UInstagramAPIAccessManager>(TEXT("SNSManager"));
	if (SNSManager == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("can't Create SNSManager"));
	}*/

	IsAquaJetActive = false;



	//Niagara 컴포넌트 초기화
	AquajetSkillEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AquajetNiagaraEffectComponent"));
	AquajetSkillEffectComponent->SetupAttachment(RootComponent);
	AquajetSkillEffectComponent->SetAutoActivate(false);

	CamouflageSkillEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CamouflageNiagaraEffectComponent"));
	CamouflageSkillEffectComponent->SetupAttachment(RootComponent);
	CamouflageSkillEffectComponent->SetAutoActivate(false);

	//MeshComponent->SetRenderCustomDepth()

	IsVerticalMovement = false;
	IsHorizontalMovement = false;
	IsSwimToUp = false;

	SpherCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SpherCollision->InitSphereRadius(10.0f);
	SpherCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	// 스탯 초기화
	 Max_hp = 100.f;
	 Max_Oxygen = 100.f;
	 Max_Oxygentank = 300.f;
	 Oxygentank_Decrease = 0.5f;
	 Oxygen_Decrease = 0.5f;
	 Oxygen_Recovery = 1.0f;



	 Basic_Speed = 300.f;
	 Aquajet_Speed = 1500.f;
	FastSwim_Speed = 600.f;

	SpawnDistance = 50.f;

	IsFirstPlay = true;

	IsDrawDebugLine = false;
}

// Called when the game starts or when spawned
void ASOMBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	hp = Max_hp;
	Oxygen = Max_Oxygen;
	OxygenTank = Max_Oxygentank;
	SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
	SkillSubsystem->Character = this;

	GridSubsystem = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());
	if (!GridSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("can't find GridSubsystem"));

		return;
	}

	MessageSubsystem = UGameInstance::GetSubsystem<UMessageSubsystem>(GetWorld()->GetGameInstance());
	if (!MessageSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("can't find MessageSubsystem"));

		return;
	}
	MessageSubsystem->Character = this;

	MyController = Cast<AMyPlayerController>(GetController());
	if (!MyController)
	{
		UE_LOG(LogTemp, Warning, TEXT("can't find Controller"));

		return;
	}
	//else
	//{
	//	MyController->SetViewTarget(this);
	//	UE_LOG(LogTemp, Warning, TEXT("SetViewTarget"));
	//}

	//카메라 위젯 생성
	if (CameraWidgetClass)
	{
		CameraWidget = CreateWidget<UCameraWidget>(GetWorld(), CameraWidgetClass);

		if (CameraWidget)
		{
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Fail to Attach Camera Widget"));
		}
	}
	//NewCollection 위젯 생성
	if (NewCollectionWidgetClass)
	{
		NewCollectionWidget = CreateWidget<UNewCollectionWidget>(GetWorld(), NewCollectionWidgetClass);

		if (NewCollectionWidget)
		{
			NewCollectionWidget->SetCharacter(this);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Fail to Attach UNewCollection Widget"));
		}
	}
	//캐릭터 위젯 생성
	if (CharacterWidgetClass)
	{
		CharacterWidget = CreateWidget<UCharacterWidget>(GetWorld(), CharacterWidgetClass);

		if (CharacterWidget)
		{
			CharacterWidget->AddToViewport();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Fail to Attach Character Widget"));
		}
	}

	//NewMessage 위젯 생성
	if (NewMessageWidgetClass)
	{
		NewMessageWidget = CreateWidget<UNewMessageWidget>(GetWorld(), NewMessageWidgetClass);

		if (NewMessageWidget)
		{
			NewMessageWidget->AddToViewport();
			//NewMessageWidget->AddToViewport();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Fail to Attach NewMessage Widget"));
		}
	}

	CameraWidget->NewCollctionRegistered.AddDynamic(this, &ASOMBaseCharacter::NewCollectionRegisteredEvent);

	BackgroundAudio->SetIntParameter("Place", 0);
	BackgroundAudio->Play(0.f);

#if WITH_EDITOR
	UStorySubsystem * StorySubsystem = UGameInstance::GetSubsystem<UStorySubsystem>(GetWorld()->GetGameInstance());
	StorySubsystem->CollectorEvent();
#endif
}

// Called every frame
void ASOMBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Speed = FVector(GetVelocity().X, GetVelocity().Y, 0).Size();
	RightValue = MyController->RightValue;

	if (IsAquaJetActive)
	{
		AddMovementInput(GetActorForwardVector(), AQUAJET_VALUE);
	}
	if (!IsInfiniteBreath)
	{
		UpdateOxygen();
	}

	if (SwimModeState == SOMCharacterMovementMode::WALKMODE)
	{

	}
	else if (SwimModeState == SOMCharacterMovementMode::SWIMMODE)
	{
		// ------부력 조절 알고리즘------
		// 회전 원상복귀
		FRotator CurrentRotate = GetActorRotation();
		CurrentRotate.Pitch = FMath::FInterpTo(CurrentRotate.Pitch, 0.f, GetWorld()->GetDeltaSeconds(), 5.0f);
		SetActorRotation(CurrentRotate);
		// 수면 확인
		//if (!IsHorizontalMovement)
		{
			FHitResult HitResult;
			FVector CurrentLocation = GetActorLocation();

			float SearchRange = 500.f;
			FVector StartLocation = CurrentLocation + FVector(0.f, 0.f, SearchRange);
			FVector EndLocation = CurrentLocation - FVector(0.f, 0.f, SearchRange);
			bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_GameTraceChannel1);

			if (bHit)
			{
				FVector HitLocation = HitResult.Location;

				float WaterHeight;
				if (IsHorizontalMovement)
				{
					WaterHeight = HitLocation.Z - 20.f;
				}
				else
				{
					WaterHeight = HitLocation.Z - 40.f;
				}

				//if (CurrentLocation.Z < WaterHeight)
				{
					FVector BuoyancyForce = FVector(0, 0, BuoyancyStrength * (WaterHeight - (CurrentLocation.Z + 30.f)));

					CurrentLocation = GetActorLocation();
					float CurrentZ = CurrentLocation.Z;
					float TargetZ = FMath::FInterpTo(CurrentZ, WaterHeight, GetWorld()->GetDeltaSeconds(), 3.f);


					FVector NewLocation = FVector(CurrentLocation.X, CurrentLocation.Y, TargetZ);
					//AddMovementInput(FVector(0.f, 0.f, 1.f), BuoyancyStrength * (WaterHeight - (CurrentLocation.Z + 30.f)));
					SetActorLocation(NewLocation);
				}
			}
		}


	}
	else if (SwimModeState == SOMCharacterMovementMode::DIVEMODE)
	{
		// 캐릭터 회전 처리
		FVector VelocityDirection = GetVelocity().GetSafeNormal();
		float VelocityDirectionLength = VelocityDirection.Length();
		FVector Direction = VelocityDirection;  // 이동 방향
		FRotator NewRotation;

		if (IsHorizontalMovement && !IsVerticalMovement)
		{
			NewRotation = GetActorRotation();

			FRotator DirRotation = Direction.Rotation();

			double TargetPitch = FMath::Clamp(DirRotation.Pitch, -80.f, 80.f);

			// 상하 회전(Pitch) 수동 처리: 예를 들어 이동 방향에 따라 Pitch 값을 설정
			NewRotation.Pitch = FMath::FInterpTo(NewRotation.Pitch, TargetPitch, GetWorld()->GetDeltaSeconds(), 5.0f);  // 제한 범위로 Pitch 값 설정

		}
		else // 이동이 없을 시 머리가 위를 향하도록 방향 조정
		{
			NewRotation = GetActorRotation();

			NewRotation.Pitch = FMath::FInterpTo(NewRotation.Pitch, 0.f, GetWorld()->GetDeltaSeconds(), 2.0f);
		}
		SetActorRotation(NewRotation);
	}

	if (isCineMode)
	{
		// 객체 식별을 위한 데이터
		UImageSubsystem* ImageSubsystem = UGameInstance::GetSubsystem<UImageSubsystem>(GetWorld()->GetGameInstance());


		FMatrix ViewProjectionMatrix = GetCameraViewProjectionMatrix();

		// 볼륨 업데이트
		TArray<FGridEntityInfo> IntersectEntitys;

		ImageSubsystem->UpdateConvexVolume(ViewProjectionMatrix);

		FMatrix Matrix = GetCameraViewProjectionMatrix();
		FVector CameraLocation = GetCineCameraLocation();
		FVector CameraForwardVector = GetCineCameraForwardVector();
		IntersectEntitys =
			ImageSubsystem->UpdateVolumeAndTestIntersect(Matrix, CameraLocation, CameraForwardVector, GridSubsystem);

		TArray<FVector2D> Locations;

		for (FGridEntityInfo info : IntersectEntitys)
		{
			FVector2D ViewCoordinate;
			MyController->ProjectWorldLocationToScreen(info.Transform.GetLocation(), ViewCoordinate);
			Locations.Add(ViewCoordinate);
		}

		CameraWidget->DrawTargetCircle(Locations);

#if WITH_EDITOR
		if (IsDrawDebugLine)
		{
			ImageSubsystem->DrawConvexVolume(GetWorld());
		}
#endif
	}

	GridSubsystem->SetCharacterLocation(GetActorLocation());
}

// Called to bind functionality to input
void ASOMBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASOMBaseCharacter::SetSwimMode()
{
	//FRotator CurrentRotate = GetActorRotation();
	//CurrentRotate.Pitch = 0.f;
	//SetActorRotation(CurrentRotate);

	OwenPhysicsVolume->bWaterVolume = true;
	Cast<UCharacterMovementComponent>(GetMovementComponent())->MovementMode = MOVE_Swimming;
	SwimModeState = SOMCharacterMovementMode::SWIMMODE;

	BackgroundAudio->SetIntParameter("Place", 0);

	UnUseMask();
	UnUseRequlator();
}

void ASOMBaseCharacter::SetWalkingMode()
{
	OwenPhysicsVolume->bWaterVolume = false;
	Cast<UCharacterMovementComponent>(GetMovementComponent())->MovementMode = MOVE_Walking;
	SwimModeState = SOMCharacterMovementMode::WALKMODE;

	BackgroundAudio->SetIntParameter("Place", 0);

	UnUseMask();
	UnUseRequlator();
}

void ASOMBaseCharacter::SetDiveMode()
{
	OwenPhysicsVolume->bWaterVolume = true;
	Cast<UCharacterMovementComponent>(GetMovementComponent())->MovementMode = MOVE_Swimming;
	SwimModeState = SOMCharacterMovementMode::DIVEMODE;

	BackgroundAudio->SetIntParameter("Place", 1);

	UseMask();
	if (isTankActive)
	{
		UseRequlator();
	}
}

void ASOMBaseCharacter::SwitchCamera(bool withBlend)
{
	if (MyController)
	{
		StopNewMessageNotice();
		if (!isCineMode)
		{
			CharacterWidget->RemoveFromViewport();
			CameraWidget->AddToViewport();
			CameraWidget->ResetLastPhoto();
			if (withBlend)
			{
				MyController->SetViewTargetWithBlend(this, 0.5f, VTBlend_Linear, 0.0f);
			}
			else
			{
				MyController->SetViewTarget(this);
			}
			Camera->SetActive(false);
			CineCamera->SetActive(true);

			bUseControllerRotationYaw = true;
			bUseControllerRotationPitch = true;
		}
		else
		{
			CharacterWidget->AddToViewport();
			CameraWidget->RemoveFromViewport();
			if (withBlend)
			{
				MyController->SetViewTargetWithBlend(this, 0.5f, VTBlend_Linear, 0.0f);
			}
			else
			{
				MyController->SetViewTarget(this);
			}
			Camera->SetActive(true);
			CineCamera->SetActive(false);

			bUseControllerRotationYaw = false;
			bUseControllerRotationPitch = false;
		}

		isCineMode = !isCineMode;
	}
}
FMatrix ASOMBaseCharacter::GetCameraViewProjectionMatrix()
{
	FMatrix ViewMatrix = GetCameraViewMatrix(CineCamera);
	FMatrix ProjectionMatrix = GetCameraProjectionMatrix();

	return ViewMatrix * ProjectionMatrix;
}
FMatrix ASOMBaseCharacter::GetCameraViewMatrix(UCameraComponent* CameraComponent)
{
	
	if (!CameraComponent) return FMatrix::Identity;

	FVector CameraLocation = CameraComponent->GetComponentLocation();
	CameraLocation = CoordinateConversion::ConversionViewportToEngine(CameraLocation);
	FRotator CameraRotation = CameraComponent->GetComponentRotation();
	CameraRotation = CoordinateConversion::ConversionRotatorViewportToEngine(CameraRotation);
	FMatrix ViewMatrix = FTranslationMatrix(-CameraLocation)* FInverseRotationMatrix(CameraRotation);
	//UE_LOG(LogTemp, Log, TEXT("CameraLocation: %s"), *CameraLocation.ToString());
	//UE_LOG(LogTemp, Log, TEXT("CameraRotation: %s"), *CameraRotation.ToString());
	return ViewMatrix;
}
FMatrix ASOMBaseCharacter::GetCameraProjectionMatrix()
{
	APlayerCameraManager* CameraManager = MyController->PlayerCameraManager;
	FMatrix ProjectionMatrix;
	UWorld* world = GetWorld();
	FMinimalViewInfo ViewInfo;
	CineCamera->GetCameraView(NULL, ViewInfo);
	ProjectionMatrix = ViewInfo.CalculateProjectionMatrix();

	return ProjectionMatrix;
}
bool ASOMBaseCharacter::SetSkillSlotIcon()
{
	UE_LOG(LogTemp, Warning, TEXT("SkillSlotChange"));
	CharacterWidget->ChangeSkillSlot();
	return true;
}

void ASOMBaseCharacter::UseSkill(int32 skillslot)
{
	if (UseSkillBySkillSlotNum(skillslot))
	{
		CharacterWidget->UseSkill(skillslot);
	}
}

void ASOMBaseCharacter::AquaJetTimerFunction()
{
	IsAquaJetActive = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->MaxSwimSpeed = Basic_Speed;

	ToggleNiagaraEffect(AquajetSkillEffectComponent, false);
}

void ASOMBaseCharacter::ActiveCamouflageTimerFunction()
{
	GridSubsystem->IsCharacterHidden = false;

	ToggleNiagaraEffect(CamouflageSkillEffectComponent, false);

	SetVisibilityVisible();
}

bool ASOMBaseCharacter::UseAquaJet()
{
	if (SwimModeState == SOMCharacterMovementMode::DIVEMODE)
	{
		IsAquaJetActive = true;
		bUseControllerRotationPitch = true;
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->MaxSwimSpeed = Aquajet_Speed;


		ToggleNiagaraEffect(AquajetSkillEffectComponent, true);

		GetWorld()->GetTimerManager().SetTimer(AquaJetTimerHandle,
			this,
			&ASOMBaseCharacter::AquaJetTimerFunction,
			AQUAJET_DURATION,
			false);

		return true;
	}
	else
	{
		CharacterWidget->VisibleWarningMasage();

		return false;
	}


}

void ASOMBaseCharacter::UseActiveCamouflage()
{
	GridSubsystem->IsCharacterHidden = true;
	SetVisibilityHidden();

	ToggleNiagaraEffect(CamouflageSkillEffectComponent, true);

	GetWorld()->GetTimerManager().SetTimer(ActiveCamouflageTimerHandle,
		this,
		&ASOMBaseCharacter::ActiveCamouflageTimerFunction,
		ACTIVECAMOUFLAGE_DURATION,
		false);
}

void ASOMBaseCharacter::UseBait()
{
	FVector ForwardVector = GetActorForwardVector();
	FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;
	FRotator SpawnRotation = GetActorRotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	SpawnParams.Owner = this;

	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(BaitClass, SpawnLocation, SpawnRotation, SpawnParams);

	if (!SpawnedActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail to spawn actor"));
	}
}

void ASOMBaseCharacter::UseRepellent()
{
	FVector ForwardVector = GetActorForwardVector();
	FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;
	FRotator SpawnRotation = GetActorRotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	SpawnParams.Owner = this;

	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(RepellentClass, SpawnLocation, SpawnRotation, SpawnParams);

	if (!SpawnedActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail to spawn actor"));
	}
}

bool ASOMBaseCharacter::UseSkillBySkillSlotNum(int32 skillslot)
{
	CharacterWidget->SetOxygenTankPointerOff();
	switch (skillslot)
	{
	case 1:
		if (SkillSubsystem->IsActive_Skill(skillslot))
		{
			return UseSkillBySkillName(SkillSubsystem->SkillSlot1);
		}
		break;
	case 2:
		if (SkillSubsystem->IsActive_Skill(skillslot))
		{
			return UseSkillBySkillName(SkillSubsystem->SkillSlot2);
		}
		break;
	}
	return false;
}

bool ASOMBaseCharacter::UseSkillBySkillName(SkillName skillname)
{
	switch (skillname)
	{
	case SkillName::Null:
		break;
	case SkillName::AquaJet:
		return UseAquaJet();
		break;
	case SkillName::ActiveCamouflage:
		UseActiveCamouflage();
		return true;
		break;
	case SkillName::ResidualBait:
		UseBait();
		return true;
		break;
	case SkillName::Repellent:
		UseRepellent();
		return true;
		break;
	}

	return false;

}

void ASOMBaseCharacter::UpdateOxygen()
{
	if (SwimModeState == SOMCharacterMovementMode::DIVEMODE)
	{
		if (isTankActive)
		{
			if (OxygenTank > MIN_OXYGENTANK)
			{
				OxygenTank = FMath::Clamp(OxygenTank - Oxygentank_Decrease, MIN_OXYGENTANK, Max_Oxygentank);

				Oxygen = FMath::Clamp(Oxygen + Oxygen_Recovery, MIN_OXYGEN, Max_Oxygen);
			}
			else
			{
				Oxygen = FMath::Clamp(Oxygen - Oxygen_Decrease, MIN_OXYGEN, Max_Oxygen);
			}
		}
		else
		{
			Oxygen = FMath::Clamp(Oxygen - Oxygen_Decrease, MIN_OXYGEN, Max_Oxygen);
		}
	}
	else
	{
		OxygenTank = FMath::Clamp(OxygenTank + Oxygentank_Decrease, MIN_OXYGENTANK, Max_Oxygentank);
		Oxygen = FMath::Clamp(Oxygen + Oxygen_Recovery, MIN_OXYGEN, Max_Oxygen);
	}
	CharacterWidget->UpdateOxygen(Oxygen, OxygenTank);

}

void ASOMBaseCharacter::OutNewCollection()
{
	if (CameraWidget && NewCollectionWidget)
	{
		NewCollectionWidget->RemoveFromViewport();
		CameraWidget->AddToViewport();

		SetInputModeToGameOnly(MyController);
	}
}

TSubclassOf<class UWebViewWidget> ASOMBaseCharacter::GetWebViewWidget()
{
	return WebViewWidgetClass;
}

void ASOMBaseCharacter::SetIsInfiniteBreath(bool b)
{
	IsInfiniteBreath = b;
}

void ASOMBaseCharacter::NewCollectionRegisteredEvent(ESpecies BestSpecies)
{
	if (CameraWidget && NewCollectionWidget)
	{
		CameraWidget->RemoveFromViewport();
		NewCollectionWidget->SetSpecies(BestSpecies);
		SetInputModeToUIOnly(MyController, NewCollectionWidget);
	}
}



void ASOMBaseCharacter::TakeDamage(float damage)
{
	hp = FMath::Clamp(hp - damage, MIN_HP, Max_hp);

	CharacterWidget->SetHpEffect(hp);
}

void ASOMBaseCharacter::UpCurrentFocalLength(float value)
{
	CineCamera->CurrentFocalLength;
	CineCamera->SetCurrentFocalLength(CineCamera->CurrentFocalLength + value * INCREASE_FOCALLENGTH);

	float maxfocal = CineCamera->LensSettings.MaxFocalLength;
	float minfocal = CineCamera->LensSettings.MinFocalLength;


	CameraWidget->UpdateFocalBar(CineCamera->CurrentFocalLength, maxfocal, minfocal);
}

void ASOMBaseCharacter::ToggleNiagaraEffect(UNiagaraComponent* NiagaraComponent, bool bEnable)
{
	if (NiagaraComponent)
	{
		if (bEnable)
		{
			NiagaraComponent->Activate();
		}
		else
		{
			NiagaraComponent->Deactivate();
		}
	}
}
FVector ASOMBaseCharacter::GetCineCameraLocation()
{
	return CineCamera->GetComponentLocation();
}

FVector ASOMBaseCharacter::GetCineCameraForwardVector()
{
	return CineCamera->GetForwardVector();
}

void ASOMBaseCharacter::SetInputModeToUIOnly(APlayerController* PlayerController, UUserWidget* Widget)
{
	if (!PlayerController || !Widget) return;

	//UE_LOG(LogTemp, Warning, TEXT("SetInputModeToGameOnly"))

	if (!Widget->IsInViewport())
	{
		Widget->AddToViewport();
	}

	PlayerController->bShowMouseCursor = true;

	FInputModeUIOnly InputMode;
	Widget->bIsFocusable = true;
	InputMode.SetWidgetToFocus(Widget->TakeWidget()); 
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock); 
	PlayerController->SetInputMode(InputMode);
}

void ASOMBaseCharacter::SetInputModeToGameOnly(APlayerController* PlayerController)
{
	if (!PlayerController) return;

	//UE_LOG(LogTemp, Warning, TEXT("SetInputModeToGameOnly"))

	PlayerController->bShowMouseCursor = false;

	FInputModeGameOnly InputMode;
	PlayerController->SetInputMode(InputMode);
}

void ASOMBaseCharacter::PlayDivingSound()
{
	if (SwimModeState == SOMCharacterMovementMode::WALKMODE)
	{
		EffectAudio->Play(0.4f);
	}
}

void ASOMBaseCharacter::StopNewMessageNotice()
{
	if (NewMessageWidget->isTimerActive())
	{
		NewMessageWidget->StopTimer();
	}
}

void ASOMBaseCharacter::NoticeNewMessage(FText name)
{
	if (NewMessageWidget)
	{
		MessageAudio->Play(0.f);
		NewMessageWidget->NewMessageNoticeOn(name);
	}
}

void ASOMBaseCharacter::SetVisibilityVisible_Implementation()
{
}

void ASOMBaseCharacter::SetVisibilityHidden_Implementation()
{
}

void ASOMBaseCharacter::BuyTank_Implementation()
{
}

void ASOMBaseCharacter::BuyFlippers_Implementation()
{
}

void ASOMBaseCharacter::UseMask_Implementation()
{
}

void ASOMBaseCharacter::UseRequlator_Implementation()
{
}

void ASOMBaseCharacter::UnUseMask_Implementation()
{
}

void ASOMBaseCharacter::UnUseRequlator_Implementation()
{
}

