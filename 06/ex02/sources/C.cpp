#include "C.hpp"

C::C() { }

C::~C() { }

C::C(const C &a)
{
	*this = a;
}

C	&C::operator=(const C &a)
{
	if (this == &a)
		return (*this);
	return (*this);
}
