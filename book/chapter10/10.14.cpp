#include <iostream>

int main()
{
	auto sum = [](int a, int b) -> int { return a + b; };
	std::cout << sum(4, 5) << std::endl;
}