#include "Utils.hpp"
#include <iostream>

int	main(void)
{
	Base	*r1 = generate();
	Base	*r2 = generate();
	Base	*r3 = generate();
	Base	*r4 = generate();
	Base	*r5 = generate();

	identify(r1);
	identify(r2);
	identify(r3);
	identify(r4);
	identify(r5);

	std::cout << std::endl;
	identify(*r1);
	identify(*r2);
	identify(*r3);
	identify(*r4);
	identify(*r5);
}
