#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	virtual void Move();
	virtual void Tick() override;

};

