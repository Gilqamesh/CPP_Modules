#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template <typename T>
typename T::const_iterator	easyfind(const T &intContainer, int needle)
{
	return (std::find(intContainer.cbegin(), intContainer.cend(), needle));
}

#endif /* EASYFIND_HPP */
