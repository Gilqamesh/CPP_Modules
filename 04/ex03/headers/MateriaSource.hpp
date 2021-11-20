#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

// ************************************************************************** //
//                                MateriaSource Class                        //
// ************************************************************************** //

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &);
	private:
		static const int	materia_size = 4;
		AMateria			*materia_inventory[MateriaSource::materia_size];
		int					number_learned;
};

#endif /* MATERIASOURCE_HPP */
