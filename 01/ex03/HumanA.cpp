#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
