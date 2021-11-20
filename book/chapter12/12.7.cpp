#include <iostream>
#include <vector>

std::shared_ptr<std::vector<int> >	get(void)
{
	return (std::make_shared<std::vector<int> >());
}

void	read(std::istream &is, std::shared_ptr<std::vector<int> > &p)
{
	for (int i; is >> i; p->push_back(i))
		;
}

void	print(const std::shared_ptr<std::vector<int> > &p)
{
	for (std::vector<int>::const_iterator i = p->cbegin(); i != p->cend(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

int main()
{
	std::shared_ptr<std::vector<int> > p = get();
	read(std::cin, p);
	print(p);
}