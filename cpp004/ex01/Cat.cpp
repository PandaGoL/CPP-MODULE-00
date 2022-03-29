#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->brain = new Brain();
    _type = "Cat";
    std::cout << "<" << _type << "> Default constructor init ." << std::endl;
}

Cat::Cat(const std::string &type)
{
    _type = type;
     std::cout << "For <" << _type << ">  constructor init ." << std::endl;
}

Cat::Cat(const Cat &cat)
{
    if (cat.brain)
		this->brain = new Brain(*cat.brain);
	this->_type = cat.getType();
    std::cout << "For <" << _type << ">  copy constructor init ." << std::endl;
}

Cat::~Cat()
{
    delete brain;
     std::cout << "<" << _type << "> Detructor init ." << std::endl;
}

Cat const &Cat::operator = (const Cat &cat)
{
    if (cat.brain)
		this->brain = new Brain(*cat.brain);
	_type = cat.getType();
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Mya - u blac! I'm kity" << std::endl;
}

Brain		*Cat::getBrain( void ) const
{
	return (brain);
}
