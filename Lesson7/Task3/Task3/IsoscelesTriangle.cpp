#include <iostream>
#include "IsoscelesTriangle.h"
#include "MyException.h"

    IsoscelesTriangle::IsoscelesTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равнобедренный треугольник");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: стороны а и с должны быть равны, углы А и С также должны быть равны");
        }
    }

    bool IsoscelesTriangle::check()
    {
        if (Triangle::check() && (get_side("a") == get_side("c") && get_angle("A") == get_angle("C")))
        {
            return true;
        }
        return false;
    }