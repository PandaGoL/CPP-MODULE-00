#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define COUNT 10

int main( void )
{
	Dog			ght;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Animal* ght1 = new Dog(ght);
	delete ght1;
	std::cout << "========== Deep copy ===========" << std::endl;
	ght.getBrain()->printIdeas();
	std::cout << "=====================" << std::endl;


	Animal *staya[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		if (i % 2)
		{
			staya[i] = new Cat();
			staya[i]->makeSound();
		}
		else
		{
			staya[i] = new Dog();
			staya[i]->makeSound();
		}
	}
	std::cout << "=====================" << std::endl;
	dynamic_cast<Cat *>(staya[1])->getBrain()->printIdeas();
	std::cout << "=====================" << std::endl;
	dynamic_cast<Cat *>(staya[3])->getBrain()->printIdeas();
	std::cout << "=====================" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete staya[i];
	return (0);
}