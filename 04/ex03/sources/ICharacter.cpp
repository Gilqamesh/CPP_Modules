#include "ICharacter.hpp"
#include <iostream>
#include "debug.hpp"

ICharacter::ICharacter(): name(DEFAULT_CHARACTER_NAME)
{
	#ifndef NDEBUG
	std::cout << "ICharacter default constructor" << std::endl;
	#endif
}

ICharacter::ICharacter(std::string n): name(n)
{
	#ifndef NDEBUG
	std::cout << "ICharacter string constructor" << std::endl;
	#endif
}

ICharacter::ICharacter(const ICharacter &a)
{
	*this = a;
}

ICharacter	&ICharacter::operator=(const ICharacter &a)
{
	if (this == &a)
		return (*this);
	name = a.name;
	return (*this);
}

ICharacter::~ICharacter()
{
	#ifndef NDEBUG
	std::cout << "ICharacter destructor" << std::endl;
	#endif
}

const std::string	&ICharacter::getName(void) const
{
	return (name);
}

std::ostream	&operator<<(std::ostream &os, const ICharacter &c)
{
	os << c.getName() << std::endl;
	return (os);
}