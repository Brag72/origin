#pragma once
#include "Quadrangle.h"
class Parallelogram : public Quadrangle
{
protected:
	Parallelogram(double in_ac, double in_bd, double in_AC, double in_BD);
public:
	Parallelogram();
};