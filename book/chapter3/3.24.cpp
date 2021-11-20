#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int a;
	while (std::cin >> a)
		v.push_back(a);
	for (std::vector<int>::iterator i = v.begin(),
		j = v.end() - 1; i < j; i++, j--)
		std::cout << *i + *j << std::endl;
}