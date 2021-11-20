#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// ************************************************************************** //
//                               ClapTrap Class                               //
// ************************************************************************** //

# include <string>

class ClapTrap
{
	public:
		ClapTrap();	// Default constructor
		ClapTrap(std::string);	// Constructor with 1 string param
		~ClapTrap();	// Destructor
		ClapTrap(const ClapTrap &);	// Copy constructor
		ClapTrap &operator=(const ClapTrap &);	// Copy-assignment operator
		void attack(std::string const &) const;	// Attacks some name
		void takeDamage(unsigned int);	// Takes damage
		void beRepaired(unsigned int);	// Gets repaired
	private:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
};

#endif /* CLAPTRAP_HPP */
