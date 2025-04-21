#include "World.h"
#include "Actor.h"
UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::SpawnActor(AActor* soawnedActor)
{
	Actors.push_back(soawnedActor);
}

void UWorld::Run()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}
