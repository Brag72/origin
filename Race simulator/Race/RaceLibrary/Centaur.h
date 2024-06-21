#pragma once
#include "VehicleLand.h"
#include "spec.h"

class RACELIBRARY_API Centaur : public VehicleLand
{
public:
	Centaur();
	double TimeComplRace(class Race&) override;
};
