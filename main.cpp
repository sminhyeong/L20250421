// L20250421.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "World.h"
#include "Goblin.h"
#include "Slime.h"
#include "Player.h"
#include "Boar.h"
using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || j == 0 || i == 9 || j == 9)
			{
				MyWorld->SpawnActor(new ABoar(), j, i, '*');
			}
			else
			{
				MyWorld->SpawnActor(new ABoar(), j, i, ' ');
			}
		}
	}
	MyWorld->SpawnActor(new ABoar(),5,5,'M');
	MyWorld->SpawnActor(new APlayer(),2,2,'P');

	MyWorld->Run();

	delete MyWorld;
	MyWorld = nullptr;
}


