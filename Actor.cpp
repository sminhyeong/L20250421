#include "Actor.h"

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::SetActorShape(char Shape)
{
	this->Shape = Shape;
}

void AActor::SetActorLocation(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}
