#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    bool check();
};