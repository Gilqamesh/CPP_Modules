#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type(DEFAULT_NAME)
{
	std::cout << "WrongAnimal " << type << " has been default constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string n): type(n)
{
	std::cout << "WrongAnimal " << type << " has been constructed from string param" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " has been destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	*this = a;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &a)
{
	if (this == &a)
		return (*this);
	type = a.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << type << " makes some sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}
