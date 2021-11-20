#include <iostream>
#include <vector>
#include <list>
#include <string>

int main()
{
	std::list<const char *> l{"Hello", "world", "from", "the", "list"};
	std::vector<std::string> v;
	v.assign(l.begin(), l.end());
	for (std::vector<std::string>::iterator i = v.begin(); i != v.end(); ++i)
		std::cout << *i << ", ";
	std::cout << std::endl;
}