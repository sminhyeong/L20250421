#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	virtual bool Move();
	virtual void Tick() override;

};

