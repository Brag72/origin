#include <iostream>
#include "RightTriangle.h"



RightTriangle::RightTriangle(double in_a, double in_b, double in_c, double in_A, double in_B) : Triangle(in_a, in_b, in_c, in_A, in_B, 90.0)
{
}
RightTriangle::RightTriangle() : RightTriangle(0.0, 0.0, 0.0, 0.0, 0.0)
{
	SetName("Прямоугольный треугольник: ");
}
