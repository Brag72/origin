#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:

    RightTriangle(int _a, int _b, int _c, int _A, int _B, int _C);
    bool check() override;
};