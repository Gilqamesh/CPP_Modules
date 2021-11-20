#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		*i *= 2;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		std::cout << *i << std::endl;
}
