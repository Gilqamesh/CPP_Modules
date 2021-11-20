#include "Character.hpp"
#include <iostream>
#include "debug.hpp"

Character::Character(): number_equipped(0)
{
	#ifndef NDEBUG
	std::cout << "Character default constructor" << std::endl;
	#endif
	for (int i = 0; i < inventory_size; ++i)
		inventory[i] = nullptr;
}

Character::Character(std::string n): ICharacter(n), number_equipped(0)
{
	#ifndef NDEBUG
	std::cout << "Character string constructor" << std::endl;
	#endif
	for (int i = 0; i < inventory_size; ++i)
		inventory[i] = nullptr;
}

Character::~Character()
{
	#ifndef NDEBUG
	std::cout << "Character destructor" << std::endl;
	#endif
	for (int i = 0; i < number_equipped; ++i)
		delete inventory[i];
}

Character::Character(const Character &a): number_equipped(0)
{
	for (int i = 0; i < inventory_size; ++i)
		inventory[i] = nullptr;
	*this = a;
}

Character	&Character::operator=(const Character &a)
{
	if (this == &a)
		return (*this);
	ICharacter::operator=(a);
	for (int i = 0; i < number_equipped; ++i)
	{
		delete inventory[i];
		inventory[i] = nullptr;
	}
	for (int i = 0; i < a.number_equipped; ++i)
		inventory[i] = a.inventory[i]->clone();
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	if (number_equipped == inventory_size)
	{
		#ifndef NDEBUG
		std::cout << name << " Character's inventory is full" << std::endl;
		#endif
		return ;
	}
	for (size_t i = 0; i < inventory_size; ++i)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			++number_equipped;
			return ;
		}
	}
	#ifndef NDEBUG
	std::cout << "Something went terribly wrong with math in " << __FILE__
		<< "at line " << __LINE__ << std::endl;
	#endif
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= inventory_size)
	{
		#ifndef NDEBUG
		std::cout << "idx out of bound at line " << __LINE__ << std::endl;
		#endif
		return ;
	}
	if (number_equipped == 0)
	{
		#ifndef NDEBUG
		std::cout << name << " Character's inventory is empty" << std::endl;
		#endif
		return ;
	}
	inventory[idx] = nullptr;
	--number_equipped;
}

void	Character::use(int idx, ICharacter &target)
{
	#ifndef NDEBUG
	// Error checking
	if (idx < 0 || idx >= inventory_size)
	{
		std::cout << "idx is out of bound in " << __FILE__ << std::endl;
		return ;
	}
	#endif
	if (inventory[idx] == nullptr)
	{
		std::cout << "'" << name << "' Character's " << idx << " slot is empty " << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}
