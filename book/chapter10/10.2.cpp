#include <algorithm>
#include <iostream>
#include <list>

int main()
{
	std::list<std::string> v;
	std::string a;
	while (std::cin >> a)
		v.push_back(a);
	std::cin.clear();
	std::cout << "Value asd appears " << count(v.begin(), v.end(), "asd") << " times in v" << std::endl;
}