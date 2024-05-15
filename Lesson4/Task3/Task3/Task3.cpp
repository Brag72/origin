#include <iostream>

using namespace std;

class Figure
{
    int sides_count;
    string name;

protected:

    void set_name(string _name)
    {
        name = _name;
    }

    int get_sides_count()
    {
        return sides_count;
    }

public:

    Figure(int _sides_count)
    {
        sides_count = _sides_count;
        set_name("Фигура");
    }

    virtual void print_info()
    {
        cout << endl;
        cout << name << ": " << endl;
        if (check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sides_count << endl;
    }

    virtual bool check()
    {
        if (sides_count == 0)
        {
            return true;
        }
        return false;
    }
};

class Triangle : public Figure
{
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;

protected:

    int get_side(string i)
    {
        if (i == "a") { return side_a; }
        if (i == "b") { return side_b; }
        if (i == "c") { return side_c; }
        return 0;
    }

    int get_angle(string i)
    {
        if (i == "A") { return angle_A; }
        if (i == "B") { return angle_B; }
        if (i == "C") { return angle_C; }
        return 0;
    }

public:

    Triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Figure(3)
    {
        set_name("Треугольник");
        side_a = _a;
        side_b = _b;
        side_c = _c;
        angle_A = _A;
        angle_B = _B;
        angle_C = _C;
    }

    void print_info() override
    {
        Figure::print_info();
        cout << "Стороны: ";
        cout << "a=" << side_a << " b=" << side_b << " c=" << side_c << endl;
        cout << "Углы: ";
        cout << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << endl;
    }

    bool check() override
    {
        if (get_sides_count() == 3 && angle_A + angle_B + angle_C == 180)
        {
            return true;
        }
        return false;
    }

};

class RightTriangle : public Triangle
{
public:

    RightTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Прямоугольный треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && get_angle("C") == 90)
        {
            return true;
        }
        return false;
    }

};

class IsoscelesTriangle : public Triangle
{
public:

    IsoscelesTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равнобедренный треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && (get_side("a") == get_side("c") && get_angle("A") == get_angle("C")))
        {
            return true;
        }
        return false;
    }
};

class EquilateralTriangle : public Triangle
{
public:

    EquilateralTriangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равносторонний треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && get_side("a") == get_side("b") && get_side("a") == get_side("c") &&
            get_side("b") == get_side("a") && get_side("b") == get_side("c") &&
            get_side("c") == get_side("a") && get_side("c") == get_side("b") &&
            get_angle("A") == 60 && get_angle("B") == 60 && get_angle("C") == 60)
        {
            return true;
        }
        return false;
    }
};

class Quadrangle : public Figure
{
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;

protected:

    int get_side(string i)
    {
        if (i == "a") { return side_a; }
        if (i == "b") { return side_b; }
        if (i == "c") { return side_c; }
        if (i == "d") { return side_d; }
        return 0;
    }

    int get_angle(string i)
    {
        if (i == "A") { return angle_A; }
        if (i == "B") { return angle_B; }
        if (i == "C") { return angle_C; }
        if (i == "D") { return angle_D; }
        return 0;
    }

public:

    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Figure(4)
    {
        set_name("Четырехугольник");
        side_a = _a;
        side_b = _b;
        side_c = _c;
        side_d = _d;
        angle_A = _A;
        angle_B = _B;
        angle_C = _C;
        angle_D = _D;
    }

    void print_info() override
    {
        Figure::print_info();
        cout << "Стороны: ";
        cout << "a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << endl;
        cout << "Углы: ";
        cout << "A=" << angle_A << " B=" << angle_B << " C=" << angle_C << " D=" << angle_D << endl;
    }

    bool check() override
    {
        if (get_sides_count() == 4 && angle_A + angle_B + angle_C + angle_D == 360)
        {
            return true;
        }
        return false;
    }
};

class Rectangle : public Quadrangle
{

public:

    Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Прямоугольник");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_side("a") == get_side("c") && get_side("b") == get_side("d") &&
            get_angle("A") == 90 && get_angle("B") == 90 && get_angle("C") && get_angle("D") == 90)
        {
            return true;
        }
        return false;
    }
};

class Square : public Rectangle
{

public:

    Square(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Rectangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Квадрат");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_side("a") == get_side("b") && get_side("a") == get_side("c") &&
            get_side("b") == get_side("a") && get_side("b") == get_side("c") &&
            get_side("c") == get_side("a") && get_side("c") == get_side("b") &&
            get_angle("A") == 90 && get_angle("B") == 90 && get_angle("C") && get_angle("D") == 90)
        {
            return true;
        }
        return false;
    }
};

class Parallelogram : public Quadrangle
{

public:

    Parallelogram(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Параллелограмм");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_side("a") == get_side("c") && get_side("b") == get_side("d") &&
            get_angle("A") == get_angle("C") && get_angle("B") == get_angle("D"))
        {
            return true;
        }
        return false;
    }
};

class Rhombus : public Parallelogram
{

public:

    Rhombus(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Parallelogram(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Ромб");
    }

    bool check() override
    {
        if (Parallelogram::check() && get_side("a") == get_side("b") == get_side("c") == get_side("d") &&
            get_angle("A") == get_angle("C") && get_angle("B") == get_angle("D"))
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Figure figure(0);
    figure.print_info();

    Triangle triangle(10, 20, 30, 50, 60, 70);
    triangle.print_info();

    RightTriangle rightTriangle1(10, 20, 30, 50, 60, 90);
    rightTriangle1.print_info();

    RightTriangle rightTriangle2(10, 20, 30, 50, 40, 90);
    rightTriangle2.print_info();

    IsoscelesTriangle isoscelesTriangle1(10, 20, 10, 50, 60, 50);
    isoscelesTriangle1.print_info();

    EquilateralTriangle equilateralTriangle(30, 30, 30, 60, 60, 60);
    equilateralTriangle.print_info();

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    quadrangle.print_info();

    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    rectangle.print_info();

    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    square.print_info();

    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    parallelogram.print_info();

    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
    rhombus.print_info();
}