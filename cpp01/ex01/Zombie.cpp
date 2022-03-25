#include "Zombie.hpp"

void Zombie::announce(void) const
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}

void Zombie::setName(std::string newName)
{
    this->_name = newName;
}

Zombie::Zombie(std::string name) : _name(name)
{
    announce();
}

Zombie::~Zombie()
{
    std::cout << "R.I.P." << ": " << this->_name << std::endl;
}