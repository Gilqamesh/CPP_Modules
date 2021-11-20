#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap(DEFAULT_NAME, SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap default constructor is called from " << name << std::endl;
}

ScavTrap::ScavTrap(std::string n): ClapTrap(n, SCAV_HP, SCAV_EP, SCAV_AD)
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