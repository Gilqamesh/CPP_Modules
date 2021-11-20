#include <string>
#include <vector>
#include <iostream>

int main()
{
	const std::string ts = "hello world";
	std::vector<char> v(ts.cbegin(), ts.cend());
	std::string s(v.begin(), v.end());
	std::cout << s;
}