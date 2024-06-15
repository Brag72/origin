#pragma once
#include <string>
#include "Vehicle.h"

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

using namespace std;

class RACELIBRARY_API VehicleAir : public Vehicle
{
public:
	VehicleAir();
	double TimeComplRace(class Race& race) override { return 0; }
};