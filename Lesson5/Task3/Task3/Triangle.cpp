#include <iostream>
#include "Triangle.h"

Triangle::Triangle(double in_a, double in_b, double in_c, double in_A, double in_B, double in_C) : Figure(3, "Треугольник: ")
{
    a = in_a;
    b = in_b;
    c = in_c;
    A = in_A;
    B = in_B;
    C = in_C;
}

Triangle::Triangle() : Triangle(10.0, 20.0, 30.0, 40.0, 50.0, 60.0)
{
}
void Triangle::cout_count()
{
    Figure::cout_count();
    std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
}