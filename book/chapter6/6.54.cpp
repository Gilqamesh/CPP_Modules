#include <iostream>
#include <vector>
#include <iterator>

int	f(int a, int b)
{
	std::cout << "Call from: " << __func__ << std::endl;
	return (0);
}

int main()
{
	std::vector<int(*)(int, int)> fns;
	fns.push_back(f);
	fns[0](2, 3);
}