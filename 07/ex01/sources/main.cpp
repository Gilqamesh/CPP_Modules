#include "iter.hpp"
#include <iostream>
#include "Data.hpp"

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	std::cout << arr << std::endl;
	iter(arr, sizeof(arr) / sizeof(arr[0]), f);
	std::cout << arr << std::endl;

	double arr2[] = {2.3, -2.4, 0, 23};
	std::cout << arr2 << std::endl;
	iter(arr2, sizeof(arr2) / sizeof(arr2[0]), f);
	std::cout << arr2 << std::endl;

	Data	a;
	a.add("yo");
	a.add("hi");
	a.add("sup");
	std::cout << a << std::endl;
	iter(a.getSet(), a.getSize(), g);
	std::cout << a << std::endl;

	iter(static_cast<const std::string *>(a.getSet()), a.getSize(), f);
	std::cout << a << std::endl;

	const float arr3[] = { 2.3f, -2.2f, 0.0f, 36.4f};
	std::cout << arr3 << std::endl;
	iter(arr3, sizeof(arr3) / sizeof(arr3[0]), f);
	std::cout << arr3 << std::endl;
}
