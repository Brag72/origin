#pragma once
#include "VehicleAir.h"
#include "spec.h"

class RACELIBRARY_API Carpet : public VehicleAir
{
public:
	Carpet();
	double TimeComplRace(class Race&) override;
};