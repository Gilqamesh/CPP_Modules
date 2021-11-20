#ifndef BRAIN_HPP
# define BRAIN_HPP

// ************************************************************************** //
//                               Brain Class                                  //
// ************************************************************************** //

# include <string>
# include <iostream>
# define BRAIN_CAPACITY	100

class Brain
{
	friend std::ostream &operator<<(std::ostream &, const Brain &);
	public:
		Brain();	// Default constructor
		~Brain();	// Destructor
		Brain(const Brain &);	// Copy constructor
		Brain &operator=(const Brain &);	// Copy-assignment operator
		void addIdea(std::string);	// Adds an idea to the brain
	private:
		std::string	ideas[BRAIN_CAPACITY];
};

std::ostream &operator<<(std::ostream &, const Brain &);	// Prints ideas

#endif /* BRAIN_HPP */
