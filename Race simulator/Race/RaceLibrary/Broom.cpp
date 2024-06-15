#include "Broom.h"
#include "Race.h"

Broom::Broom()
{
	SetName("Метла");
	SetSpeed(20);
}

double Broom::TimeComplRace(Race& race)
{
	int i = race.GetDistance() / 1000;

	return race.GetDistance() / 100 * (100 - i) / GetSpeed();
}