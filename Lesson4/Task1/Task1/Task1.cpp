#include <iostream>
#include <string>

class Figure
{
    int count_side;
    std::string name;

protected:
    Figure(int num,std::string in_name)
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
   
    void cout_count()
    {
        std::cout << name << count_side << std::endl;
    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3,"Треугольник: ")
    {
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure(4,"Четырёхугольник: ")
    {
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Количество сторон: " << std::endl;

    Figure figure;
    Triangle triagnle;
    Quadrangle quadrangle;

    figure.cout_count();
    triagnle.cout_count();
    quadrangle.cout_count();
}