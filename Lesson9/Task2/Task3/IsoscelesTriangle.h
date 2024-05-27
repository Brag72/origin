#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle
{
public:

    IsoscelesTriangle(int _a, int _b, int _c, int _A, int _B, int _C);

    bool check() override;
};