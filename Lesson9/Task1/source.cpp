#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    std::cout << "������� ���� ���: " << std::endl;
    std::string Name;
    std::cin >> Name;
    std::cout << "������, " << Name << "!";
}