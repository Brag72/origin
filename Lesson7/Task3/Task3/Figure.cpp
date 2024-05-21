#include <iostream>
#include "Figure.h"

    void Figure::set_name(string _name)
    {
        name = _name;
    }
   
    string Figure::get_name()
    {
        return name;
    }

    int Figure::get_sides_count()
    {
        return count_side;
    }

    Figure::Figure(int _sides_count)
    {
        count_side = _sides_count;
        set_name("������");
    }

    void Figure::print_info()
    {
        cout << name << ": " << endl;
        if (check())
        {
            cout << "����������" << endl;
        }
        else
        {
            cout << "������������" << endl;
        }
        cout << "���������� ������: " << count_side << endl;
    }

    bool Figure::check()
    {
        if (count_side == 0)
        {
            return true;
        }
        return false;
    }