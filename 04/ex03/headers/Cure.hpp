#ifndef CURE_HPP
# define CURE_HPP

// ************************************************************************** //
//                                Cure Class                                  //
// ************************************************************************** //

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &);
		Cure &operator=(const Cure &);
		AMateria* clone(void) const;
		void use(ICharacter &);
};

#endif /* CURE_HPP */
