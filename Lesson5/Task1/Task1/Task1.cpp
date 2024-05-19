#include <iostream>
#include "Header.h"
#include <Windows.h>

int x, y, choise;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число: " << std::endl;
    std::cin >> x;
    std::cout << "Введите второе число: " << std::endl;
    std::cin >> y;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
    std::cin >> choise;

    switch (choise)
    {
    case 1: std::cout << x << " + " << y << " = " << sum(x, y) << std:: endl;
        break;
    case 2: std::cout << x << " - " << y << " = " << sub(x, y) << std::endl;
        break;
    case 3: std::cout << x << " * " << y << " = " << mult(x, y) << std::endl;
        break;
    case 4: std::cout << x << " / " << y << " = " << divide(x, y) << std::endl;
        break;
    case 5: std::cout << x << " в степени " << y << " = " << power(x, y) << std::endl;
        break;
    }
}
