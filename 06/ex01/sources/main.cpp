#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data	kek;

	std::cout << &kek << std::endl;
	uintptr_t	uiptr = serialize(&kek);
	std::cout << uiptr << std::endl;
	Data	*ptr = deserialize(uiptr);
	std::cout << ptr << std::endl;
}
