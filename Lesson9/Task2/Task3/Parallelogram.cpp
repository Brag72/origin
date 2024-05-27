#include <iostream>
#include "Parallelogram.h"
#include "MyException.h"

    Parallelogram::Parallelogram(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("��������������");

        if (!check())
        {
            throw MyException("������ �������� ������. �������: ������� a,c � b,d � ���� A,C � B,D ������ ���� ������� �����");
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