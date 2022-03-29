#include "Cat.hpp"

Cat::Cat()
{
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
    *this = cat;
    std::cout << "For <" << _type << ">  copy constructor init ." << std::endl;
}

Cat::~Cat()
{
     std::cout << "<" << _type << "> Detructor init ." << std::endl;
}

Cat const &Cat::operator = (const Cat &cat)
{
    if (this != &cat)
    {
        _type = cat._type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Mya - u blac! I'm kity" << std::endl;
}
