#include <iostream>
#include "Figure.h"

Figure::Figure(int num, std::string in_name)
{
    count_side = num;
    name = in_name;
}

Figure::Figure()
{
    count_side = 0;
    name = "Фигура: ";
}

void Figure::cout_count()
{
    std::cout << name << std::endl;
}

void Figure::SetName(std::string in_name)
{
    name = in_name;
}
