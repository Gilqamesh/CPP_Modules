#include <vector>
#include <iostream>

void	print(const std::vector<int> &v)
{
	std::cout << "Size of v: " << v.size() << ", Capacity of v: " << v.capacity() << std::endl;
}

int main()
{
	std::vector<int> v;
	print(v);
	for (int i = 0; i < 129; ++i)
	{
		v.push_back(i);
		print(v);
	}
}