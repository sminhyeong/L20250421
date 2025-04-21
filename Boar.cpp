#include "Boar.h"
#include <iostream>

ABoar::ABoar()
{
}

ABoar::~ABoar()
{
}

void ABoar::Move()
{
	std::cout << "boar" << std::endl;
}

void ABoar::Tick()
{
	Move();
}
