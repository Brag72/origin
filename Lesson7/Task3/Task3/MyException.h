#pragma once
#include <stdexcept>

using namespace std;

class MyException : public domain_error
{
public:
	MyException(string msg) : domain_error(msg){}
};