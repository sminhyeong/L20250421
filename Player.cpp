#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	X = 2;
	Y = 2;
	Shape = 'P';
}

APlayer::~APlayer()
{
}

void APlayer::Move()
{
}

void APlayer::Tick()
{
	Move();
}
