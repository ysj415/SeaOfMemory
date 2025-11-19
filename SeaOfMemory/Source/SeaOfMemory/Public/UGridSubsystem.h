// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MassEntityTypes.h"
#include "SOMGameDataBase.h"
#include "UGridSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FGridEntityInfo
{
    GENERATED_BODY()

    UPROPERTY()
    int32 EntityIndex;

    UPROPERTY()
    FTransform Transform;

    UPROPERTY()
    ESpecies Species;
};

UCLASS()
class UGridSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // 엔티티 위치 업데이트
    void UpdateEntityLocation(const int32& EntityIndex, const FTransform& Transform, const ESpecies& Species, const FIntVector& OldGridIndex);

    // 특정 그리드 내 엔티티 검색
    void FindEntitiesTransformInRadius(const FVector& Center, float Radius, TArray<FTransform>& OutEntities, ESpecies Species) const;

    // 특정 그리드 내 엔티티 검색
    void FindEntitiesTransformInRadius(const FVector& Center, 
        float boidsRadius, float avoidsRadius, float chasesRadius,
        TArray<FTransform>& OutBoidsEntities, 
        TArray<FTransform>& OutAvoidsEntities, 
        TArray<FTransform>& OutChasesEntities, 
        ESpecies Species) const;

    FVector GetGridCenter(const FIntVector& GridIndex) const;

    // 위치를 기반으로 그리드 인덱스 계산
    FIntVector GetGridIndex(const FVector& Location) const;

    const TMap<FIntVector, TArray<FGridEntityInfo>> GetGridMap();

    UFUNCTION(BlueprintCallable)
    void DrawGridDebugLine(UWorld* World, FColor color = FColor::Red);

    float GetGridSize();
    TMap<ESpecies, TArray<ESpecies>> Avoids;
    TMap<ESpecies, TArray<ESpecies>> Chases;

    void SetCharacterGrid(FIntVector grid);

    void SetCharacterLocation(FVector location);
    bool IsFishCanMove(FTransform t, float dis);

    bool IsCharacterHidden = false;

    UFUNCTION(BlueprintCallable)
    void RemoveGrid(const int32& EntityIndex, const FIntVector& OldGridIndex);
private:
    // 그리드 크기 설정
    float GridSize = 4000.0f;

    // 그리드 데이터 저장
    TMap<FIntVector, TArray<FGridEntityInfo>> GridMap;
    FIntVector CharacterGrid;
    FVector CharacterLocation;
    float GetDistanceFromCharacter(FVector location);
};