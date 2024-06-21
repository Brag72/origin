#include "CamelFast.h"
#include "Race.h"

CamelFast::CamelFast()
{
	SetName("Верблюд-быстроход");
	SetSpeed(40);
	SetTimeRest(10);
}

double CamelFast::TimeComplRace(Race& race)
{
	int num_stops = race.GetDistance() / GetSpeed() / GetTimeRest();

	if (num_stops >= 1 && race.GetDistance() / GetSpeed() / GetTimeRest() == num_stops) { num_stops--; }

	if (num_stops < 1) { return race.GetDistance() / GetSpeed(); }
	if (num_stops == 1) { return race.GetDistance() / GetSpeed() + 5; }
	if (num_stops == 2) { return race.GetDistance() / GetSpeed() + 5 + 6.5; }
	return race.GetDistance() / GetSpeed() + ((num_stops - 2) * 8) + 5 + 6.5;
}