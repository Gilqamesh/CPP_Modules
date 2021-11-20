#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *zp = newZombie(name);
	zp->announce();
	delete zp;
}
