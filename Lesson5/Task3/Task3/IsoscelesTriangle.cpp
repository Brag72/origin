#include <iostream>
#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double in_b, double in_B) : Triangle(30.0, in_b, 30.0, 90.0, in_B, 90.0)
{
}

IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(0.0, 0.0)
{
	SetName("Равнобедренный треугольник: ");
}
