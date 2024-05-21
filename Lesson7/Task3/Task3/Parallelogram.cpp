#include <iostream>
#include "Parallelogram.h"
#include "MyException.h"

    Parallelogram::Parallelogram(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Параллелограмм");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: стороны a,c и b,d и углы A,C и B,D должны быть попарно равны");
        }
    }

    bool Parallelogram::check()
    {
        if (Quadrangle::check() && get_side("a") == get_side("c") && get_side("b") == get_side("d") &&
            get_angle("A") == get_angle("C") && get_angle("B") == get_angle("D"))
        {
            return true;
        }
        return false;
    }