#include <iostream>
#include <string>

int main(void)
{
	std::string str ("Hello");
	for (char c : str) // needs -std=c++11 flag
		std::cout << c;
}