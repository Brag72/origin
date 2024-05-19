#include <iostream>
#include "Quadrangle.h"

    double a, b, c, d;
    double A, B, C, D;

Quadrangle::Quadrangle(double in_a, double in_b, double in_c, double in_d, double in_A, double in_B, double in_C, double in_D) : Figure(4, "Четырёхугольник: ")
{
        a = in_a;
        b = in_b;
        c = in_c;
        d = in_d;
        A = in_A;
        B = in_B;
        C = in_C;
        D = in_D;
};

Quadrangle::Quadrangle() : Quadrangle(10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0)
{
}
void Quadrangle::cout_count()
{
    Figure::cout_count();
    std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
}
