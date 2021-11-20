#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = {1, -2, 3, 42, 0, 23, 32}; // -std=c++11
	int array[10];
	int j = 0;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++, j++)
		array[j] = *i;
	for (j -= 1; j >= 0; j--)
		std::cout << array[j] << ' ';
}