#include "Cure.hpp"
#include <iostream>
#include <new>
#include "debug.hpp"

Cure::Cure(): AMateria("cure")
{
	#ifndef NDEBUG
	std::cout << "Cure default constructor" << std::endl;
	#endif
}

Cure::~Cure()
{
	#ifndef NDEBUG
	std::cout << "Cure destructor" << std::endl;
	#endif
}

Cure::Cure(const Cure &a)
{
	*this = a;
}

Cure	&Cure::operator=(const Cure &a)
{
	if (this == &a)
		return (*this);
	type = a.type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*res;
	try
	{
		// Using the copy constructor
		res = new Cure(*this);
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
		exit(EXIT_FAILURE);
	}
	return (res);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
