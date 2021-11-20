#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

// ************************************************************************** //
//                               WrongCat Class                               //
// ************************************************************************** //

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();	// Default constructor
		~WrongCat();	// Destructor
		WrongCat(const WrongCat &);	// Copy constructor
		WrongCat &operator=(const WrongCat &);	// Copy-assignment operator
		void makeSound(void) const;	// Makes some sound
};

#endif /* WRONGCAT_HPP */
