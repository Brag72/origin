#include "Race.h"
#include <iostream>

Race::Race()
{
	_distance = 0;
    Type = "All";
}

int Race::GetNumRegistered(Vehicle** list, int size_list)
{
    int num = 0;

    for (int i = 0; i < size_list; i++)
    {
        if (list[i]->GetRegCheck()) { num++; }
    }
    return num;
}

void Race::SetDistance()
{
    std::cin >> _distance;
}

double Race::GetDistance() 
{
	return _distance;
}

void Race::SetType()
{
    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        Type = "Land";
        break;
    case 2:
        Type = "Air";
        break;
    default:
        break;
    }
}

std::string Race::GetType()
{
    return Type;
}