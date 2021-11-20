#ifndef A_HPP
# define A_HPP

// ************************************************************************** //
//                                     A Class                                //
// ************************************************************************** //

# include "Base.hpp"

class A: public Base
{
	public:
		A();
		~A();
		A(const A &);
		A &operator=(const A &);
};

#endif /* A_HPP */
