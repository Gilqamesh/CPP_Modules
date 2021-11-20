#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();	// Default constructor
		FragTrap(std::string);	// Constructor with 1 string arg
		~FragTrap();	// Destructor
		FragTrap(const FragTrap &);	// Copy constructor
		FragTrap &operator=(const FragTrap &);	// Copy-assignment operator
		void highFivesGuys(void) const;	// Displays a positive high fives request on stdout
};

#endif
