// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SOMGameDataBase.h"
#include "ImageSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnScreenshotCapturedParam, UTexture2D*, texture, UPhotoData*, Photoobject, int32, index);
/**
 *
 */
UCLASS()
class UPhotoData : public UObject
{
	GENERATED_BODY()
public:
	UPhotoData() { FilePath = ""; texture = nullptr; }
	FString FilePath;

	UPROPERTY()
	UTexture2D* texture;

	void OnScreenshotCaptured(int32 Width, int32 Height, const TArray<FColor>& Image);

	bool ConvertTextureToPNG(UTexture2D* Texture, TArray<uint8>& OutByteArray, bool savefile = true);

	bool ConvertColorArrayToPNG(int32 Width, int32 Height, const TArray<FColor>& Texture, TArray<uint8>& OutByteArray, bool savefile = true);

	TSharedPtr<FJsonObject> ConvertTexture2DToJson(UTexture2D* Texture);

	UTexture2D* ConvertFColorArrayToTexture(int32 Width, int32 Height, const TArray<FColor>& Image);

	// 캡쳐 이후 델리게이트
	FOnScreenshotCapturedParam OnCaptured;

	int32 index;

	ESpecies species = ESpecies::Null;
};

UCLASS()
class SEAOFMEMORY_API UImageSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UImageSubsystem();

	UFUNCTION()
	void InitializedSubsystem();

	void CaptureScreenshot(FString filename, bool b, bool b2);

	UFUNCTION()
	TArray<UTexture2D*> GetTextureArray();

	UFUNCTION()
	UTexture2D* GetTexture(int num);
	UFUNCTION()
	TArray<UPhotoData*> GetPhotoArray();
	UFUNCTION()
	UPhotoData* GetPhoto(int num);


	UFUNCTION()
	void UpdateTextures();


	void SetCameraWidget(class UCameraWidget* Widget);


	// 해당 인덱스의 사진 삭제
	UFUNCTION()
	bool DeleteTextureInArray(int32 index);

	UPROPERTY()
	TArray<UPhotoData*> CaptureTextures;
	// =========================== test=================================
	//TArray<TSharedPtr<UPhotoData>> CaptureTextures;
	// =========================== test=================================

private:
	UFUNCTION()
	void OnScreenshotCaptured(UTexture2D* texture, UPhotoData* Photoobject, int32 index);



	class UCameraWidget* CameraWidget;

	FString FileName;
	// ---------객체 탐색---------
public:
	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();

	UFUNCTION()
	void SetViewProjectionMatrix(FMatrix matrix);

	UFUNCTION()
	void InitializeConvexVolume();
	UFUNCTION()
	void UpdateConvexVolume(FMatrix matrix);

	UFUNCTION()
	void UpdateConvexVolumeWithFarPlane(FMatrix matrix, FVector Location, FVector ForwardVector, float Distance = FarPlane_Distance);

	UFUNCTION()
	FVector CalculatePlaneIntersection(const FPlane& Plane1, const FPlane& Plane2, const FPlane& Plane3);

	UFUNCTION()
	void DrawConvexVolumePlanes(UWorld* World);

	UFUNCTION()
	void DrawConvexVolume(UWorld* World,float LineLength = 1.f, FColor color = FColor::Red);

	UFUNCTION()
	bool TestConvexVolume(FVector vector);

	UFUNCTION()
	bool IntersectBox(const FVector& Origin, const FVector& Extent);

	UFUNCTION()
	FPlane CalculateFarPlane(FVector Location, FVector ForwardVector, float W);

	UFUNCTION()
	void IntersectGrid(class UGridSubsystem* GridSubsystem);

	UFUNCTION()
	void IntersectEntity(class UGridSubsystem* GridSubsystem);

	UFUNCTION()
	TArray<FGridEntityInfo> TestEntityIntersectFrustum(class UGridSubsystem* GridSubsystem);

	UFUNCTION()
	TArray<FGridEntityInfo> UpdateVolumeAndTestIntersect(FMatrix matrix, FVector Location, FVector ForwardVector, class UGridSubsystem* GridSubsystem);

	UFUNCTION()
	void AnalyzeIntersectEntitys(UIllustratedGuideSubsystem* GuideSubsystem, int32 index);

	UFUNCTION()
	UPhotoData* GetPhotoDataFromIndex(int32 index);
private:
	FMatrix ViewProjectionMatrix;		// 캐릭터 - 시네카메라의 ProjectionMatrix

	FConvexVolume ViewFrustum;

	TArray<FIntVector> IntersectKeys;   // 겹치는 그리드의 키 배열
	TArray<FGridEntityInfo> IntersectEntityInfos;   // 화면 안 엔티티의 배열

	int32 indexCount = 0;
};
