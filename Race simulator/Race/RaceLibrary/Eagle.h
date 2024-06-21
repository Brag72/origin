#pragma once
#include "VehicleAir.h"
#include "spec.h"

class RACELIBRARY_API Eagle : public VehicleAir
{
public:
	Eagle();
	double TimeComplRace(class Race&) override;
};