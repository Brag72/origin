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
		std::cout << "�� ��������!" << std::endl;
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

	std::cout << "������� ���������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> choise;

	int count = 0;
	Counter counter;

	if (choise == "��")
	{
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> count;
		counter.setCount(count);
	}
	std::string command;
	do
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
		
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