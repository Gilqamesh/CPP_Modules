#include <forward_list>
#include <list>
#include <iostream>

int main()
{
	std::list<int> l{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::forward_list<int> fl{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::list<int>::iterator i = l.begin();
	while (i != l.end())
	{
		if (*i % 2)
		{
			l.insert(i, *i);
			++i;
		}
		else
			i = l.erase(i);
	}

	std::forward_list<int>::iterator prev = fl.before_begin();
	std::forward_list<int>::iterator cur = fl.begin();
	while (cur != fl.end())
	{
		if (*cur % 2)
		{
			fl.insert_after(prev, *cur);
			prev = cur;
			++cur;
		}
		else
			cur = fl.erase_after(prev);
	}

	for (std::list<int>::const_iterator i = l.cbegin(); i != l.cend();)
	{
		std::cout << *i;
		if (++i != l.cend())
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	for (std::forward_list<int>::const_iterator i = fl.cbegin(); i != fl.cend();)
	{
		std::cout << *i;
		if (++i != fl.cend())
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
}