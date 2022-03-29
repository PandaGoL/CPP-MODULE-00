#include "Brain.hpp"

int	Brain::nbRand = 0;

Brain::Brain( void )
{
	long ltime = time(NULL);
	int	initRand = ( unsigned int )ltime % 10;

	std::srand(initRand + nbRand);
	nbRand++;
	for (int i = 0; i < 100; i++)
		ideas[i] = createIdea();
	std::cout << "For <Brain>  constructor init ." << std::endl;
}

Brain::Brain( Brain const &other )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Copy <Brain> was created!" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "<Brain> distructot called ." << std::endl;
}

Brain const &Brain::operator=( Brain const &other )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

void		Brain::printIdeas( void )
{
	for (int i = 0; i < 100; i++)
		std::cout << "idea[" << i << "]: " << this->ideas[i] << std::endl;
}

std::string		Brain::createIdea( void )
{
	std::string		arr_Ideas[5] = {"eat", "drink", "sleep", "play", "walk"};

	return (arr_Ideas[rand() % 5]);
}