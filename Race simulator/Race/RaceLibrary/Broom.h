#pragma once
#include "VehicleAir.h"
#include "spec.h"

class RACELIBRARY_API Broom : public VehicleAir
{
public:
	Broom();
	double TimeComplRace(class Race&) override;
};