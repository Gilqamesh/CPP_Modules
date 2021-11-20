#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():
ClapTrap(DEFAULT_NAME + std::string("_clap_name"), FRAG_HP, SCAV_EP, FRAG_AD),
FragTrap(),
ScavTrap(),
name(DEFAULT_NAME)
{
	std::cout << "DiamondTrap default constructor is called from " << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n + "_clap_name", FRAG_HP, SCAV_EP, FRAG_AD),
FragTrap(),
ScavTrap(),
name(n)
{
	std::cout << "DiamondTrap constructor with string parameter is called from "
		<< name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor of " << name << " is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a)
{
	std::cout << "DiamondTrap copy constructor is called from " << name << std::endl;
	*this = a; // Using the copy-assignment operator
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &a)
{
	ClapTrap::operator=(a);
	name = a.name;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target) const
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap my name is: " << name << " and my ClapTrap name is: "
		<< ClapTrap::name << std::endl;
}
