#pragma once
#include <string>
#include "Vehicle.h"
#include "spec.h"

using namespace std;

class RACELIBRARY_API VehicleLand : public Vehicle
{
	double _time_before_rest;

public:
	VehicleLand();
	double TimeComplRace(class Race& race) override { return 0; }


protected:
	void SetTimeRest(double);
	double GetTimeRest();
};