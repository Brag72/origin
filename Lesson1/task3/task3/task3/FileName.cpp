#include <iostream>
#include <string>

struct address
{
	std::string city;
	std::string street;
	int home;
	int apart;
	int index;
};
void fooPrintCity(address city)
{
	std::cout << "Город: " << city.city << std::endl;
	std::cout << "Улица: " << city.street << std::endl;
	std::cout << "Номер дома: " << city.home << std::endl;
	std::cout << "Номер квартиры: " << city.apart << std::endl;
	std::cout << "Индекс: " << city.index << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	address moskva = { "Москва", "Арбат", 12, 8, 123456 };
	address ijevsk = { "Ижевск", "Пушкина", 59, 143, 953769 };

	fooPrintCity(moskva);
	fooPrintCity(ijevsk);
}