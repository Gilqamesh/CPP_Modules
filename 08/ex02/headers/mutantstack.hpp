#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// ************************************************************************** //
//                             MutantStack Class                              //
// ************************************************************************** //

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() { }
		~MutantStack() { }
		MutantStack(const MutantStack &a) { *this = a; }
		MutantStack &operator=(const MutantStack &a)
		{
			if (this == &a)
				return (*this);
			this->c = a.c;
			return (*this);
		}
		iterator begin(void)
		{
			return (this->c.begin());
		}
		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif /* MUTANTSTACK_HPP */
