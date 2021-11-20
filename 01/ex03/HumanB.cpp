#include "HumanB.hpp"
#include <iostream>
#include <new>

void	HumanB::attack(void) const
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
