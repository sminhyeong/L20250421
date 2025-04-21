#pragma once
#include <vector>
class AActor;

class UWorld
{
protected :
	std::vector<AActor*> Actors;
public :
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetActors()
	{
		return Actors;
	}
	void SpawnActor(AActor* soawnedActor);
	void Run();

};

