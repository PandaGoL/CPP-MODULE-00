#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "<" << _type << "> Default constructor init ." << std::endl;
}

Dog::Dog (Dog const &other)
{
    this->_type = other.getType();
     std::cout << "For <" << _type << ">  copy constructor init ." << std::endl;
}

Dog::~Dog()
{
   std::cout << "<" << _type << "> Detructor init ." << std::endl; 
}

Dog const &Dog::operator = (Dog const &other)
{
    _type = other.getType();
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Wof-woof blyac!" << std::endl;
}