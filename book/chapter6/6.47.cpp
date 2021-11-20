#include <iostream>
#include <cassert>
#include <vector>

void	print(const std::vector<int> &v, const std::vector<int>::iterator i)
{
	#ifndef NDEBUG
	std::cout << "In function: " << __func__ << ", Size of vector: " << v.size() << std::endl;
	#endif
	if (i == v.end())
		return ;
	std::cout << *i << ' ';
	print(v, i + 1);
}

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	assert(2 < 0);
	print(v, v.begin());
}