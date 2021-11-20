#ifndef ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string s): name(s) { }
		~Zombie();
		void announce(void) const;
	private:
		std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
