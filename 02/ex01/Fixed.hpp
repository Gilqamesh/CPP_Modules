#ifndef FIXED_HPP

// ************************************************************************** //
//                               Fixed Class                                  //
// ************************************************************************** //

# include <iostream>

class Fixed
{
	public:
		Fixed();								// Constructor
		Fixed(const int);						// Constructor, converts the int parameter to fixed point number
		Fixed(const float);						// Constructor, converts the float parameter to fixed point number
		~Fixed();								// Destructor
		Fixed(const Fixed &); 					// Copy constructor
		Fixed &operator=(const Fixed &);		// Copy-assignment operator
		int getRawBits(void) const;				// Returns the raw value of the binary point value
		void setRawBits(int const);				// sets the raw value of the binary point value
		float toFloat(void) const;				// Converts the fixed point value to float
		int toInt(void) const;					// Converts the fixed point value to int
	private:
		int					fixed_number;		// Fixed point value
		static const int	fractional_bits;	// Number of fractional bits in the number
};

std::ostream	&operator<<(std::ostream &, const Fixed &);

#endif /* FIXED_HPP */
