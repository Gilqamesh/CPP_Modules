#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// ************************************************************************** //
//                               ScavTrap Class                               //
// ************************************************************************** //

# include "ClapTrap.hpp"
# define SCAV_HP	100
# define SCAV_EP	50
# define SCAV_AD	20

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();	// Default constructor
		ScavTrap(std::string);	// Constructor with 1 string param
		~ScavTrap();	// Destructor
		ScavTrap(const ScavTrap &);	// Copy constructor
		ScavTrap	&operator=(const ScavTrap &);	// Copy-assignment operator
		void attack(std::string const &target) const;	// Inherited from ClapTrap
		void guardGate(void);	// Display gate keeper mode
};

#endif
