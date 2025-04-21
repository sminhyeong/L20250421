#pragma once
class AActor
{
public:
	int X;
	int Y;
	char Shape;

	AActor();
	virtual ~AActor();
	virtual void Tick();
	virtual void SetActorShape(char Shape);
	virtual void SetActorLocation(int X, int Y);
};

