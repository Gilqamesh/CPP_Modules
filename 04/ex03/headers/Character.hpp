#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// ************************************************************************** //
//                                Character Class                             //
// ************************************************************************** //

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string);
		~Character();
		Character(const Character &);
		Character &operator=(const Character &);
		std::string const &getName(void) const;
		void equip(AMateria *);
		void unequip(int);
		void use(int, ICharacter &);
	private:
		static const int	inventory_size = 4;
		AMateria			*inventory[Character::inventory_size];
		int					number_equipped;
};

#endif /* CHARACTER_HPP */
