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


void print_info(Figure* name)
{
    name->cout_count();
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    RightTriangle rightTriangle;
    IsoscelesTriangle isoscelesTriangle;
    EquilateralTriangle equilateralTriangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhombus rhombus;

    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);
}