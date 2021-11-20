#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main()
{
	std::vector<int> v{2, -3, 4, 32, 81, -32, 0, 1, 42};
	std::cout << "Sum is: " << std::accumulate(v.cbegin(), v.cend(), 0) << std::endl;
}