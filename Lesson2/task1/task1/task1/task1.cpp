#include <iostream>

class Calculator
{
public:
    double num1 = 0;
    double num2 = 0;
    
    double add()
    {
        return num1 + num2;        
    }
    double multiply()
    {
        return num1 * num2;
    } 
    double substruct_1_2()
    {
        return num1 - num2;
    }
    double substruct_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return false;
        }
        return true;
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return false;
        }
        return true;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Calculator calculator;
   
    do
    {
        std::cout << "Введите первое число: " << std::endl;
        std::cin >> calculator.num1;

        while (calculator.set_num1(calculator.num1))
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите первое число: " << std::endl;
            std::cin >> calculator.num1;
        }

        std::cout << "Введите второе число: " << std::endl;
        std::cin >> calculator.num2;       

        while (calculator.set_num2(calculator.num2))
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите второе число: " << std::endl;
            std::cin >> calculator.num2;
        }

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calculator.substruct_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.substruct_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    } while (true);
}