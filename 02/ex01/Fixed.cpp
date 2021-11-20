#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_number = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_number = ((int)f << fractional_bits) + roundf((f - (int)f) * 256);
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
	return (fixed_number);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((char)fixed_number ? (char)fixed_number / 256.0f + toInt() : toInt());
}

int	Fixed::toInt(void) const
{
	return (fixed_number >> 8);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fp)
{
	os << fp.toFloat();
	return (os);
}
