#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " has been destructed." << std::endl;
}

// Allocates and returns an instance of a Zombie
Zombie* newZombie(std::string name)
{
	Zombie *z;
	try
	{
		z = new Zombie(name);
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
		exit(EXIT_FAILURE);
	}
	return (z);
}

void Zombie::announce(void) const
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
