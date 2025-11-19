// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "SOMBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "CineCameraComponent.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "CameraWidget.h"
#include "ImageSubsystem.h"
#include "CoordinateConversion.h"
#include "UGridSubsystem.h"
#include "IllustratedGuideSubsystem.h"


AMyPlayerController::AMyPlayerController()
{
    RightValue = 0.f;
}

void AMyPlayerController::BeginPlay()
{

    Super::BeginPlay();

    ControlledPawn = GetPawn();
    if (ControlledPawn)
    {
        SOMCharacter = Cast<ASOMBaseCharacter>(ControlledPawn);
    }

    if (!ControlledPawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("can't find Controlled Pawn"));
        return;
    }

    if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
    {
        if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            if (!InputMapping.IsNull())
            {
                if (!SOMCharacter->IsFirstPlay)
                {
                    InputSystem->AddMappingContext(InputMapping.LoadSynchronous(), 0);
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Fail to add mapping context"));
            }
        }
    }


}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(InputComponent);


    //Bind Rotate Callback functin to InputAction
   //if (RotateInput)
   //{

   //    Input->BindAction(RotateInput.Get(), ETriggerEvent::Triggered, this, &AMyPlayerController::RotateCallBack);
   //}

   // Bind Move Callback functin to InputAction
    MovamentInput.LoadSynchronous();
    if (MovamentInput)
    {
        Input->BindAction(MovamentInput.Get(), ETriggerEvent::Triggered, this, &AMyPlayerController::MovementTriggeredCallBack);
        Input->BindAction(MovamentInput.Get(), ETriggerEvent::Completed, this, &AMyPlayerController::MovementCompletedCallBack);
        Input->BindAction(MovamentInput.Get(), ETriggerEvent::Started, this, &AMyPlayerController::MovementStartedCallBack);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Fail to bind movement input action"));
    }
    SwimUpDwon.LoadSynchronous();
    if (SwimUpDwon)
    {
        Input->BindAction(SwimUpDwon.Get(), ETriggerEvent::Triggered, this, &AMyPlayerController::SwimUpDownTriggeredCallBack);
        Input->BindAction(SwimUpDwon.Get(), ETriggerEvent::Started, this, &AMyPlayerController::SwimUpDownStartedCallBack);
        Input->BindAction(SwimUpDwon.Get(), ETriggerEvent::Completed, this, &AMyPlayerController::SwimUpDownCompletedCallBack);

    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Fail to bind SwimUpDwon input action"));
    }
    //if (SetCameraInput)
    //{
    //    Input->BindAction(SetCameraInput.Get(), ETriggerEvent::Started, this, &AMyPlayerController::SetCameraModeCallBack);
    //}
    //else
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("Fail to bind set camera mode input action"));
    //}

    //if (LeftMouseInput)
    //{
    //    Input->BindAction(LeftMouseInput.Get(), ETriggerEvent::Started, this, &AMyPlayerController::LeftMouseCallBack);
    //}
    //else
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("Fail to bind left mouse input action"));
    //}
}

/*================================== Character Rotation CallBack Function ==================================*/
void AMyPlayerController::RotateCallBack(const FInputActionInstance& instance)
{

    FVector2D InputValue = instance.GetValue().Get<FVector2D>();

    if (ControlledPawn)
    {
        AddYawInput(InputValue.X);
        AddPitchInput(InputValue.Y);
    }
}

/*================================== Character CameraMode Key CallBack Function ==================================*/
void AMyPlayerController::SetCameraModeCallBack(/*const FInputActionInstance& instance*/)
{
    if (SOMCharacter)
    {
        SOMCharacter->SwitchCamera();
    }
    else
    {

    }
}

/*================================== Character :LeftMouse Key CallBack Function ==================================*/
void AMyPlayerController::LeftMouseCallBack(/*const FInputActionInstance& instance*/)
{
    if (SOMCharacter)
    {
        if (SOMCharacter->isCineMode == true)
        {
            UImageSubsystem* ImageSubsystem = UGameInstance::GetSubsystem<UImageSubsystem>(GetWorld()->GetGameInstance());
            UGridSubsystem* GridSubsystem = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());

            TArray<FGridEntityInfo> IntersectEntitys;
            // ----------사진 캡처-----------
            if (ImageSubsystem)
            {
                ImageSubsystem->SetCameraWidget(SOMCharacter->GetCameraWidget());
                //// 객체 식별을 위한 데이터
                //FMatrix ProjectionMatrix = SOMCharacter->GetCameraProjectionMatrix();
                //ImageSubsystem->SetProjectionMatrix(ProjectionMatrix);
                // 
                // 객체가 카메라 안에 있는지 검사
                FMatrix Matrix = SOMCharacter->GetCameraViewProjectionMatrix();
                FVector CameraLocation = SOMCharacter->GetCineCameraLocation();
                FVector CameraForwardVector = SOMCharacter->GetCineCameraForwardVector();
                IntersectEntitys =
                    ImageSubsystem->UpdateVolumeAndTestIntersect(Matrix, CameraLocation, CameraForwardVector, GridSubsystem);

                // 사진 캡처
                const FDateTime Now = FDateTime::Now();

                const FString ImageDirectory = FString::Printf(TEXT("%s/%s"), *FPaths::ProjectDir(), TEXT("Screenshots"));

                FString ImageFilename = FString::Printf(TEXT("%s/Screenshot_%d%02d%02d_%02d%02d%02d_%03d.png"), *ImageDirectory, Now.GetYear(), Now.GetMonth(), Now.GetDay(), Now.GetHour(), Now.GetMinute(), Now.GetSecond(), Now.GetMillisecond());
                
                IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
                if (!PlatformFile.DirectoryExists(*ImageDirectory))
                {
                    PlatformFile.CreateDirectoryTree(*ImageDirectory);
                }
               FPaths::MakePlatformFilename(ImageFilename);
                FScreenshotRequest::RequestScreenshot(ImageFilename, false, false, false);

                ImageSubsystem->CaptureScreenshot(ImageFilename, false, false);


               //ImageSubsystem->AnalyzeIntersectEntitys(GuideSubsystem);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("MyPlayerController::LeftMouseCallBack: ImageSubsystem is empty"));
            }



            // --------사진촬영 오디오 출력--------
            if (ShutterSound)
            {
                FVector ShutterSoundLocation = SOMCharacter->GetActorLocation();
                UAudioComponent* AudioComponent = UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ShutterSound, ShutterSoundLocation);

                if (AudioComponent)
                {
                    AudioComponent->SetVolumeMultiplier(1.0f);
                    AudioComponent->Play();
                }
            }
            // 화면 깜빡임
            SOMCharacter->GetCameraWidget()->blinkingScreen();
        }
    }
}

