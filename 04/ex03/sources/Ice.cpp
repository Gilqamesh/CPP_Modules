#include "Ice.hpp"
#include <iostream>
#include <new>
#include "debug.hpp"

Ice::Ice(): AMateria("ice")
{
	#ifndef NDEBUG
	std::cout << "Ice default constructor" << std::endl;
	#endif
}

Ice::~Ice()
{
	#ifndef NDEBUG
	std::cout << "Ice destructor" << std::endl;
	#endif
}

Ice::Ice(const Ice &a)
{
	*this = a;
}

Ice	&Ice::operator=(const Ice &a)
{
	if (this == &a)
		return (*this);
	type = a.type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*res;
	try
	{
		// Using the copy constructor
		res = new Ice(*this);
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
		exit(EXIT_FAILURE);
	}
	return (res);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
