#ifndef C_HPP
# define C_HPP

// ************************************************************************** //
//                                     C Class                                //
// ************************************************************************** //

# include "Base.hpp"

class C: public Base
{
	public:
		C();
		~C();
		C(const C &);
		C &operator=(const C &);
};

#endif /* C_HPP */
