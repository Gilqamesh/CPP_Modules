#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

// ************************************************************************** //
//                                IMateriaSource Class                        //
// ************************************************************************** //

# include "AMateria.hpp"
# include <string>

class IMateriaSource
{
	public:
		IMateriaSource();
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &) = 0;
	private:
		IMateriaSource(const IMateriaSource &);
		IMateriaSource &operator=(const IMateriaSource &);
};

#endif /* IMATERIASOURCE_HPP */
