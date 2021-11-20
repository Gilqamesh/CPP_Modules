#include "Data.hpp"

Data::Data(): curSize(0) { }

Data::~Data() { }

Data::Data(const Data &a)
{
	*this = a;
}

Data	&Data::operator=(const Data &a)
{
	if (this == &a)
		return (*this);
	curSize = a.getSize();
	return (*this);
}

void	Data::add(const std::string &s)
{
	if (curSize == setSize)
		return ;
	set[curSize++] = s;
}

size_t	Data::getSize(void) const
{
	return (curSize);
}

std::string	*Data::getSet(void)
{
	return (set);
}

std::ostream	&operator<<(std::ostream &os, const Data &a)
{
	for (size_t i = 0; i < a.getSize(); ++i)
		os << (const_cast<Data &>(a)).getSet()[i] << ' ';
	os << std::endl;
	return (os);
}
