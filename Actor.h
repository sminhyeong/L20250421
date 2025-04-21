#pragma once
class AActor
{
protected:
	int X;
	int Y;
	char Shape;
	virtual void Draw();
public:
	AActor();
	virtual ~AActor();
	virtual void Tick();
};

