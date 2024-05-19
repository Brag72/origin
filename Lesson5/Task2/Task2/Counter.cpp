#include <iostream>
#include"Counter.h"


void Counter::setCount(int count)
{
	this->count = count;
}
Counter::Counter()
{
	count = 1;
}
void Counter::increment()
{
	count++;
}
void Counter::decrement()
{
	count--;
}
void Counter::printCounter()
{
	std::cout << count << std::endl;
}
void Counter::closed()
{
	std::cout << "До свидания!" << std::endl;
}