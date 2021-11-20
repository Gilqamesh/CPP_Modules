#include "AMateria.hpp"
#include <iostream>
#include "debug.hpp"

AMateria::AMateria(): type(DEFAULT_TYPE)
{
	#ifndef NDEBUG
	std::cout << "AMateria default constructor" << std::endl;
	#endif
}

AMateria::AMateria(std::string const &s): type(s)
{
	#ifndef NDEBUG
	std::cout << "AMateria string constructor" << std::endl;
	#endif
}

AMateria::~AMateria()
{
	#ifndef NDEBUG
	std::cout << "AMateria destructor" << std::endl;
	#endif
}

const std::string	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Nothing was used on " << target.getName() << std::endl;
}
