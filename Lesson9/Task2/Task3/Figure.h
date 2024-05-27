#pragma once
#include <string>
using namespace std;

class Figure
{
	int count_side;
	std::string name;

public:
	Figure(int _sides_count);
	virtual void print_info();
	virtual bool check();
	

protected:
	void set_name(string _name);
	int get_sides_count();
	string get_name();
};