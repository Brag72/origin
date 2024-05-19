#pragma once
#include <string>

class Figure
{
	int count_side;
	std::string name;

public:
	virtual void cout_count();
	void SetName(std::string in_name);
	Figure();

protected:
	Figure(int num, std::string in_name);
};

