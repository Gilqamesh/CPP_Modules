#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_number(0) { }

Fixed::Fixed(const int i)
{
	fixed_number = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
	fixed_number = ((int)f << fractional_bits) + roundf((f - (int)f) * 256);
}

Fixed::~Fixed() { }

Fixed::Fixed(const Fixed &fp)
{
	*this = fp; // using the copy-assignment operator
}

Fixed &Fixed::operator=(const Fixed &fp)
{
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
	return (fixed_number / 256.0f);
}

int	Fixed::toInt(void) const
{
	return (fixed_number < 0 ? (fixed_number + 0xff) >> 8 : fixed_number >> 8);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fp)
{
	os << fp.toFloat();
	return (os);
}

bool	operator>(const Fixed &fp1, const Fixed &fp2)
{
	return (fp1.getRawBits() > fp2.getRawBits());
}

bool	operator<(const Fixed &fp1, const Fixed &fp2)
{
	return (!operator>(fp1, fp2));
}

bool	operator>=(const Fixed &fp1, const Fixed &fp2)
{
	return (operator>(fp1, fp2) || operator==(fp1, fp2));
}

bool	operator<=(const Fixed &fp1, const Fixed &fp2)
{
	return (operator<(fp1, fp2) || operator==(fp1, fp2));
}

bool	operator==(const Fixed &fp1, const Fixed &fp2)
{
	return (fp1.getRawBits() == fp2.getRawBits());
}

bool	operator!=(const Fixed &fp1, const Fixed &fp2)
{
	return (!operator==(fp1, fp2));
}

Fixed	operator+(const Fixed &fp1, const Fixed &fp2)
{
	Fixed	sum;
	sum.setRawBits(fp1.getRawBits() + fp2.getRawBits());
	return (sum);
}

Fixed	operator-(const Fixed &fp1, const Fixed &fp2)
{
	Fixed	diff;
	diff.setRawBits(fp1.getRawBits() - fp2.getRawBits());
	return (diff);
}

Fixed	operator*(const Fixed &fp1, const Fixed &fp2)
{
	Fixed	product;
	product.setRawBits(fp1.getRawBits() * fp2.getRawBits() >> 8);
	return (product);
}

Fixed	operator/(const Fixed &fp1, const Fixed &fp2)
{
	if (fp2.getRawBits() == 0)
	{
		std::cout << "Can't divide with 0" << std::endl;
		exit(EXIT_FAILURE);
	}
	Fixed	ret(fp1.toFloat() / fp2.toFloat());
	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	++fixed_number;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--fixed_number;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret = *this;
	++*this;
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret = *this;
	--*this;
	return (ret);
}

Fixed	&Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

const Fixed	&Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

Fixed	&Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}

const Fixed	&Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}
