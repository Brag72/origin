#include <iostream>
#include <numeric>
#include <windows.h>

using namespace std;

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator+(const Fraction& other)
	{
		return Fraction((numerator_ * other.denominator_ + other.numerator_ * denominator_) / gcd(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_),
			(denominator_ * other.denominator_) / gcd(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_));
	}
	
	Fraction operator-(const Fraction& other)
	{
		return Fraction((numerator_ * other.denominator_ - other.numerator_ * denominator_) / gcd(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_),
			(denominator_ * other.denominator_) / gcd(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_));
	}

	Fraction operator*(const Fraction& other)
	{
		return Fraction((numerator_ * other.numerator_) / gcd(numerator_ * other.numerator_, denominator_ * other.denominator_),
			(denominator_ * other.denominator_) / gcd(numerator_ * other.numerator_, denominator_ * other.denominator_));
	}

	Fraction operator/(const Fraction& other)
	{
		return Fraction((numerator_ * other.denominator_) / gcd(numerator_ * other.denominator_, denominator_ * other.numerator_),
			(denominator_ * other.numerator_) / gcd(numerator_ * other.denominator_, denominator_ * other.numerator_));
	}

	Fraction operator-()
	{
		return Fraction(-numerator_ / gcd(numerator_, denominator_),
			denominator_ / gcd(numerator_, denominator_));
	}

	Fraction& operator++()
	{	
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction temp = *this;
		++(*this);
		return temp;
	}

	Fraction& operator--()
	{
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	bool operator==(Fraction other) { return numerator_ * other.denominator_ == other.numerator_ * denominator_; }
	bool operator!=(Fraction other) { return !(*this == other); }
	bool operator>(Fraction other) { return  numerator_ * other.denominator_ > other.numerator_ * denominator_; }
	bool operator<(Fraction other) { return other > *this; }
	bool operator>=(Fraction other) { return !(*this < other); }
	bool operator<=(Fraction other) { return !(*this > other); }
	void print()
	{
		std::cout << numerator_ << "/" << denominator_;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Russian");

	cout << "Введите числитель дроби 1: " << endl;
	int num1_1;
	cin >> num1_1;

	cout << "Введите знаменатель дроби 1: " << endl;
	int num1_2;
	cin >> num1_2;

	cout << "Введите числитель дроби 2: " << endl;
	int num2_1;
	cin >> num2_1;

	cout << "Введите знаменатель дроби 2: " << endl;
	int num2_2;
	cin >> num2_2;

	Fraction f1(num1_1, num1_2);
	Fraction f2(num2_1, num2_2);

	Fraction f3 = f1 + f2;
	f1.print();
	cout << " + ";
	f2.print();
	cout << " = ";
	f3.print();
	cout << endl;

	Fraction f4 = f1 - f2;
	f1.print();
	cout << " - ";
	f2.print();
	cout << " = ";
	f4.print();
	cout << endl;

	Fraction f5 = f1 * f2;
	f1.print();
	cout << " * ";
	f2.print();
	cout << " = ";
	f5.print();
	cout << endl;

	Fraction f6 = f1 / f2;
	f1.print();
	cout << " / ";
	f2.print();
	cout << " = ";
	f6.print();
	cout << endl;

	Fraction f8 = ++f1 * f2;
	cout << "++";
	f1.print();
	cout << " * ";
	f2.print();
	cout << " = ";
	f8.print();
	cout << endl <<"Значение дроби 1 = ";
	f1.print();
	cout << endl;

	Fraction f9 = f1-- * f2;
	f1.print();
	cout << "--";
	cout << " * ";
	f2.print();
	cout << " = ";
	f9.print();
	cout << endl << "Значение дроби 1 = ";
	f1.print();
		
	return 0;