#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

// ************************************************************************** //
//                               DiamondTrap Class                            //
// ************************************************************************** //

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();	// Default constructor
		DiamondTrap(std::string);	// Constructor with 1 string arg
		~DiamondTrap();	// Destructor
		DiamondTrap(const DiamondTrap &);	// Copy constructor
		DiamondTrap	&operator=(const DiamondTrap &);	// Copy-assignment operator
		void attack(std::string const &) const;	// Inherit from ScavTrap and FragTrap
		void whoAmI(void) const;	// Display names
	private:
		std::string	name;
};

#endif
