#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " has been destructed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N]();

	for (int i = 0; i < N; ++i)
		zombies[i].set_name(name + "_" + std::to_string(i));
	return (zombies);
}

void	Zombie::set_name(std::string n)
{
	name = n;
}
