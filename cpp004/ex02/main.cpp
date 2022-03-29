#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "j has the type " << j->getType() << " " << std::endl;
	std::cout << "i has the type " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *k = new WrongCat();

	k->makeSound();

	delete k;
	delete i;
	delete j;
	delete meta;
	return (0);
}