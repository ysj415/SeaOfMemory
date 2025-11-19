// Fill out your copyright notice in the Description page of Project Settings.


#include "FishTargetInitializerProcessor.h"
#include "../SwarmIntelligenceTrait.h"
#include "MassCommonFragments.h"

UFishTargetInitializerProcessor::UFishTargetInitializerProcessor()
{
	ObservedType = FishAttributes::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UFishTargetInitializerProcessor::ConfigureQueries()
{
	EntityQuery.RegisterWithProcessor(*this);
	
	EntityQuery.AddRequirement<FishAttributes>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
}	


void UFishTargetInitializerProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FishAttributes> AttList = Context.GetMutableFragmentView<FishAttributes>();
			const TArrayView<FTransformFragment> TransList = Context.GetMutableFragmentView<FTransformFragment>();
			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				FishAttributes& att = AttList[EntityIndex];
				FTransform& trans = TransList[EntityIndex].GetMutableTransform();

				att.TargetLocation = trans.GetLocation();


			}
		}));
}
