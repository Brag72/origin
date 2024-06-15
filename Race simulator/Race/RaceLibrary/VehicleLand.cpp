#include "VehicleLand.h"

VehicleLand::VehicleLand() : _time_before_rest(0)
{
    SetVehType("Land");
}

void VehicleLand::SetTimeRest(double t)
{
    _time_before_rest = t;
}

double VehicleLand::GetTimeRest()
{
    return _time_before_rest;
}
