#include "Vehicle.h"

Vehicle::Vehicle() : _name("ря"), _speed(0), _veh_type("Veh"), _reg_check(false) {}

string Vehicle::GetName()
{
    return _name;
}

double Vehicle::GetSpeed()
{
    return _speed;
}

string Vehicle::GetVehType()
{
    return _veh_type;
}

bool Vehicle::GetRegCheck()
{
    return _reg_check;
}

void Vehicle::SetRegCheck(bool reg_check)
{
    _reg_check = reg_check;
}

void Vehicle::SetName(string name)
{
    _name = name;
}

void Vehicle::SetSpeed(double speed)
{
    _speed = speed;
}

void Vehicle::SetVehType(string veh_type)
{
    _veh_type = veh_type;
}
