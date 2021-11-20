#include <forward_list>
#include <iostream>

int main()
{
	std::forward_list<int> fl{1, 20, 32, -2, 33, 42, 0, 5, 3};
	std::forward_list<int>::iterator prev = fl.before_begin();
	std::forward_list<int>::iterator cur = fl.begin();
	while (cur != fl.end())
	{
		if (*cur % 2)
			cur = fl.erase_after(prev);
		else
		{
			prev = cur;
			++cur;
		}
	}
	for (std::forward_list<int>::const_iterator i = fl.begin(); i != fl.end(); ++i)
		std::cout << *i << ", ";
	std::cout << std::endl;
}