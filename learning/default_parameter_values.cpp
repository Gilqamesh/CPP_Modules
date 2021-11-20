#include <iostream>

int print_divide(int a, int b = 2)
{
	return (a / b);
}

int main()
{
	std::cout << print_divide(12) << '\n';
	std::cout << print_divide(12, 3) << '\n';
}
