#include <iostream>
#include "Square.h"


Square::Square(double in_abcd) : Quadrangle(in_abcd, in_abcd, in_abcd, in_abcd, 90.0, 90.0, 90.0, 90.0)
{
}

Square::Square() : Square(50.0)
{
	SetName(" вадрат: ");
}
