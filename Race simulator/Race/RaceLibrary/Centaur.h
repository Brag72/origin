#pragma once
#include "VehicleLand.h"

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

class RACELIBRARY_API Centaur : public VehicleLand
{
public:
	Centaur();
	double TimeComplRace(class Race&) override;
};
