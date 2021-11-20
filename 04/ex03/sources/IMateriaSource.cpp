#include "IMateriaSource.hpp"
#include <iostream>
#include "debug.hpp"

IMateriaSource::IMateriaSource()
{
	#ifndef NDEBUG
	std::cout << "IMateriaSource default constructor" << std::endl;
	#endif
}

IMateriaSource::~IMateriaSource()
{
	#ifndef NDEBUG
	std::cout << "IMateriaSource destructor" << std::endl;
	#endif
}
