#include "Centaur.h"
#include "Race.h"

Centaur::Centaur()
{
	SetName("Кентавр");
	SetSpeed(15);
	SetTimeRest(8);
}

double Centaur::TimeComplRace(Race& race)
{
	int num_stops = race.GetDistance() / GetSpeed() / GetTimeRest();

	if (num_stops >= 1 && race.GetDistance() / GetSpeed() / GetTimeRest() == num_stops) { num_stops--; }

	if (num_stops < 1) { return race.GetDistance() / GetSpeed(); }
	if (num_stops >= 1) { return race.GetDistance() / GetSpeed() + num_stops * 2; }
}
