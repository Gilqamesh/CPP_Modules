#include "Fixed.hpp"
#include <iostream>

const int	Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp; // using the copy-assignment operator
}

Fixed &Fixed::operator=(const Fixed &fp)
{
	std::cout << "Copy-assignment operator called" << std::endl;
	if (this == &fp) // if self-assignment happens
		return (*this);
	fixed_number = fp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_number = raw;
}
