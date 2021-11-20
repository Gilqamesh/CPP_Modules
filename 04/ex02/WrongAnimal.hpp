#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

// ************************************************************************** //
//                               WrongAnimal Class                            //
// ************************************************************************** //

# include <string>
# define DEFAULT_NAME	"Unidentified"

class WrongAnimal
{
	public:
		WrongAnimal();	// Default constructor
		WrongAnimal(std::string);	// Constructor with 1 string arg
		virtual ~WrongAnimal();	// Destructor
		WrongAnimal(const WrongAnimal &); // Copy constructor
		WrongAnimal &operator=(const WrongAnimal &);	// Copy-assignment operator
		virtual void makeSound(void) const;	// Makes some sound
		std::string getType(void) const;	// Returns 'type'
	protected:
		std::string	type;
};

#endif /* WRONGANIMAL_HPP */
