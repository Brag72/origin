#pragma once
#include "Figure.h"
class Quadrangle : public Figure
{
	double a, b, c, d;
	double A, B, C, D;

protected:
	Quadrangle(double in_a, double in_b, double in_c, double in_d, double in_A, double in_B, double in_C, double in_D);
public:
	Quadrangle();
	void cout_count() override;
};

