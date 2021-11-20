#include <iostream>
#include <string>

int main()
{
	// Pointer = new type;
	// Pointer = new type [number of elements];
	std::string *word = new std::string;
	int	*numbers = new int [4]; // if allocation fails, an exception is thrown
	// The other method is nothrow, in which cause the return value is nullptr
	// we need header <new> for that and using a special object:
	// int *numbers = new (nothrow) int [4];
	// nothrow method is less efficient since we have to check the return value
	// but its also simpler.

	// delete pointer;
	// delete[] pointer;
	// delete nullptr has no effect
	delete word;
	delete[] numbers;
	char *p = nullptr;
	delete p;
}
