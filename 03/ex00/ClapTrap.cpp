#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("Anonymous"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor is called from " << name << std::endl;
}

ClapTrap::ClapTrap(std::string n): name(n), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap constructor with string parameter is called from " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor of " << name << " is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap copy constructor is called from " << name << std::endl;
	*this = a; // Using the copy-assignment operator
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &a)
{
	std::cout << "ClapTrap copy-assignment operator is called from " << name << std::endl;
	name = a.name;
	hit_points = a.hit_points;
	energy_points = a.energy_points;
	attack_damage = a.attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	std::cout << "ClapTrap " << name << " took " << damage << " damage" << std::endl;
	hit_points -= damage;
}

void	ClapTrap::beRepaired(unsigned int repaired)
{
	std::cout << "ClapTrap " << name << " has been repaired for " << repaired
		<< " hitpoints" << std::endl;
	hit_points += repaired;
}
