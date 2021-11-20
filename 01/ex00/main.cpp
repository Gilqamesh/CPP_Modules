#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Abel");
	randomChump("Bob");
	for (int i = 0; i < 5; ++i)
	{
		Zombie z("Adam");
		std::string s = "Zombie_";
		s += std::to_string(i);
		randomChump(s);
	}
	randomChump("Bob_2");
}
