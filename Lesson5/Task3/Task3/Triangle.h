#pragma once
#include "Figure.h"
class Triangle : public Figure
{
	double a, b, c;
	double A, B, C;

protected:
	Triangle(double in_a, double in_b, double in_c, double in_A, double in_B, double in_C);

public:
	Triangle();
	void cout_count() override;
};