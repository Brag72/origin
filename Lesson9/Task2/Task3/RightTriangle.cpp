#include <iostream>
#include "RightTriangle.h"
#include "MyException.h"

    RightTriangle::RightTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Прямоугольный треугольник");

        if (!check())
        {
            throw MyException("Ошибка создания фигуры. Причина: угол С не равен 90");
        }   
    }
   
    bool RightTriangle::check()
    {
        if (Triangle::check() && get_angle("C") == 90)
        {
            return true;
        }
        return false;
    }