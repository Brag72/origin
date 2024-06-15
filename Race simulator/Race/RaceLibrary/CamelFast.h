#pragma once
#include "VehicleLand.h"

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

class RACELIBRARY_API CamelFast : public VehicleLand
{
public:
	CamelFast();
	double TimeComplRace(class Race&) override;
};