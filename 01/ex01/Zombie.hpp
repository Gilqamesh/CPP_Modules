#ifndef ZOMBIE_HPP

# include <string>
# include <iostream>

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie
{
	public:
		Zombie() { }
		Zombie(std::string s): name(s) { }
		~Zombie();
		void announce(void) const;
		void set_name(std::string n);
	private:
		std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP */
