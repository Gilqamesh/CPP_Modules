#ifndef B_HPP
# define B_HPP

// ************************************************************************** //
//                                     B Class                                //
// ************************************************************************** //

# include "Base.hpp"

class B: public Base
{
	public:
		B();
		~B();
		B(const B &);
		B &operator=(const B &);
};

#endif /* B_HPP */