/*================================== Character SwimUpDown CallBack Function ==================================*/
void AMyPlayerController::SwimUpDownTriggeredCallBack(const FInputActionInstance& instance)
{
    float InputValue = instance.GetValue().Get<float>();

    switch (SOMCharacter->SwimModeState)
    {
    case SOMCharacterMovementMode::DIVEMODE:
        // Add Right, Left MovementnputVal
        ControlledPawn->AddMovementInput(FVector(0.f, 0.f, 1.f), InputValue);
        if (InputValue < 0.0f)
        {
            SOMCharacter->IsSwimToUp = false;
        }
        else
        {
            SOMCharacter->IsSwimToUp = true;
        }
        break;

    case SOMCharacterMovementMode::SWIMMODE:
        if (InputValue < 0.0f)
        {
            SOMCharacter->SetDiveMode();
        }
        break;

    }

}

void AMyPlayerController::SwimUpDownStartedCallBack(const FInputActionInstance& instance)
{
    float InputValue = instance.GetValue().Get<float>();

    if (SOMCharacter)
    {
        switch (SOMCharacter->SwimModeState)
        {
        case SOMCharacterMovementMode::DIVEMODE:
            SOMCharacter->IsVerticalMovement = true;
            if (InputValue < 0.0f)
            {
                SOMCharacter->IsSwimToUp = false;
            }
            else
            {
                SOMCharacter->IsSwimToUp = true;
            }
            break;
        case SOMCharacterMovementMode::SWIMMODE:
            if (InputValue < 0.0f)
            {
                SOMCharacter->IsVerticalMovement = true;
                SOMCharacter->IsSwimToUp = false;
            }
            break;
        }

    }


}

void AMyPlayerController::SwimUpDownCompletedCallBack(const FInputActionInstance& instance)
{
    if (SOMCharacter)
    {
        if (SOMCharacter->IsVerticalMovement == true)
        {
            SOMCharacter->IsVerticalMovement = false;
        }
    }
}



/*================================== Character Movement CallBack Function ==================================*/
void AMyPlayerController::MovementTriggeredCallBack(const FInputActionInstance& instance)
{

    FVector2D InputValue = instance.GetValue().Get<FVector2D>();

    //UE_LOG(LogTemp, Log, TEXT("MovementInput: %f, %f"), InputValue.X, InputValue.Y);

    if (ControlledPawn)
    {
        FRotator ControlRotationYaw(0, GetControlRotation().Yaw, 0);

        switch (SOMCharacter->SwimModeState)
        {
        case SOMCharacterMovementMode::WALKMODE:
            // Add Right, Left MovementnputVal
            ControlledPawn->AddMovementInput(UKismetMathLibrary::GetRightVector(ControlRotationYaw), InputValue.X);
            // Add Forward, Back Movement
            ControlledPawn->AddMovementInput(UKismetMathLibrary::GetForwardVector(ControlRotationYaw), InputValue.Y);
            break;

        case SOMCharacterMovementMode::SWIMMODE:
            // Add Right, Left MovementnputVal
            ControlledPawn->AddMovementInput(UKismetMathLibrary::GetRightVector(ControlRotationYaw), InputValue.X);
            // Add Forward, Back Movement
            ControlledPawn->AddMovementInput(UKismetMathLibrary::GetForwardVector(ControlRotationYaw), InputValue.Y);
            break;

        case SOMCharacterMovementMode::DIVEMODE:
            if (!SOMCharacter->IsVerticalMovement)
            {
                // Add Right, Left MovementnputVal
                ControlledPawn->AddMovementInput(UKismetMathLibrary::GetRightVector(GetControlRotation()), InputValue.X);
                // Add Forward, Back Movement
                ControlledPawn->AddMovementInput(UKismetMathLibrary::GetForwardVector(GetControlRotation()), InputValue.Y);
                break;
            }
        }
    }

    RightValue = InputValue.X;
}

void AMyPlayerController::MovementCompletedCallBack(const FInputActionInstance& instance)
{
    RightValue = 0.f;

    if (SOMCharacter)
    {
        SOMCharacter->IsHorizontalMovement = false;
    }
}

void AMyPlayerController::MovementStartedCallBack(const FInputActionInstance& instance)
{
    if (SOMCharacter)
    {
        SOMCharacter->IsHorizontalMovement = true;
    }
}

