#ifndef HUMANA_HPP

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:
		HumanA(const std::string &human_name, Weapon &w)
			: weapon(w), name(human_name) { }
		void	attack(void) const;
	private:
		Weapon		&weapon;
		std::string	name;
};

#endif /* HUMANA_HPP */