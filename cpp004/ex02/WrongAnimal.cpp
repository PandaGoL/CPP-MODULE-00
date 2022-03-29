#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("Nonetype")
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other ): _type(other.getType())
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal was deleted" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=( WrongAnimal const &other )
{
	_type = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string		WrongAnimal::getType( void ) const
{
	return (this->_type);
}