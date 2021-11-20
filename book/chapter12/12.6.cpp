#include <iostream>
#include <vector>
#include <new>

std::vector<int>	*getVector(void)
{
	std::vector<int> *p;
	try
	{
		p = new std::vector<int>;
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
	}
	return (p);
}

void	read(std::istream &is, std::vector<int> *v)
{
	int i;

	while (is >> i)
		v->push_back(i);
}

void	print(const std::vector<int> *v)
{
	for (std::vector<int>::const_iterator i = v->cbegin(); i != v->cend(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

void	destroy(std::vector<int> *v)
{
	delete v;
}

int main()
{
	std::vector<int> *v = getVector();
	read(std::cin, v);
	print(v);
	destroy(v);
}