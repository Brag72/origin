#include <iostream>
#include <string>
#include <windows.h>

class Counter
{
public:
	void setCount(int count)
	{
		this->count = count;
	}
	Counter()
	{
		count = 1;
	}	
	void increment()
	{
		count++;
	}
	void decrement()
	{
		count--;
	}
	void printCounter()
	{
		std::cout << count << std::endl;
	}
	void closed()
	{
		std::cout << "До свидания!" << std::endl;
	}

private:
	int count;		
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string choise;

	std::cout << "Желаете установить начальное значение счётчика? Введите да или нет: ";
	std::cin >> choise;

	int count = 0;
	Counter counter;

	if (choise == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> count;
		counter.setCount(count);
	}
	std::string command;
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		
		std::cin >> command;

		if (command == "+")
		{
			counter.increment();
		}
		if (command == "-")
		{
			counter.decrement();
		}
		if (command == "=")
		{
			counter.printCounter();
		}
		if (command == "x")
		{
			counter.closed();
		}
	} while (command != "x");
}