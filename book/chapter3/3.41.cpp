#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	int array[] = {1, 3, -2, 49, 23, -1, 0, 2};
	std::vector<int> v(std::begin(array), std::end(array));
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		std::cout << *i << ' ';
}