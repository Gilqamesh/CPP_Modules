#include "Cat.hpp"
#include <iostream>
#include <new>

Cat::Cat() try: Animal("Cat"), brain(new Brain)
{
	std::cout << "Cat has been constructed" << std::endl;
}
catch (std::bad_alloc e)
{
	std::cout << e.what();
}

Cat::~Cat()
{
	delete brain;
	brain = nullptr;
	std::cout << "Cat has been destructed" << std::endl;
}

Cat::Cat(const Cat &a)
{
	*this = a;
}

Cat	&Cat::operator=(const Cat &a)
{
	if (this == &a)
		return (*this);
	Animal::operator=(a);
	delete brain;
	try
	{
		brain = new Brain;
		*brain = *(a.brain);
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~~ :3" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (brain);
}
