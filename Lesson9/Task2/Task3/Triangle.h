#pragma once
#include "Figure.h"

class Triangle : public Figure
{
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;

protected:
    int get_side(string i);
    int get_angle(string i);

public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C);
    void print_info() override;
    bool check() override;
};