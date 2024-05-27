#include <iostream>
#include "Triangle.h"
#include "MyException.h"

    int Triangle::get_side(string i)
    {
        if (i == "a") { return side_a; }
        if (i == "b") { return side_b; }
        if (i == "c") { return side_c; }
        return 0;
    }

    int Triangle::get_angle(string i)
    {
        if (i == "A") { return angle_A; }
        if (i == "B") { return angle_B; }
        if (i == "C") { return angle_C; }
        return 0;
    }

    Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Figure(3)
    {
        set_name("Треугольник");
        side_a = _a;
        side_b = _b;
        side_c = _c;
        angle_A = _A;
        angle_B = _B;
        angle_C = _C;

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 180");
        }
    }

    void Triangle::print_info()
    {
        cout << get_name() << endl;
        cout << "Стороны: ";
        cout << "a=" << side_a << " b=" << side_b << " c=" << side_c << endl;
        cout << "Углы: ";
        cout << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << endl;
        cout << "создан" << endl;
    }
    
    bool Triangle::check()
    {
        if (get_sides_count() == 3 && angle_A + angle_B + angle_C == 180)
        {
            return true;
        }
        return false;
    }