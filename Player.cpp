#include "Player.h"
#include <iostream>

APlayer::APlayer()
{

}

APlayer::~APlayer()
{
}

bool APlayer::Move()
{
	std::cout << "Player Move" << std::endl;
}

void APlayer::Tick()
{
	Move();
}
