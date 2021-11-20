#ifndef CAT_HPP
# define CAT_HPP

// ************************************************************************** //
//                               Cat Class                                    //
// ************************************************************************** //

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();	// Default constructor
		~Cat();	// Destructor
		Cat(const Cat &);	// Copy constructor
		Cat &operator=(const Cat &);	// Copy-assignment operator
		void makeSound(void) const;	// Makes some sound
		Brain	*getBrain(void) const;	// Returns brain, be very careful with it!
	private:
		Brain	*brain;
};

#endif /* CAT_HPP */
