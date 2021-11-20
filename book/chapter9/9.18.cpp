#include <string>
#include <iostream>
#include <deque>

int main()
{
	std::deque<std::string> dq;
	std::string s;
	std::deque<std::string>::const_iterator dqi = dq.begin();
	while (std::cin >> s)
		dqi = dq.insert(dqi, s);
	while (dqi != dq.end())
	{
		std::cout << *dqi << std::endl;
		++dqi;
	}
}