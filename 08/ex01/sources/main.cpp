#include "span.hpp"
#include <iostream>
#include <exception>
#include <vector>
#include <random>
#include <deque>

int	getRand(int from, int to)
{
	static std::random_device									dev;
	static std::mt19937											rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type>	dist(from, to);
	return (dist(rng));
}

int main()
{
	Span sp = Span(20006);
	std::vector<int> v;
	for (int i = 0; i < 20000; ++i)
		v.push_back(getRand(0, 100000));

	try
	{
		sp.addNumber(v.cbegin(), v.cend());
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span b(30);
	std::deque<int> l;
	for (int i = 0; i < 20; ++i)
		l.push_back(getRand(50, 400));
	try
	{
		b.addNumber(l.cbegin(), l.cend());
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sp << std::endl;
	std::cout << b << std::endl;
}