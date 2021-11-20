#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

# include "ClapTrap.hpp"
# define FRAG_HP	100
# define FRAG_EP	100
# define FRAG_AD	30

class FragTrap: virtual public ClapTrap
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
