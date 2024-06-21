#pragma once
#include "VehicleLand.h"
#include "spec.h"

class RACELIBRARY_API Camel : public VehicleLand
{
public:
	Camel();
	double TimeComplRace(class Race&) override;
};