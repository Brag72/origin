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
	
	std::cout << "¬ведите номер счЄта: " << std::endl;
	std::cin >> person.check;
	
	std::cout << "¬ведите им€ владельца: " << std::endl;
	std::cin >> person.name;

	std::cout << "¬ведите баланс: " << std::endl;
	std::cin >> person.sum;

	double NewBalance = 0;
	std::cout << "¬ведите новый баланс: " << std::endl;
	std::cin >> NewBalance;
			
	checkChange(person, NewBalance);

	std::cout << "¬аш счЄт: " << person.name << ", " << person.check << ", " << person.sum << std::endl;
}