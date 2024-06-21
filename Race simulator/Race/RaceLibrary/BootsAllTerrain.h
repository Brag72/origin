#pragma once
#include "VehicleLand.h"
#include "spec.h"

class RACELIBRARY_API BootsAllTerrain : public VehicleLand
{
public:
	BootsAllTerrain();
	double TimeComplRace(class Race&) override;
};