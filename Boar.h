#pragma once
#include "Monster.h"

class ABoar : public AMonster
{
public:
	ABoar();

	virtual ~ABoar();
	virtual void Move() override;
	virtual void Tick() override;
};

