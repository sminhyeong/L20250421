#pragma once
#include "Actor.h"
class AGround : public AActor
{
public :
	AGround();
	virtual ~AGround();
	virtual void Tick() override;

};

