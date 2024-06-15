#include "Carpet.h"
#include "Race.h"
Carpet::Carpet()
{
	SetName("Ковёр-самолёт");
	SetSpeed(10);
}

double Carpet::TimeComplRace(Race& race)
{
	if (race.GetDistance() < 1000) { return race.GetDistance() / GetSpeed(); }
	if (race.GetDistance() < 5000) { return race.GetDistance() * 0.97 / GetSpeed(); }
	if (race.GetDistance() < 10000) { return race.GetDistance() * 0.9 / GetSpeed(); }
	if (race.GetDistance() >= 10000) { return race.GetDistance() * 0.95 / GetSpeed(); }
}