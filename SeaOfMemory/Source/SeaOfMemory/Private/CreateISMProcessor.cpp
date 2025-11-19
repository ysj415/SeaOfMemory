// Fill out your copyright notice in the Description page of Project Settings.


#include "CreateISMProcessor.h"
#include "SeaOfMemory/SwarmIntelligenceTrait.h"
#include "Components/InstancedStaticMeshComponent.h"

UCreateISMProcessor::UCreateISMProcessor()
{
	ObservedType = FishAttributes::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UCreateISMProcessor::ConfigureQueries()
{
	EntityQuery.RegisterWithProcessor(*this);

	EntityQuery.AddRequirement<FishAttributes>(EMassFragmentAccess::ReadWrite);
	//UE_LOG(LogTemp, Warning, TEXT("UCreateISMProcessor::ConfigureQueries"));

}

void UCreateISMProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	//UE_LOG(LogTemp, Warning, TEXT("UCreateISMProcessor::Execute"));

	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FishAttributes> Attributes = Context.GetMutableFragmentView<FishAttributes>();

			for (FishAttributes& Attribute : Attributes)
			{
				//Attribute.ISMComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMesh"));
				//UE_LOG(LogTemp, Warning, TEXT("CreateDefaultSubobject"));
			}
		}));
}
