#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int a;
	while (std::cin >> a)
		v.push_back(a);
	std::cin.clear();
	std::cout << "Value 5 appears " << count(v.begin(), v.end(), 5) << " times in v" << std::endl;
}