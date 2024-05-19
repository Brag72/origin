#include <iostream>
#include "Parallelogram.h"


Parallelogram::Parallelogram(double in_ac, double in_bd, double in_AC, double in_BD) : Quadrangle(in_ac, in_bd, in_ac, in_bd, in_AC, in_BD, in_AC, in_BD)
{}

Parallelogram::Parallelogram() : Parallelogram(10.0, 50.0, 60.0, 80.0)
{
	SetName("ֿאנאככוכמדנאלל: ");
}