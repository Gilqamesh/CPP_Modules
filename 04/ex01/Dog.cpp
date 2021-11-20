#include "Dog.hpp"
#include <iostream>
#include <new>

Dog::Dog() try: Animal("Dog"), brain(new Brain)
{
	std::cout << "Dog has been constructed" << std::endl;
}
catch (std::bad_alloc e)
{
	std::cout << e.what();
}

Dog::~Dog()
{
	delete brain;
	brain = nullptr;
	std::cout << "Dog has been destructed" << std::endl;
}

Dog::Dog(const Dog &a)
{
	*this = a;
}

Dog	&Dog::operator=(const Dog &a)
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

void	Dog::makeSound(void) const
{
	std::cout << "Woof.." << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (brain);
}
