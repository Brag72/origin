#pragma once
#include "VehicleAir.h"

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

class RACELIBRARY_API Carpet : public VehicleAir
{
public:
	Carpet();
	double TimeComplRace(class Race&) override;
};