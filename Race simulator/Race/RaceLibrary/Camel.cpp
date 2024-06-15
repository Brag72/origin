#include "Camel.h"
#include "Race.h"

Camel::Camel()
{
	SetName("Верблюд");
	SetSpeed(10);
	SetTimeRest(30);
}

double Camel::TimeComplRace(Race& race)
{
	int num_stops = race.GetDistance() / GetSpeed() / GetTimeRest();

	if (num_stops >= 1 && race.GetDistance() / GetSpeed() / GetTimeRest() == num_stops) { num_stops--; }

	if (num_stops < 1) { return race.GetDistance() / GetSpeed(); }
	if (num_stops == 1) { return race.GetDistance() / GetSpeed() + 5; }
	if (num_stops > 1) { return race.GetDistance() / GetSpeed() + ((num_stops - 1) * 8) + 5; }
}
