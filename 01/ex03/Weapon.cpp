#include "Weapon.hpp"

const std::string	&Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(const std::string &newType)
{
	type = newType;
}
