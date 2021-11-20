#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);

	Character paul(*static_cast<Character *>(me));

	std::cout << std::endl << "Copy constructed 'paul' from 'me'" << std::endl;
	paul.use(0, *bob);
	paul.use(1, *bob);
	tmp = src->createMateria("fireball");
	paul.equip(tmp);
	paul.use(1, *bob);

	std::cout << std::endl << "Copy-assignment operator on 'bob' from 'paul'" << std::endl;
	*bob = *static_cast<Character *>(me);
	bob->use(0, paul);
	bob->use(1, paul);

	std::cout << std::endl;
	Ice				ice;
	Ice				ice2(ice);

	std::cout << ice.getType() << " and " << ice2.getType() << std::endl;

	delete bob;
	delete me;
	delete src;

	system("leaks a.out");

	return (0);
}
