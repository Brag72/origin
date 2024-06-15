#include "Eagle.h"
#include "Race.h"

Eagle::Eagle()
{
	SetName("Îð¸ë");
	SetSpeed(8);
}

double Eagle::TimeComplRace(Race& race)
{
	return race.GetDistance() * 0.94 / GetSpeed();
}