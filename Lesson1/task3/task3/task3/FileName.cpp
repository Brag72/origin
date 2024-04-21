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
	std::cout << "�����: " << city.city << std::endl;
	std::cout << "�����: " << city.street << std::endl;
	std::cout << "����� ����: " << city.home << std::endl;
	std::cout << "����� ��������: " << city.apart << std::endl;
	std::cout << "������: " << city.index << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	address moskva = { "������", "�����", 12, 8, 123456 };
	address ijevsk = { "������", "�������", 59, 143, 953769 };

	fooPrintCity(moskva);
	fooPrintCity(ijevsk);
}