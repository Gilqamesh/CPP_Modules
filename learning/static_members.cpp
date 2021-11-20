#include <iostream>

class Dummy
{
	public:
		static int n;
		Dummy () { n++; }
};

// non-member so it cannot have access to the function's non-static members
// of the class, but it is being accessed like a member of the class.
int Dummy::n = 0;

int main()
{
	std::cout << Dummy::n << '\n';
	Dummy a;
	Dummy b[5];
	std::cout << a.n << '\n';
	Dummy *d = new Dummy;
	std::cout << b[2].n << '\n';
	std::cout << Dummy::n << '\n';
}
