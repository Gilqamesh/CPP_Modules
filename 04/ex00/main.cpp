#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	k->makeSound(); // will output the wrong cat sound
	l->makeSound();

	delete i;
	delete j;
	delete meta;
	delete k;
	delete l;
}