#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat has been constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a)
{
	*this = a;
}

WrongCat	&WrongCat::operator=(const WrongCat &a)
{
	WrongAnimal::operator=(a);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Miau" << std::endl;
}
