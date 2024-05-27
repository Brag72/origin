#include <iostream>
#include "IsoscelesTriangle.h"
#include "MyException.h"

    IsoscelesTriangle::IsoscelesTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("�������������� �����������");

        if (!check())
        {
            throw MyException("������ �������� ������. �������: ������� � � � ������ ���� �����, ���� � � � ����� ������ ���� �����");
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