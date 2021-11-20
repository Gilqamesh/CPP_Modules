#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a, b("Bob");
	a.attack("Bob");
	b.takeDamage(2);
	b.beRepaired(2);

	std::cout << std::endl;
	ScavTrap	c, d("Blake");
	c.guardGate();
	d.guardGate();
	c.attack("Bob");
	c.beRepaired(2);
	d.takeDamage(4);

	std::cout << std::endl;
	FragTrap	e, f("John");
	e.attack("Blake");
	// Does not exist
	// e.guardGate();
	e.beRepaired(5);
	f.takeDamage(3);
	f.highFivesGuys();
	e.highFivesGuys();
}
