#include <iostream>

// Aliasing
// C
// typedef char C;
// typedef char field [50];
// typedef char *pChar;
// typedef unsigned int WORD;
//
// C++
using C = char;
using field = char [50];
using pChar = char *;
using WORD = unsigned int;

namespace foo
{
	int value() { return 5; }
}

namespace bar
{
	const double pi = 3.1416;
	double value() { return 2 * pi; }
}

// Namespace declarations can be split, even across source files.
namespace foo
{
	int	b;
}

// Namespace aliasing
namespace new_name = foo;
// Within the namespace the variables can be accessed normally, but if accessed
// outside of the namespace, they have to be properly qualified with the scope
// operator ::
int main()
{
	std::cout << foo::value() << '\n';
	std::cout << bar::value() << '\n';
	std::cout << bar::pi << '\n';
	for (int i = 0; i < 1; i++)
	{
		// The 'using' keyword introduces a name into the current declarative
		// region (such as block)
		using foo::value;
		std::cout << value() << '\n';
	}
	for (int i = 0; i < 1; i++)
	{
		using namespace bar;
		std::cout << pi << '\n' << value() << '\n';
	}
}
