#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arrAddr, size_t arrLen, void f(T &))
{
	for (size_t i = 0; i < arrLen; ++i)
		f(arrAddr[i]);
}

template <typename T>
void	iter(const T *arrAddr, size_t arrLen, void f(const T &))
{
	for (size_t i = 0; i < arrLen; ++i)
		f(arrAddr[i]);
}

template <typename T>
void	f(T &a)
{
	++a;
}

template <typename T>
void	f(const T &a)
{
	std::cout << a << " in const version of 'f'" << std::endl;
}

void	g(std::string &s)
{
	s += ".txt";
}

template <size_t N, typename T>
std::ostream	&operator<<(std::ostream &os, const T (&arrAddr)[N])
{
	for (size_t i = 0; i < N; ++i)
		os << arrAddr[i] << ' ';
	os << std::endl;
	return (os);
}

#endif /* ITER_HPP */
