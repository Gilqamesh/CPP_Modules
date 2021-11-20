#ifndef ICE_HPP
# define ICE_HPP

// ************************************************************************** //
//                                Ice Class                                   //
// ************************************************************************** //

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &);
		Ice &operator=(const Ice &);
		AMateria* clone(void) const;
		void use(ICharacter &);
};

#endif /* ICE_HPP */
