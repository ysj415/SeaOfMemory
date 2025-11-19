// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Public/SOMGameDataBase.h"
#include "SOMBaseCharacter.generated.h"

UENUM(BlueprintType)
enum class SOMCharacterMovementMode : uint8
{
	WALKMODE UMETA(DisplayName = "WALKMODE"),
	SWIMMODE UMETA(DisplayName = "SWIMMODE"),
	DIVEMODE UMETA(DisplayName = "DIVEMODE")
};


UCLASS()
class SEAOFMEMORY_API ASOMBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASOMBaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SetSwimMode();
	UFUNCTION(BlueprintCallable)
	void SetWalkingMode();
	UFUNCTION(BlueprintCallable)
	void SetDiveMode();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Speed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RightValue;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool isCineMode = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	SOMCharacterMovementMode SwimModeState;

	//class UCameraComponent* GetCameraComponent() { return Camera; }
	//class UCineCameraComponent* GetCineCameraComponent() { return CineCamera; }
	UFUNCTION(BlueprintCallable)
	void SwitchCamera(bool withBlend = true);

	class UCameraWidget* GetCameraWidget() { return CameraWidget; }

	UFUNCTION()
	FMatrix GetCameraViewProjectionMatrix();
	UFUNCTION()
	FMatrix GetCameraViewMatrix(UCameraComponent* CameraComponent);
	UFUNCTION()
	FMatrix GetCameraProjectionMatrix();


	UPROPERTY(BlueprintReadWrite)
	class UCharacterWidget* CharacterWidget;

	UFUNCTION(BlueprintCallable)
	bool SetSkillSlotIcon();

	UFUNCTION(BlueprintCallable)
	void UseSkill(int32 skillslot);

	//// 이펙트
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Niagara")
	//class UNiagaraSystem* AquajetSkillEffect;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Niagara")
	//class UNiagaraSystem* CamouflageSkillEffect;

	// 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
	bool IsVerticalMovement;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
	bool IsSwimToUp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
	bool IsHorizontalMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Swim")
	float BuoyancyStrength = 10.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Skill")
	bool IsAquaJetActive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USphereComponent* SpherCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCineCameraComponent* CineCamera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* BackgroundAudio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* EffectAudio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* MessageAudio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* BoatAudio;

	FVector GetCineCameraLocation();
	FVector GetCineCameraForwardVector();

	//게임모드 변경
	UFUNCTION(BlueprintCallable)
	void SetInputModeToUIOnly(APlayerController* PlayerController, UUserWidget* Widget);
	UFUNCTION(BlueprintCallable)
	void SetInputModeToGameOnly(APlayerController* PlayerController);

	// 다이빙
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Diving")
	bool IsReadyToDiving;
	// 배 탑승
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Diving")
	bool IsReadyToGetOnBoat;

	UFUNCTION(BlueprintCallable)
	void PlayDivingSound();
	// 스탯
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Max_hp;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Max_Oxygen;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Max_Oxygentank;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Oxygentank_Decrease;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Oxygen_Decrease;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Oxygen_Recovery;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Basic_Speed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float Aquajet_Speed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float FastSwim_Speed;

	UPROPERTY(BlueprintReadWrite)
	class UNewMessageWidget* NewMessageWidget;

	UFUNCTION(BlueprintCallable)
	void StopNewMessageNotice();

	UFUNCTION(BlueprintCallable)
	void NoticeNewMessage(FText name);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	bool isTankActive;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Niagara", meta = (AllowPrivateAccess = "true"))
	class UNiagaraComponent* AquajetSkillEffectComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Niagara", meta = (AllowPrivateAccess = "true"))
	class UNiagaraComponent* CamouflageSkillEffectComponent;

	class APhysicsVolume* OwenPhysicsVolume;

	class AMyPlayerController* MyController;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UCameraWidget> CameraWidgetClass;

	UPROPERTY()
	class UCameraWidget* CameraWidget;
	
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UNewCollectionWidget> NewCollectionWidgetClass;

	UPROPERTY()
	class UNewCollectionWidget* NewCollectionWidget;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UCharacterWidget> CharacterWidgetClass;
	
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UWebViewWidget> WebViewWidgetClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UNewMessageWidget> NewMessageWidgetClass;



	class USkillSubsystem* SkillSubsystem;
	class UGridSubsystem* GridSubsystem;
	class UMessageSubsystem* MessageSubsystem;
	
	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SNS", meta = (AllowPrivateAccess = "true"))
	class UInstagramAPIAccessManager* SNSManager;*/

	// ------------------------------스킬-------------------------------------
	FTimerHandle AquaJetTimerHandle;
	FTimerHandle ActiveCamouflageTimerHandle;

	void AquaJetTimerFunction();
	void ActiveCamouflageTimerFunction();

	bool UseAquaJet();
	void UseActiveCamouflage();
	void UseBait();
	void UseRepellent();

	bool UseSkillBySkillSlotNum(int32 skillslot);
	bool UseSkillBySkillName(SkillName skillname);

	UPROPERTY(EditAnywhere, Category = "Skill")
	TSubclassOf<AActor> BaitClass;
	UPROPERTY(EditAnywhere, Category = "Skill")
	TSubclassOf<AActor> RepellentClass;

	UPROPERTY(EditAnywhere, Category = "Skill")
	float SpawnDistance;

	float hp;

	float Oxygen;

	float OxygenTank;

	void UpdateOxygen();

	// CameraWidget->NewCollctionRegistered 바인딩 함수
	UFUNCTION()
	void NewCollectionRegisteredEvent(ESpecies BestSpecies);

	// 데모 시연용 무한 산소
	bool IsInfiniteBreath;


public:
	UFUNCTION(BlueprintNativeEvent, Category = "DmgSystem")
	void SetVisibilityVisible();

	UFUNCTION(BlueprintNativeEvent, Category = "DmgSystem")
	void SetVisibilityHidden();

	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void BuyTank();

	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void BuyFlippers();


	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void UseMask();
	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void UseRequlator();

	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void UnUseMask();
	UFUNCTION(BlueprintNativeEvent, Category = "SkillSystem")
	void UnUseRequlator();

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float damage);

	UFUNCTION(BlueprintCallable)
	void UpCurrentFocalLength(float value);

	UFUNCTION(BlueprintCallable)
	void ToggleNiagaraEffect(class UNiagaraComponent* NiagaraComponent, bool bEnable);

	UStaticMeshComponent* MeshComponent;

	// NewCollectionWidget 빠져나오는 함수
	UFUNCTION(BlueprintCallable)
	void OutNewCollection();

	TSubclassOf<class UWebViewWidget> GetWebViewWidget();

	FIntVector GridIndex = FIntVector(0, 0, 0);

	UFUNCTION(BlueprintCallable)
	void SetIsInfiniteBreath(bool b);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="bool")
	bool IsFirstPlay;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "bool")
	bool IsDrawDebugLine;
};
