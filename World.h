#pragma once
#include <vector>
class AActor;

class UWorld
{
protected :
	bool IsRun;
	std::vector<AActor*> Actors;
	void GotoXY(int X, int Y);
public :
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetActors()
	{
		return Actors;
	}
	void SpawnActor(AActor* spawnedActor, int X, int Y, char Shape);
	void Run();
	char Input();
	void Rander(AActor* Actor);

};

