#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <cstdint>

struct Data
{
	void	*content;
};

uintptr_t	serialize(Data *);
Data		*deserialize(uintptr_t);

#endif /* DATA_HPP */
