#pragma once
#include <string>

#ifdef GOODBYE_CLASS_EXPORTS
#define GOODBYE_CLASS_API  __declspec(dllexport)
#else
#define GOODBYE_CLASS_API  __declspec(dllimport)
#endif

namespace GoodbyeMan
{
	class GOODBYE_CLASS_API Leaver
	{ 
	public:
		std::string leave(std::string);
	};
}