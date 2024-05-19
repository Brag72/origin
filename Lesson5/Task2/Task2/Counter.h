#pragma once

class Counter
{
public:
	void setCount(int count);	
	Counter();	
	void increment();	
	void decrement();	
	void printCounter();	
	void closed();

private:
	int count;
};