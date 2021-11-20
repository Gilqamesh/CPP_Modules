#include <iostream>
#include <vector>
#include <iterator>
#include <cassert>

int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	return (a * b);
}

// int divide(int a, int b)
// {
// 	#ifndef NDEBUG
// 	assert(b != 0);
// 	return (a / b);
// 	#else
// 	return (a);
// 	#endif
// }

int divide(int a, int b)
{
	try
	{
		if (b == 0)
			throw std::runtime_error("Cannot divide with 0\n");
		return (a / b);
	}
	catch (std::runtime_error err)
	{
		std::cout << err.what();
	}
	return (a);
}

int main()
{
	std::vector<int(*)(int, int)> operations;
	operations.push_back(add);
	operations.push_back(subtract);
	operations.push_back(multiply);
	operations.push_back(divide);
	std::cout << operations[0](2, 4) << std::endl;
	std::cout << operations[1](2, 4) << std::endl;
	std::cout << operations[2](2, 4) << std::endl;
	std::cout << operations[3](2, 0) << std::endl;
	std::cout << operations[3](5, 2) << std::endl;
}