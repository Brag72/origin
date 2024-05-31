#include <iostream>
#include <Windows.h>
#include "Class_hello.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    PrivetMan::Greeter greeter;
    std::cout << "Введите имя: ";

    std::string Name;
    std::cin >> Name;
    std::cout << "Введите имя: ";

    std::cout << greeter.greet(Name);

    system("pause");
}