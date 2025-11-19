// Fill out your copyright notice in the Description page of Project Settings.


#include "UGridSubsystem.h"

void UGridSubsystem::UpdateEntityLocation(const int32& EntityIndex, const FTransform& Transform, const ESpecies& Species, const FIntVector& OldGridIndex)
{
    // 기존 위치에서 그리드 제거
    if (GridMap.Contains(OldGridIndex))
    {
        GridMap[OldGridIndex].RemoveAll([&](const FGridEntityInfo& Info) { return Info.EntityIndex == EntityIndex; });
        if (GridMap[OldGridIndex].IsEmpty())
        {
            GridMap.Remove(OldGridIndex);
        }
    }

    // 새 위치로 그리드 업데이트
    FIntVector NewGridIndex = GetGridIndex(Transform.GetLocation());
    GridMap.FindOrAdd(NewGridIndex).Add({ EntityIndex, Transform, Species });
}

void UGridSubsystem::FindEntitiesTransformInRadius(const FVector& Center, float Radius, TArray<FTransform>& OutEntities, ESpecies Species) const
{
    FIntVector CenterGrid = GetGridIndex(Center);
    int32 GridRadius = FMath::CeilToInt(Radius / GridSize);

    // 주변 그리드 검색
    for (int32 x = -GridRadius; x <= GridRadius; ++x)
    {
        for (int32 y = -GridRadius; y <= GridRadius; ++y)
        {
            for (int32 z = -GridRadius; z <= GridRadius; ++z)
            {
                FIntVector GridIndex = CenterGrid + FIntVector(x, y, z);

                // 각 그리드의 중심 좌표를 구한다
                FVector GridCenter = GetGridCenter(GridIndex);

                // 그리드 중심과 검색 반경의 거리 계산 (제곱거리로 비교)
                float DistSquared = FVector::DistSquared(GridCenter, Center);
                float MaxDistSquared = FMath::Square(Radius + GridSize);

                // 그리드가 반경 내에 있을 경우에만 처리
                if (DistSquared <= MaxDistSquared)
                {
                    if (GridMap.Contains(GridIndex))
                    {
                        // 그리드 내 엔티티들을 확인
                        for (const FGridEntityInfo& Info : GridMap[GridIndex])
                        {
                            if(Species == Info.Species)
                            // 객체의 위치와 center 간의 거리 계산
                            if (FVector::DistSquared(Info.Transform.GetLocation(), Center) <= FMath::Square(Radius))
                            {
                                OutEntities.Add(Info.Transform);
                            }
                        }
                    }
                }
            }
        }
    }
}

