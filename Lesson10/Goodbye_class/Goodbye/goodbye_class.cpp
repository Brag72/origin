#include <string>
#include <Windows.h>
#include "goodbye_class.h"

using namespace GoodbyeMan;

std::string Leaver::leave(std::string Name)
{
	return "До свидания, " + Name + "!";
}