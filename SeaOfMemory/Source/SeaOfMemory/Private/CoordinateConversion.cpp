// Fill out your copyright notice in the Description page of Project Settings.


#include "CoordinateConversion.h"

CoordinateConversion::CoordinateConversion()
{
}

CoordinateConversion::~CoordinateConversion()
{
}

FVector CoordinateConversion::ConversionViewportToEngine(FVector vector)
{
    return FVector(vector.Y, vector.Z, vector.X);
}

FVector CoordinateConversion::ConversionEngineToViewport(FVector vector)
{
    return FVector(vector.Z, vector.X, vector.Y);

}

FRotator CoordinateConversion::ConversionRotatorViewportToEngine(FRotator rotator)
{
    return FRotator(-rotator.Yaw, rotator.Roll, rotator.Pitch);
}

FRotator CoordinateConversion::ConversionRotatorEngineToViewport(FRotator rotator)
{
    return FRotator(rotator.Roll, rotator.Pitch, rotator.Yaw);
}