void UGridSubsystem::FindEntitiesTransformInRadius(const FVector& Center, 
    float boidsRadius, float avoidsRadius, float chasesRadius,
    TArray<FTransform>& OutBoidsEntities, 
    TArray<FTransform>& OutAvoidsEntities,
    TArray<FTransform>& OutChasesEntities, 
    ESpecies Species) const
{
    FIntVector CenterGrid = GetGridIndex(Center);
    int32 GridRadius = FMath::CeilToInt(boidsRadius / GridSize);

    // 주변 그리드 검색
    for (int32 x = -GridRadius; x <= GridRadius; ++x)
    {
        for (int32 y = -GridRadius; y <= GridRadius; ++y)
        {
            for (int32 z = -GridRadius; z <= GridRadius; ++z)
            {
                FIntVector GridIndex = CenterGrid + FIntVector(x, y, z);

                // 각 그리드의 중심 좌표를 구한다
                FVector GridCenter = GetGridCenter(GridIndex);

                // 그리드 중심과 검색 반경의 거리 계산 (제곱거리로 비교)
                float DistSquared = FVector::DistSquared(GridCenter, Center);
                float MaxDistSquared = FMath::Square(boidsRadius + GridSize);

                // 그리드가 반경 내에 있을 경우에만 처리
                if (DistSquared <= MaxDistSquared)
                {
                    if (GridMap.Contains(GridIndex))
                    {
                        // 그리드 내 엔티티들을 확인
                        for (const FGridEntityInfo& Info : GridMap[GridIndex])
                        {
                            if (Species == Info.Species)
                            {
                                // 객체의 위치와 center 간의 거리 계산
                                if (FVector::DistSquared(Info.Transform.GetLocation(), Center) <= FMath::Square(boidsRadius))
                                {
                                    OutBoidsEntities.Add(Info.Transform);
                                }
                            }
                            if (Avoids[Species].Contains(Info.Species))
                            {
                                if (FVector::DistSquared(Info.Transform.GetLocation(), Center) <= FMath::Square(avoidsRadius))
                                {
                                    OutAvoidsEntities.Add(Info.Transform);
                                }
                            }
                            if (Chases[Species].Contains(Info.Species))
                            {
                                if (FVector::DistSquared(Info.Transform.GetLocation(), Center) <= FMath::Square(chasesRadius))
                                {
                                    OutChasesEntities.Add(Info.Transform);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (Species != ESpecies::Shark)
    {
        
        if (FVector::Dist(CharacterLocation, Center) < 200.f)
        {
            if (!IsCharacterHidden)
            {
                FTransform t;
                t.SetLocation(CharacterLocation);
                OutAvoidsEntities.Add(t);
            }
        }
    }
}

FVector UGridSubsystem::GetGridCenter(const FIntVector& GridIndex) const
{
    return FVector(GridIndex.X * GridSize + GridSize/2, GridIndex.Y * GridSize + GridSize / 2, GridIndex.Z * GridSize + GridSize / 2);
}

FIntVector UGridSubsystem::GetGridIndex(const FVector& Location) const
{
    return FIntVector(
        FMath::FloorToInt(Location.X / GridSize),
        FMath::FloorToInt(Location.Y / GridSize),
        FMath::FloorToInt(Location.Z / GridSize)
    );
}

const TMap<FIntVector, TArray<FGridEntityInfo>> UGridSubsystem::GetGridMap()
{
    return GridMap;
}

void UGridSubsystem::DrawGridDebugLine(UWorld* World, FColor color)
{
    TArray<FIntVector> Keys;
    GridMap.GetKeys(Keys);

    for (FIntVector keyvector : Keys)
    {
        FVector UnderA = FVector(keyvector.X * GridSize, keyvector.Y * GridSize, keyvector.Z * GridSize);
        FVector UnderB = FVector((keyvector.X+1) * GridSize, keyvector.Y * GridSize, keyvector.Z * GridSize);
        FVector UnderC = FVector((keyvector.X+1) * GridSize, (keyvector.Y+1) * GridSize, keyvector.Z * GridSize);
        FVector UnderD = FVector(keyvector.X * GridSize, (keyvector.Y+1) * GridSize, keyvector.Z * GridSize);

        FVector UpA = FVector(keyvector.X * GridSize, keyvector.Y * GridSize, (keyvector.Z+1) * GridSize);
        FVector UpB = FVector((keyvector.X + 1) * GridSize, keyvector.Y * GridSize, (keyvector.Z + 1) * GridSize);
        FVector UpC = FVector((keyvector.X + 1) * GridSize, (keyvector.Y + 1) * GridSize, (keyvector.Z + 1) * GridSize);
        FVector UpD = FVector(keyvector.X * GridSize, (keyvector.Y + 1) * GridSize, (keyvector.Z + 1) * GridSize);

        DrawDebugLine(World, UnderA, UnderB, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderB, UnderC, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderC, UnderD, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderD, UnderA, color, false, 1.f, 0, 5);

        DrawDebugLine(World, UpA, UpB, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UpB, UpC, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UpC, UpD, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UpD, UpA, color, false, 1.f, 0, 5);

        DrawDebugLine(World, UnderA, UpA, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderB, UpB, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderC, UpC, color, false, 1.f, 0, 5);
        DrawDebugLine(World, UnderD, UpD, color, false, 1.f, 0, 5);

        FVector center = GetGridCenter(keyvector);

        DrawDebugPoint(GetWorld(), center, 5.f, FColor::Red, false, 1.f);
    }
}

float UGridSubsystem::GetGridSize()
{
    return GridSize;
}

void UGridSubsystem::SetCharacterGrid(FIntVector grid)
{
    CharacterGrid = grid;
}

void UGridSubsystem::SetCharacterLocation(FVector location)
{
    CharacterLocation = location;
}

float UGridSubsystem::GetDistanceFromCharacter(FVector location)
{

    return FVector::Dist(CharacterLocation, location);
}

bool UGridSubsystem::IsFishCanMove(FTransform t, float dis)
{
    float DistanceCharacter = GetDistanceFromCharacter(t.GetLocation());

    if (DistanceCharacter > dis)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void UGridSubsystem::RemoveGrid(const int32& EntityIndex, const FIntVector& OldGridIndex)
{
    if (GridMap.Contains(OldGridIndex))
    {
        GridMap[OldGridIndex].RemoveAll([&](const FGridEntityInfo& Info) { return Info.EntityIndex == EntityIndex; });
        if (GridMap[OldGridIndex].IsEmpty())
        {
            GridMap.Remove(OldGridIndex);
        }
    }
}

