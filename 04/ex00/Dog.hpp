#ifndef DOG_HPP
# define DOG_HPP

// ************************************************************************** //
//                               Dog Class                                    //
// ************************************************************************** //

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();	// Default constructor
		~Dog();	// Destructor
		Dog(const Dog &);	// Copy constructor
		Dog &operator=(const Dog &);	// Copy-assignment operator
		void makeSound(void) const;	// Makes some sound
};

#endif /* DOG_HPP */
