#include "Boar.h"
#include <iostream>

ABoar::ABoar()
{
	X = 5;
	Y = 5;
	Shape = 'W';
}

ABoar::~ABoar()
{
}

void ABoar::Move()
{

}

void ABoar::Tick()
{
	Move();
}
