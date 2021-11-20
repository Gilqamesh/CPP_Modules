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
		ClapTrap(std::string, int, int, int); // Constructor with 4 params
		virtual ~ClapTrap();	// Destructor
		ClapTrap(const ClapTrap &);	// Copy constructor
		ClapTrap &operator=(const ClapTrap &);	// Copy-assignment operator
		virtual void attack(std::string const &) const;	// Attacks some name
		void takeDamage(unsigned int);	// Takes damage
		void beRepaired(unsigned int);	// Gets repaired
	protected:
		std::string	name;
		int			attack_damage;
	private:
		int			hit_points;
		int			energy_points;
};

#endif /* CLAPTRAP_HPP */
