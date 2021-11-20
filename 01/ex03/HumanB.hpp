#ifndef HUMANB_HPP

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB(const std::string &human_name): weapon(nullptr), name(human_name) { }
		void	attack(void) const;
		void	setWeapon(Weapon &w);
	private:
		Weapon		*weapon;
		std::string	name;
};

#endif /* HUMANB_HPP */