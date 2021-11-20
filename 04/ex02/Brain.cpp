#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been destructed" << std::endl;
}

Brain::Brain(const Brain &a)
{
	*this = a;
}

Brain	&Brain::operator=(const Brain &a)
{
	if (this == &a)
		return (*this);
	for (size_t i = 0; i < BRAIN_CAPACITY && a.ideas[i] != ""; ++i)
		ideas[i] = a.ideas[i];
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Brain &b)
{
	for (size_t i = 0; i < BRAIN_CAPACITY && b.ideas[i] != ""; ++i)
		os << b.ideas[i] << std::endl;
	return (os);
}

void	Brain::addIdea(std::string s)
{
	size_t	i = 0;
	for (; i < BRAIN_CAPACITY && ideas[i] != ""; ++i)
		;
	ideas[i] = s;
}
