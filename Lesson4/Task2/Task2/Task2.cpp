#include <iostream>
#include <string>

class Figure
{
    int count_side;
    std::string name;

protected:
    Figure(int num, std::string in_name)
    {
        count_side = num;
        name = in_name;
    }
public:
    Figure()
    {
        count_side = 0;
        name = "Фигура: ";
    }

    virtual void cout_count()
    {
        std::cout << name << std::endl;
    }

    void SetName(std::string in_name) 
    {
        name = in_name;
    };
};

class Triangle : public Figure
{
    double a, b, c;
    double A, B, C;

protected:
    Triangle(double in_a, double in_b, double in_c, double in_A, double in_B, double in_C)  : Figure(3, "Треугольник: ")
    {
        a = in_a;
        b = in_b;
        c = in_c;
        A = in_A;
        B = in_B;
        C = in_C;
    }
public:
    Triangle() : Triangle(10.0, 20.0, 30.0, 40.0, 50.0, 60.0)
    {
    }    
    void cout_count() override
    {
        Figure::cout_count();
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};

class RightTriangle : public Triangle
{
protected:
    RightTriangle(double in_a, double in_b, double in_c, double in_A, double in_B) : Triangle(in_a, in_b, in_c, in_A, in_B, 90.0)
    {
    }

public:
    RightTriangle() : RightTriangle(0.0, 0.0, 0.0, 0.0, 0.0)
    {
        SetName("Прямоугольный треугольник: ");
    }
};

class IsoscelesTriangle : public Triangle
{
protected:
    IsoscelesTriangle(double in_b, double in_B) : Triangle(30.0, in_b, 30.0, 90.0, in_B, 90.0)
    {
    }
public:
    IsoscelesTriangle() : IsoscelesTriangle(0.0, 0.0)
    {
        SetName("Равнобедренный треугольник: ");
    }
};

class EquilateralTriangle  : public Triangle
{
public:
    EquilateralTriangle() : Triangle(30.0, 30.0, 30.0, 60.0, 60.0, 60.0)
    {
        SetName("Равносторонний треугольник: ");
    }
};


class Quadrangle : public Figure
{
    double a, b, c, d;
    double A, B, C, D;

protected:
    Quadrangle(double in_a, double in_b, double in_c, double in_d, double in_A, double in_B, double in_C, double in_D) : Figure(4, "Четырёхугольник: ")
    {
        a = in_a;
        b = in_b;
        c = in_c;
        d = in_d;
        A = in_A;
        B = in_B;
        C = in_C;
        D = in_D;
    }
public:
    Quadrangle() : Quadrangle(10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0)
    {
    }
    void cout_count() override
    {
        Figure::cout_count();
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle() : Quadrangle(30.0, 30.0, 40.0, 40.0, 90.0, 90.0, 90.0, 90.0)
    {
        SetName("Прямоугольник: ");
    }
};

class Square : public Quadrangle
{
protected:
    Square(double in_abcd) : Quadrangle(in_abcd, in_abcd, in_abcd, in_abcd, 90.0, 90.0, 90.0, 90.0)
    {
    }
public:
    Square() : Square(50.0)
    {
        SetName("Квадрат: ");
    }
};

class Parallelogram : public Quadrangle
{
protected:
    Parallelogram(double in_ac, double in_bd, double in_AC, double in_BD) : Quadrangle(in_ac, in_bd, in_ac, in_bd, in_AC, in_BD, in_AC, in_BD)
    {
    }
public:
    Parallelogram() : Parallelogram(10.0,50.0,60.0,80.0)
    {
        SetName("Параллелограмм: ");
    }
};

class Rhombus : public Quadrangle
{
protected:
    Rhombus(double in_abcd, double in_AC, double in_BD) : Quadrangle(in_abcd, in_abcd, in_abcd, in_abcd, in_AC, in_BD, in_AC, in_BD)
    {
    }
public:
    Rhombus() : Rhombus(50.0, 60.0, 10.0)
    {
        SetName("Ромб: ");
    }
};

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