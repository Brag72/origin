#include <iostream>
#include <string>
#include "EquilateralTriangle.h"
#include "Figure.h"
#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "Parallelogram.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "RightTriangle.h"
#include "Square.h"
#include "MyException.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    try
    {
        Triangle triangle(10, 10, 10, 60, 60, 60);
        triangle.print_info();
    } 
    catch (const MyException& msg)
    {
        cout << msg.what() << endl;
    }
    cout << endl;

    try
    {
        RightTriangle righttriangle(10, 10, 10, 50, 40, 90);
        righttriangle.print_info();
    }
    catch (const MyException& msg)
    {
        cout << msg.what() << endl;
    }
    cout << endl;
    try
    {
        Parallelogram parallelogram(10, 10, 10, 10, 90, 90, 90, 90);
        parallelogram.print_info();
    }
    catch (const MyException& msg)
    {
        cout << msg.what() << endl;
    }
}