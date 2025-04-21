#pragma once
#include <string>
#include <iostream>
#include "Actor.h"

class AMonster : public AActor
{
public :
	AMonster();
	virtual ~AMonster();
	virtual void Move();
	virtual void Tick() override;
};

