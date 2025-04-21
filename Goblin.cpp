#include "Goblin.h"

AGoblin::AGoblin()
{
}

AGoblin::~AGoblin()
{
}

void AGoblin::Move()
{
	std::cout << "·±" << std::endl;
}

void AGoblin::Tick()
{
	Move();
}
