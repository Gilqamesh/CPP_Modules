#include "B.hpp"

B::B() { }

B::~B() { }

B::B(const B &a)
{
	*this = a;
}

B	&B::operator=(const B &a)
{
	if (this == &a)
		return (*this);
	return (*this);
}
