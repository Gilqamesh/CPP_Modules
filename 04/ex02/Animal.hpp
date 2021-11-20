#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// ************************************************************************** //
//                               Animal Class                                 //
// ************************************************************************** //

# include <string>
# include "Brain.hpp"
# define DEFAULT_TYPE	"Unidentified"

class Animal
{
	public:
		Animal();	// Default constructor
		Animal(std::string);	// Constructor with 1 string arg
		virtual ~Animal();	// Destructor
		Animal(const Animal &);	// Copy constructor
		Animal &operator=(const Animal &);	// Copy-assignment operator
		// If the function is virtual, when we call it from the base class
		// through a reference or pointer, the decision as to which function to call
		// (the base or the overwritten versions in derived classes) are delayed
		// until run-time.
		virtual void makeSound(void) const;	// Makes some sound
		std::string getType(void) const;	// Returns 'type'
		virtual Brain	*getBrain(void) const = 0;	// Returns brain, be very careful with it!
	protected:
		std::string	type;
};

#endif /* ANIMAL_HPP */
