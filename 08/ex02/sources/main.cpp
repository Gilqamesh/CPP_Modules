#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	{
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << std::endl;
	std::list<int> list;

	list.push_front(5);
	list.push_front(17);

	std::cout << list.front() << std::endl;

	list.pop_front();

	std::cout << list.size() << std::endl;

	list.push_front(3);
	list.push_front(5);
	list.push_front(737);
	//[...]
	list.push_front(0);

	std::list<int>::reverse_iterator it2 = list.rbegin();
	std::list<int>::reverse_iterator ite2 = list.rend();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return (0);
}
