// Fill out your copyright notice in the Description page of Project Settings.


#include "FishInitializerProcessor.h"
#include "../SwarmIntelligenceTrait.h"
#include "UGridSubsystem.h"

UFishInitializerProcessor::UFishInitializerProcessor()
{
	ObservedType = FishAttributes::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UFishInitializerProcessor::ConfigureQueries()
{
	EntityQuery.RegisterWithProcessor(*this);

	EntityQuery.AddRequirement<FishAttributes>(EMassFragmentAccess::ReadWrite);
}
void UFishInitializerProcessor::Initialize(UObject& Owner)
{


}

void UFishInitializerProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	GridSubsystem = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());
	if (!GridSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("UFishInitializerProcessor: GridSubsystem is empty"))
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("UFishInitializerProcessor Execute"))

	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FishAttributes> Attributes = Context.GetMutableFragmentView<FishAttributes>();
			for (FishAttributes& Attribute : Attributes)
			{
				if (!GridSubsystem->Avoids.Contains(Attribute.Type))
				{
					GridSubsystem->Avoids.Add(Attribute.Type, Attribute.Avoids);
				}
				if (!GridSubsystem->Chases.Contains(Attribute.Type))
				{
					GridSubsystem->Chases.Add(Attribute.Type, Attribute.Chases);
				}
			}
		}));
}