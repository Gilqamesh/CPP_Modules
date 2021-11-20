#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a, b("Bob");
	a.attack("Bob");
	b.takeDamage(2);
	b.beRepaired(2);
}
