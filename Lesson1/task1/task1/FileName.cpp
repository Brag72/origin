#include <iostream>

enum class monthName
{
	jan,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int numberMonth = 0;
	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> numberMonth;
		monthName month = static_cast<monthName>(numberMonth);

		switch (static_cast<int>(month))
		{
		case 0:
			std::cout << "До свидания!";
			break;
		case 1:
			std::cout << "Январь" << std::endl;
			break;
		case 2:
			std::cout << "Февраль" << std::endl;
			break;
		case 3:
			std::cout << "Март" << std::endl;
			break;
		case 4:
			std::cout << "Апрель" << std::endl;
			break;
		case 5:
			std::cout << "Май" << std::endl;
			break;
		case 6:
			std::cout << "Июнь" << std::endl;
			break;
		case 7:
			std::cout << "Июль" << std::endl;
			break;
		case 8:
			std::cout << "Август" << std::endl;
			break;
		case 9:
			std::cout << "Сентябрь" << std::endl;
			break;
		case 10:
			std::cout << "Октябрь" << std::endl;
			break;
		case 11:
			std::cout << "Ноябрь" << std::endl;
			break;
		case 12:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
		}
	} while (numberMonth != 0);	
}