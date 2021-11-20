#ifndef FIXED_HPP

// ************************************************************************** //
//                               Fixed Class                                  //
// ************************************************************************** //

# include <iostream>

class Fixed
{
	public:
		Fixed();	// Default constructor
		Fixed(const int);	// Constructor, converts the int parameter to fixed point number
		Fixed(const float);	// Constructor, converts the float parameter to fixed point number
		~Fixed();	// Destructor
		Fixed(const Fixed &);	// Copy constructor
		Fixed &operator=(const Fixed &);	// Copy-assignment operator
		int getRawBits(void) const;	// Returns the raw value of the binary point value
		void setRawBits(int const);	// sets the raw value of the binary point value
		float toFloat(void) const;	// Converts the fixed point value to float
		int toInt(void) const;	// Converts the fixed point value to int
		Fixed &operator++(void);	// Prefix increment operator
		Fixed &operator--(void);	// Prefix decrement operator
		Fixed operator++(int);	// Postfix increment operator
		Fixed operator--(int);	// Postfix decrement operator
		static Fixed &min(Fixed &, Fixed &);	// Returns the smaller out of the two fixed numbers
		static const Fixed &min(const Fixed &, const Fixed &);	// Const version
		static Fixed &max(Fixed &, Fixed &);	// Returns the bigger out of the two fixed numbers
		static const Fixed &max(const Fixed &, const Fixed &);	// Const version
		
	private:
		int					fixed_number;		// Fixed point value
		static const int	fractional_bits;	// Number of fractional bits in the number
};

std::ostream	&operator<<(std::ostream &, const Fixed &);
bool	operator>(const Fixed &, const Fixed &);
bool	operator<(const Fixed &, const Fixed &);
bool	operator>=(const Fixed &, const Fixed &);
bool	operator<=(const Fixed &, const Fixed &);
bool	operator==(const Fixed &, const Fixed &);
bool	operator!=(const Fixed &, const Fixed &);
Fixed	operator+(const Fixed &, const Fixed &);
Fixed	operator-(const Fixed &, const Fixed &);
Fixed	operator*(const Fixed &, const Fixed &);
Fixed	operator/(const Fixed &, const Fixed &);

#endif /* FIXED_HPP */
