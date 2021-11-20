#include <list>
#include <vector>
#include <iostream>

int main()
{
	std::list<int> l = {1, 2, 3};
	std::vector<int> v = {4, 5, 6};
	std::vector<double> d1(l.begin(), l.end());
	std::vector<double> d2(v.begin(), v.end());
	for (auto e : d1)
		std::cout << e << ", ";
	std::cout << std::endl;
	for (auto e : d2)
		std::cout << e << ", ";
	std::cout << std::endl;
}