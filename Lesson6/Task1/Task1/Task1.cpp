#include <iostream>
#include <windows.h>

#define MODE 1

#ifndef MODE
#error "Необходимо определить MODE!"
#endif

#if MODE == 1
int add(int x, int y)
{
    return x + y;
}
#endif

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");
#if MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int x, y;
    std::cout << "Введите первое число: " << std::endl;
    std::cin >> x;
    std::cout << "Введите второе число: " << std::endl;
    std::cin >> y;
    std::cout << "Результат сложения: " << add(x, y) << std::endl;
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}