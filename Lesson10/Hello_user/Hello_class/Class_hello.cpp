#include <iostream>
#include <string>
#include "Class_hello.h"

namespace PrivetMan
{
    std::string Greeter::greet(std::string phrase)
    {
        return "Здравствуй, " + phrase + "!";
    }
}