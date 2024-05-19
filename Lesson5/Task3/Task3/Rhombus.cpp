#include <iostream>
#include "Rhombus.h"


Rhombus::Rhombus(double in_abcd, double in_AC, double in_BD) : Quadrangle(in_abcd, in_abcd, in_abcd, in_abcd, in_AC, in_BD, in_AC, in_BD)
{}

Rhombus::Rhombus() : Rhombus(50.0, 60.0, 10.0)
{
	SetName("Ромб: ");
}