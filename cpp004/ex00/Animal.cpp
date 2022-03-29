#include "Animal.hpp"

Animal::Animal() : _type("Anymal")
{
    std::cout << "<" << _type << "> Default constructor init ." << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "For <" << _type << ">  constructor init ." << std::endl;
}

Animal::Animal(const Animal & animal)
{
    *this = animal;
    std::cout << "For <" << _type << ">  copy constructor init ." << std::endl;
}

Animal::~Animal()
{
     std::cout << "<" << _type << "> Default detructor init ." << std::endl;
}

Animal &Animal::operator = (const Animal & animal)
{
    if (this != &animal)
    {
        _type = animal._type;
    }
    return (*this);
}

std::string Animal::getType(void) const{
    return (_type);
}

void Animal::makeSound(void) const{
    std::cout << "Make some noize, beach!" << std::endl;
}
