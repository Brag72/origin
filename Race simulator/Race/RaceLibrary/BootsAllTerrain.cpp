#include "BootsAllTerrain.h"
#include "Race.h"

BootsAllTerrain::BootsAllTerrain()
{
	SetName("Ботинки-вездеходы");
	SetSpeed(6);
	SetTimeRest(60);
}

double BootsAllTerrain::TimeComplRace(Race& race)
{
	int num_stops = race.GetDistance() / GetSpeed() / GetTimeRest();

	if (num_stops >= 1 && race.GetDistance() / GetSpeed() / GetTimeRest() == num_stops) { num_stops--; }

	if (num_stops < 1) { return race.GetDistance() / GetSpeed(); }
	if (num_stops == 1) { return race.GetDistance() / GetSpeed() + 10; }
	return race.GetDistance() / GetSpeed() + ((num_stops - 1) * 5) + 10;
}