#pragma once
#include "VehicleLand.h"
#include "spec.h"

class RACELIBRARY_API CamelFast : public VehicleLand
{
public:
	CamelFast();
	double TimeComplRace(class Race&) override;
};