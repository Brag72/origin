#pragma once
#include "Quadrangle.h"

class Rhombus : public Quadrangle
{
public:
    Rhombus(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    bool check() override;
};