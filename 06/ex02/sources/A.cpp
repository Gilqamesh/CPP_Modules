#include "A.hpp"

A::A() { }

A::~A() { }

A::A(const A &a)
{
	*this = a;
}

A	&A::operator=(const A &a)
{
	if (this == &a)
		return (*this);
	return (*this);
}
