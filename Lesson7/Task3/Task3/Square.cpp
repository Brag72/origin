#include <iostream>
#include "Square.h"
#include "MyException.h"

    Square::Square(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Квадрат");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: все стороны длжны быть равны, все углы равны 90");
        }
    }

    bool Square::check()
    {
        if (Quadrangle::check() && (get_side("a") & get_side("b") & get_side("c")) == get_side("d") &&
            get_angle("A") == 90 && get_angle("B") == 90 && get_angle("C") && get_angle("D") == 90)
        {
            return true;
        }
        return false;
    }