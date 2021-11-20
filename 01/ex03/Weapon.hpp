#pragma once
#ifndef WEAPON_HPP

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

# include <string>

class Weapon
{
	public:
		Weapon() { }
		Weapon(const std::string &s): type(s) { }
		const std::string	&getType(void) const;
		void				setType(const std::string &newType);
	private:
		std::string	type;
};

#endif /* WEAPON_HPP */
