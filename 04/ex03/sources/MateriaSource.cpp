#include "MateriaSource.hpp"
#include <iostream>
#include "debug.hpp"

MateriaSource::MateriaSource()
{
	#ifndef NDEBUG
	std::cout << "MateriaSource default constructor" << std::endl;
	#endif
	for (int i = 0; i < materia_size; ++i)
		materia_inventory[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	#ifndef NDEBUG
	std::cout << "MateriaSource destructor" << std::endl;
	#endif
	for (int i = 0; i < number_learned; ++i)
	{
		#ifndef NDEBUG
		// Error checking
		if (materia_inventory[i] == nullptr)
		std::cout << "materia_inventory[i] is nullptr before delete in file " << __FILE__
			" at line " << __LINE__ << std::endl;;
		#endif
		delete materia_inventory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &a): number_learned(0)
{
	for (int i = 0; i < materia_size; ++i)
		materia_inventory[i] = nullptr;
	*this = a;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &a)
{
	if (this == &a)
		return (*this);
	for (int i = 0; i < number_learned; ++i)
	{
		#ifndef NDEBUG
		// Error checking
		if (materia_inventory[i] == nullptr)
		std::cout << "materia_inventory[i] is nullptr before delete in file " << __FILE__
			" at line " << __LINE__ << std::endl;;
		#endif
		delete materia_inventory[i];
		materia_inventory[i] = nullptr;
	}
	for (int i = 0; i < a.number_learned; ++i)
		materia_inventory[i] = a.materia_inventory[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (number_learned == materia_size)
	{
		#ifndef NDEBUG
		std::cout << "MateriaSource's inventory is full" << std::endl;
		#endif
		return ;
	}
	materia_inventory[number_learned++] = m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < number_learned; ++i)
		if (type == materia_inventory[i]->getType())
			return (materia_inventory[i]->clone());
	return (nullptr);
}
