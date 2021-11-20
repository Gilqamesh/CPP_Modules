#include <iostream>

void f(void)
{
	std::cout << "From void function\n";
}

void f(int a)
{
	std::cout << "From f(int a)\n";
}

void f(int a, int b)
{
	std::cout << "From f(int a, int b)\n";
}

void f(double a, double b = 3.2)
{
	std::cout << "From f(double a, double b = 3.2)\n";
}

int main()
{
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}