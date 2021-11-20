#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type(DEFAULT_TYPE)
{
	std::cout << "Animal " << type << " has been default constructed" << std::endl;
}

Animal::Animal(std::string t): type(t)
{
	std::cout << "Animal " << type << " has been constructed from string param" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " has been destructed" << std::endl;
}

Animal::Animal(const Animal &a)
{
	*this = a;	// using copy-assignment operator
}

Animal	&Animal::operator=(const Animal &a)
{
	if (this == &a)
		return (*this);
	type = a.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal " << type << " makes some sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}
