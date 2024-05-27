#include <iostream>
#include "EquilateralTriangle.h"
#include "MyException.h"

    EquilateralTriangle::EquilateralTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равносторонний треугольник");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: все стороны и углы должны быть равны");
        }
    }

    bool EquilateralTriangle::check()
    {
        if (Triangle::check() && get_side("a") == get_side("b") && get_side("a") == get_side("c") &&
            get_side("b") == get_side("a") && get_side("b") == get_side("c") &&
            get_side("c") == get_side("a") && get_side("c") == get_side("b") &&
            get_angle("A") == 60 && get_angle("B") == 60 && get_angle("C") == 60)
        {
            return true;
        }
        return false;
    }