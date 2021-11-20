#include <iostream>

void	print(int = 2, int = 1, char = 'c');

void	print(int a, int b, char c)
{
	std::cout << a << b << c << std::endl;
}

int get_num(int a = 5)
{
	return (a);
}

int a = 4;

void	sum(int c = a, int b = get_num())
{
	std::cout << c << b << std::endl;
}

void f(int a)
{
	std::cout << "call from f(int a)\n";
}

void f(short a)
{
	std::cout << "call from f(short a)\n";
}

int main()
{
	print(2);
	sum();
	f('a');
	f(static_cast<short>('a'));
}