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

	MyWorld->SpawnActor(new APlayer());
	MyWorld->SpawnActor(new ABoar());

	MyWorld->Run();

	delete MyWorld;
	MyWorld = nullptr;
}


