#pragma once
#include <string>

using namespace std;

#ifdef RACELIBRARY_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

class RACELIBRARY_API Vehicle
{
	string _name; 
	double _speed;
	string _veh_type;
	bool _reg_check;

public:
	Vehicle();
	string GetName();
	string GetVehType();
	bool GetRegCheck();
	virtual double TimeComplRace(class Race& race) { return 0;}

	void SetRegCheck(bool);
protected:
	double GetSpeed();
	void SetName(string);
	void SetSpeed(double);
	void SetVehType(string);
};