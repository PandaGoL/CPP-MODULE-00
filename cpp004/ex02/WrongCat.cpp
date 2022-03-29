#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other )
{
	this->_type = other.getType();
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat was deleted" << std::endl;
}

WrongCat const	&WrongCat::operator=( WrongCat const &other )
{
	_type = other.getType();
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meow-meow" << std::endl;
}