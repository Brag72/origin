#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;

protected:
    int get_side(string i);
    int get_angle(string i);
public:
    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void print_info() override;
    bool check() override;
};
