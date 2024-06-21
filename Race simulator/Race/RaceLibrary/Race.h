#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"
#include "spec.h"


class RACELIBRARY_API Race
{
	double _distance;
	std::string Type;
public:
	int GetNumRegistered(Vehicle** list, int size_list);
	std::string GetType();
	void SetType();
	Race();
	double GetDistance();
	void SetDistance();
};
