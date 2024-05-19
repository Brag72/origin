#include <iostream>
#include "Header.h"

int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	if (b == 0)
	{
		std::cout << "На ноль делить запрещенно!" << std::endl;
	}
	else
	{
		return a / b;
	}
}
int power(int a, int b)
{
	int temp = a;

	for (int i = 1; i < b; ++i)
	{
		temp *= a;
	}
	return temp;
}