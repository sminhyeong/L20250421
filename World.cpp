#include "World.h"
#include "Actor.h"
#include <windows.h>
#include <conio.h>
#include <iostream>

UWorld::UWorld()
{
	IsRun = true;
}

char UWorld::Input()
{
	char var = '\0';
	if (_kbhit())
	{
		int key = _getch();
		var = key;
	}
	return var;
}
void UWorld::Rander(AActor*Actor)
{
	GotoXY(Actor->X, Actor->Y);
	std::cout << Actor->Shape;
}
void UWorld::GotoXY(int X, int Y)
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::SpawnActor(AActor* spawnedActor, int X, int Y, char Shape)
{
	spawnedActor->SetActorShape(Shape);
	spawnedActor->SetActorLocation(X,Y);
	Actors.push_back(spawnedActor);
}

void UWorld::Run()
{
	while (IsRun)
	{
		//Input의 경우도 Input장치들의 추상화를 시켜 크래스화
		//현재는 간단하게만 작업해놓음
		char key = Input();
		
		if (toupper(key) == 'P')
		{
			IsRun = false;
		}

		for (auto Actor : Actors)
		{
			Actor->Tick();
			Rander(Actor);
		}
	}
}
