#include <iostream>
#include <string>
#include "Leaver.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);

    Leaver leaver;
    leaver.leave(name);

    system("pause");
}