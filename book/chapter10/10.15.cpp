#include <iostream>

int main()
{
	int a = 5;
	auto l = [a](int b) -> int { return a + b; };
	std::cout << l(3) << std::endl;
}