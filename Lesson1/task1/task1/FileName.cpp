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
		std::cout << "������� ����� ������: ";
		std::cin >> numberMonth;
		monthName month = static_cast<monthName>(numberMonth);

		switch (static_cast<int>(month))
		{
		case 0:
			std::cout << "�� ��������!";
			break;
		case 1:
			std::cout << "������" << std::endl;
			break;
		case 2:
			std::cout << "�������" << std::endl;
			break;
		case 3:
			std::cout << "����" << std::endl;
			break;
		case 4:
			std::cout << "������" << std::endl;
			break;
		case 5:
			std::cout << "���" << std::endl;
			break;
		case 6:
			std::cout << "����" << std::endl;
			break;
		case 7:
			std::cout << "����" << std::endl;
			break;
		case 8:
			std::cout << "������" << std::endl;
			break;
		case 9:
			std::cout << "��������" << std::endl;
			break;
		case 10:
			std::cout << "�������" << std::endl;
			break;
		case 11:
			std::cout << "������" << std::endl;
			break;
		case 12:
			std::cout << "�������" << std::endl;
			break;
		default:
			std::cout << "������������ �����!" << std::endl;
		}
	} while (numberMonth != 0);	
}