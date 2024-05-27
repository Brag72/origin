#include <iostream>
#include "Quadrangle.h"
#include "MyException.h"

    int Quadrangle::get_side(string i)
    {
        if (i == "a") { return side_a; }
        if (i == "b") { return side_b; }
        if (i == "c") { return side_c; }
        if (i == "d") { return side_d; }
        return 0;
    }

    int Quadrangle::get_angle(string i)
    {
        if (i == "A") { return angle_A; }
        if (i == "B") { return angle_B; }
        if (i == "C") { return angle_C; }
        if (i == "D") { return angle_D; }
        return 0;
    }

    Quadrangle::Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Figure(4)
    {
        set_name("Четырехугольник");
        side_a = _a;
        side_b = _b;
        side_c = _c;
        side_d = _d;
        angle_A = _A;
        angle_B = _B;
        angle_C = _C;
        angle_D = _D;

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: сумма углов не равна 360");
        }
    }

    void Quadrangle::print_info()
    {
        cout << get_name() << endl;
        cout << "Стороны: ";
        cout << "a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << endl;
        cout << "Углы: ";
        cout << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << " D=" << angle_D << endl;
        cout << "создан" << endl;
    }

    bool Quadrangle::check()
    {
        if (get_sides_count() == 4 && angle_A + angle_B + angle_C + angle_D == 360)
        {
            return true;
        }
        return false;
    }