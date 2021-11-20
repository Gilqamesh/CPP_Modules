#ifndef FIXED_HPP

// ************************************************************************** //
//                               Fixed Class                                  //
// ************************************************************************** //

class Fixed
{
	public:
		Fixed();							// Constructor
		~Fixed();							// Destructor
		Fixed(const Fixed &); 				// Copy constructor
		Fixed &operator=(const Fixed &);	// Copy-assignment operator
		int getRawBits(void) const;			// Returns the raw value of the binary point value
		void setRawBits(int const);			// sets the raw value of the binary point value
	private:
		int					fixed_number;		// Fixed point value
		static const int	fractional_bits;	// Number of fractional bits in the numbern
};

#endif /* FIXED_HPP */
