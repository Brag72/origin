#include <iostream>
#include <string>

struct bankStruct
{
	int check;
	std::string name;
	double sum;
};

void checkChange(bankStruct& person, double NewBalance)
{
	person.sum = NewBalance;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	bankStruct person;
	
	std::cout << "������� ����� �����: " << std::endl;
	std::cin >> person.check;
	
	std::cout << "������� ��� ���������: " << std::endl;
	std::cin >> person.name;

	std::cout << "������� ������: " << std::endl;
	std::cin >> person.sum;

	double NewBalance = 0;
	std::cout << "������� ����� ������: " << std::endl;
	std::cin >> NewBalance;
			
	checkChange(person, NewBalance);

	std::cout << "��� ����: " << person.name << ", " << person.check << ", " << person.sum << std::endl;
}