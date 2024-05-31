#include <iostream>
#include "goodbye_class.h"
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    GoodbyeMan::Leaver leaver;

    std::cout << "Введите имя: ";
    std::string Name;
    std::cin >> Name;

    std::cout << leaver.leave(Name);

    system("pause");
}