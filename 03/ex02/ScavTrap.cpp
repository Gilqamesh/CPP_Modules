#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor is called from " << name << std::endl;
}

ScavTrap::ScavTrap(std::string n): ClapTrap(n, 100, 50, 20)
{
	std::cout << "ScavTrap constructor with string parameter is called from " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << name << " is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	std::cout << "ScavTrap copy constructor is called from " << name << std::endl;
	*this = a; // Using the copy-assignment operator
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "ScavTrap copy-assignment operator is called from " << name << std::endl;
	ClapTrap::operator=(a);
	return (*this);
}

void	ScavTrap::attack(std::string const &target) const
{
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage
		<< " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " has entered in Gate keeper mode!" << std::endl;
}