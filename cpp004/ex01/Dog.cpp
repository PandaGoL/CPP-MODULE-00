#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_brain = new Brain();
	this->_type = "Dog";
    std::cout << "<" << _type << "> Default constructor init ." << std::endl;
}

Dog::Dog (Dog const &other)
{
    if (other._brain)
		_brain = new Brain(*other._brain);
	this->_type = other.getType();
    std::cout << "For <" << _type << ">  copy constructor init ." << std::endl;
}

Dog::~Dog()
{
    delete _brain;
   std::cout << "<" << _type << "> Detructor init ." << std::endl; 
}

Dog const &Dog::operator = (Dog const &other)
{
    if (other._brain)
		_brain = new Brain(*other._brain);
	_type = other.getType();
	return (*this);
}

void Dog::makeSound() const{
    std::cout << "Wof-woof blyac!" << std::endl;
}

Brain		*Dog::getBrain( void ) const
{
	return (_brain);
}