#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::setw(20) << "5.02 * 3: " << Fixed( 5.02f ) * Fixed(3) << std::endl;
	std::cout << std::setw(20) << "6.02f / 3: " << Fixed( 6.02f ) / Fixed(3) << std::endl;
	std::cout << std::setw(20) << "a: " << a << std::endl;
	std::cout << std::setw(20) << "++a: " << ++a << std::endl;
	std::cout << std::setw(20) << "a: " << a << std::endl;
	std::cout << std::setw(20) << "a++: " << a++ << std::endl;
	std::cout << std::setw(20) << "a: " << a << std::endl;

	std::cout << std::setw(20) << "b: " << b << std::endl;

	std::cout << std::setw(20) << "max(a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << std::setw(20) << "min(a, b): " << Fixed::min( a, b ) << std::endl;

	std::cout << std::setw(20) << "a < b: " << (a < b ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "a > b: " << (a > b ? "true" : "false") << std::endl;

	Fixed		c(a);
	Fixed		d = b;
	std::cout << std::setw(20) << "c = " << c << std::endl;
	std::cout << std::setw(20) << "d = " << d << std::endl;
	d = c;
	std::cout << std::setw(20) << "d = " << d << std::endl;

	std::cout << std::setw(20) << "d == c: " << (d == c ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "d >= c: " << (d >= c ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "d <= c: " << (d <= c ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "d >= b: " << (d >= b ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "b >= d: " << (b >= d ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "d <= b: " << (d <= b ? "true" : "false") << std::endl;
	std::cout << std::setw(20) << "b + d: " << b + d << std::endl;
	std::cout << std::setw(20) << "b - d: " << b - d << std::endl;
	std::cout << std::setw(20) << "d - b: " << d - b << std::endl;
	std::cout << std::setw(20) << "Fixed(-1): " << Fixed(-1) << std::endl;
	std::cout << std::setw(20) << "Fixed(-10.0937875): " << Fixed(-10.0937875f) << std::endl;
	std::cout << std::setw(20) << "-20 / 5.2: " << Fixed(-20) / Fixed(5.2f) << std::endl;
	std::cout << std::setw(20) << "-20 / -5.2: " << Fixed(-20) / Fixed(-5.2f) << std::endl;
	std::cout << std::setw(20) << "20 / -5.2: " << Fixed(20) / Fixed(-5.2f) << std::endl;
	std::cout << std::setw(20) << "20 / 5.2: " << Fixed(20) / Fixed(5.2f) << std::endl;
	std::cout << std::setw(20) << "-20 * 5.2: " << Fixed(-20) * Fixed(5.2f) << std::endl;
	std::cout << std::setw(20) << "-20 * -5.2: " << Fixed(-20) * Fixed(-5.2f) << std::endl;
	std::cout << std::setw(20) << "20 * -5.2: " << Fixed(20) * Fixed(-5.2f) << std::endl;
	std::cout << std::setw(20) << "20 * 5.2: " << Fixed(20) * Fixed(5.2f) << std::endl;
	std::cout << std::setw(20) << "0 * 20: " << Fixed(0) * Fixed(20) << std::endl;
	std::cout << std::setw(20) << "0 * 0: " << Fixed(0) * Fixed(0) << std::endl;

	return (0);
}
