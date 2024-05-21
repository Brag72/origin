#include <iostream>
#include "Rectangle.h"
#include "MyException.h"

    Rectangle::Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Прямоугольник");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: стороны должны быть по парно равны, углы должны быть равны 90 ");
        }
    }

    bool Rectangle::check()
    {
        if (Quadrangle::check() && get_side("a") == get_side("c") && get_side("b") == get_side("d") &&
            get_angle("A") == 90 && get_angle("B") == 90 && get_angle("C") && get_angle("D") == 90)
        {
            return true;
        }
        return false;
    }