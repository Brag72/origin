#pragma once
#include <string>
#include "Vehicle.h"
#include "spec.h"

using namespace std;

class RACELIBRARY_API VehicleAir : public Vehicle
{
public:
	VehicleAir();
	double TimeComplRace(class Race& race) override { return 0; }
};