#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat has been constructed" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat has been destructed" << std::endl;
}

Cat::Cat(const Cat &a)
{
	*this = a;
}

Cat	&Cat::operator=(const Cat &a)
{
	Animal::operator=(a);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~~ :3" << std::endl;
}
