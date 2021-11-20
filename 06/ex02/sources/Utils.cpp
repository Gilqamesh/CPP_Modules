#include "Utils.hpp"
#include <random>
#include <iostream>
#include <new>
#include <typeinfo>

Base	*generate(void)
{
	Base	*res = nullptr;
	try
	{
		switch (getRand(0, 2))
		{
			case 0:
				res = new A;
				break ;
			case 1:
				res = new B;
				break ;
			case 2:
				res = new C;
				break ;
			default:
				break ;
		}
	}
	catch (std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
		res = nullptr;
	}
	return (res);
}

void	identify(Base *p)
{
	std::cout << "The real type of 'p' is: ";
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A *";
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B *";
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C *";
	else
		std::cout << "cout not be determined";
	std::cout << std::endl;
}

void	identify(Base &p)
{
	std::cout << "The real type of 'p' is: ";
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A *" << std::endl;
		return ;
	}
	catch (std::bad_cast &) { }
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B *" << std::endl;
		return ;
	}
	catch (std::bad_cast &) { }
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C *" << std::endl;
	}
	catch (std::bad_cast &)
	{
		std::cout << "could not be determined";
	}
}

int	getRand(int from, int to)
{
	static std::random_device									dev;
	static std::mt19937											rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type>	dist(from, to);
	return (dist(rng));
}
