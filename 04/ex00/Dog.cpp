#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed" << std::endl;
}

Dog::Dog(const Dog &a)
{
	*this = a;
}

Dog	&Dog::operator=(const Dog &a)
{
	Animal::operator=(a);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof." << std::endl;
}
