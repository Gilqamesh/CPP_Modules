#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor is called from " << name << std::endl;
}

FragTrap::FragTrap(std::string n): ClapTrap(n, 100, 100, 30)
{
	std::cout << "FragTrap constructor with string parameter is called from "
		<< name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << name << " is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a)
{
	std::cout << "FragTrap copy constructor is called from " << name << std::endl;
	*this = a; // Using the copy-assignment operator
}

FragTrap	&FragTrap::operator=(const FragTrap &a)
{
	std::cout << "FragTrap copy-assignment operator is called from " << name << std::endl;
	ClapTrap::operator=(a);
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << name << " has sent a positive high fives request" << std::endl;
}
