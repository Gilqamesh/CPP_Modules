#include "easyfind.hpp"
#include <vector>
#include <forward_list>
#include <iostream>
#include <array>
#include <deque>
#include <list>
#include <string>

int	main(void)
{
	// Flexible-size array. Supports fast random access.
	// Inserting or deleting elements other than at the back may be slow.
	std::vector<int> a;
	a.push_back(2);
	a.push_back(-2);
	a.push_back(30);
	a.push_back(12);
	a.push_back(-5);
	a.push_back(8);

	std::vector<int>::const_iterator res;
	if ((res = easyfind(a, -321)) != a.cend())
		std::cout << *res << std::endl;
	else
		std::cout << "Did not find needle in 'b'" << std::endl;
	if ((res = easyfind(a, -2)) != a.cend())
		std::cout << *res << std::endl;
	else
		std::cout << "Did not find needle in 'b'" << std::endl;

	// Fixed-size array. Supports fast random access.
	// Cannot add or remove elements.
	std::array<int, 10> b;
	b[0] = 2;
	b[1] = 3;
	b[2] = -2;
	b[3] = 5;

	std::array<int, 10>::const_iterator res2;
	if ((res2 = easyfind(b, 3)) != b.cend())
		std::cout << *res2 << std::endl;
	else
		std::cout << "Did not find needle in 'b'" << std::endl;

	// Singly linked list. Supports only sequential access in one direction.
	// Fast insert/delete at any point in the list.
	std::forward_list<int> c;
	c.push_front(2);
	c.push_front(-2);
	c.push_front(30);
	c.push_front(12);
	c.push_front(-5);
	c.push_front(8);

	std::forward_list<int>::const_iterator res3;
	if ((res3 = easyfind(c, 30)) != c.cend())
		std::cout << *res3 << std::endl;
	else
		std::cout << "Did not find needle in 'c'" << std::endl;

	// Double-ended queue. Supports fast random access.
	// Fast insert/delete at front or back.
	std::deque<int> d;
	d.push_back(2);
	d.push_back(-2);
	d.push_back(30);
	d.push_back(12);
	d.push_back(-5);
	d.push_back(8);

	std::deque<int>::const_iterator res4;
	if ((res4 = easyfind(d, 12)) != d.cend())
		std::cout << *res4 << std::endl;
	else
		std::cout << "Did not find needle in 'd'" << std::endl;

	// Doubly linked list. Supports only bidirectional sequential access.
	// Fast insert/delete at any point in the list.
	std::list<int> e;
	e.push_back(2);
	e.push_back(-2);
	e.push_back(30);
	e.push_back(12);
	e.push_back(-5);
	e.push_back(8);

	std::list<int>::const_iterator res5;
	if ((res5 = easyfind(e, 12)) != e.cend())
		std::cout << *res5 << std::endl;
	else
		std::cout << "Did not find needle in 'e'" << std::endl;

	// A specialized container, similar to vector, that contains characters.
	// Fast random access. Fast insert/delete at the back.
	std::string f = "hello world";

	std::string::const_iterator res6;
	if ((res6 = easyfind(f, 'h')) != f.cend())
		std::cout << *res6 << std::endl;
	else
		std::cout << "Did not find needle in 'f'" << std::endl;
}
