#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Can't be instantiated
	// Animal	l;
	Animal	*animals[10];

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i)
	{
		animals[i] = i % 2
			// Why static_cast?
			// https://stackoverflow.com/questions/29842095/incompatible-operand-types-when-using-ternary-conditional-operator
			? static_cast<Animal *>(new Dog)
			: static_cast<Animal *>(new Cat);
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i)
		animals[i]->makeSound();


	Brain	*brain = animals[3]->getBrain();
	brain->addIdea("I am a dog.");
	brain->addIdea("Ball!");
	brain->addIdea("I think, therefore I am.");
	std::cout << "animals[3] ideas:\n" << *brain << std::endl;
	brain = animals[1]->getBrain();
	std::cout << "animals[1] ideas:\n" << *brain << std::endl;
	*static_cast<Dog *>(animals[1]) = *static_cast<Dog *>(animals[3]);
	std::cout << "Brain copied from [3] to [1]" << std::endl;
	brain = animals[3]->getBrain();
	brain->addIdea("Bones are my favorite");
	std::cout << "animals[3] ideas:\n" << *brain << std::endl;
	brain = animals[1]->getBrain();
	std::cout << "animals[1] ideas:\n" << *brain << std::endl;
	brain = animals[2]->getBrain();
	std::cout << "animals[2] ideas:\n" << *brain << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i)
		animals[i]->makeSound();

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i)
		delete animals[i];

	system("leaks a.out");
}
