#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

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
