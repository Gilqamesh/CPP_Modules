#include <iostream>
#include <vector>

int main()
{
	std::vector<int> clusters(11);
	unsigned int grade;
	const std::vector<int>::iterator beg = clusters.begin();
	while (std::cin >> grade)
		if (grade <= 100)
			*(beg + grade / 10) += 1;
	for (std::vector<int>::iterator i = clusters.begin(); i != clusters.end(); i++)
		std::cout << *i << ' ';
}