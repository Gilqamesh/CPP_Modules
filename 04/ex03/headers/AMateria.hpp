#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// ************************************************************************** //
//                                AMateria Class                              //
// ************************************************************************** //

# include <string>
# define DEFAULT_TYPE	"Default type"

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();	// Default constructor
		virtual ~AMateria();	// Destructor
		AMateria(std::string const &);	// Constructor with 1 string arg
		std::string const &getType(void) const;	// Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter &);
	protected:
		std::string	type;
	private:
		AMateria(const AMateria &);	// Copy constructor
		AMateria &operator=(const AMateria &);	// Copy-assignment operator
};

#endif /* AMATERIA_HPP */
