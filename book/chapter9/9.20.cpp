#include <iostream>
#include <list>
#include <deque>

void	print(const std::deque<int> &d)
{
	for (std::deque<int>::const_iterator i = d.begin(); i != d.end(); ++i)
		std::cout << *i << ", ";
}

int main()
{
	std::list<int> l{1, 3, 2, 9, -20, 32, 149, 23};
	std::deque<int> d1;
	std::deque<int> d2;
	for (std::list<int>::const_iterator i = l.begin(); i != l.end(); ++i)
	{
		if (*i % 2 == 0)
			d1.push_back(*i);
		else
			d2.push_back(*i);
	}
	print(d1);
	std::cout << std::endl;
	print(d2);
	std::cout << std::endl;
}