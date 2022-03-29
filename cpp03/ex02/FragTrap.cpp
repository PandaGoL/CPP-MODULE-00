#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "Default";
    _hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "FragTrap <" << _name << "> constructor called ." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap <" << _name << "> Init constructor called ." << std::endl; 
}

FragTrap::FragTrap( FragTrap const &other )
{
	std::cout << "FragTrap <" << _name << "> was created;" << std::endl;
    *this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << _name << "> destructor called;" << std::endl;
}

FragTrap const	&FragTrap::operator=( FragTrap const &other )
{
	_name = other.getName();
	_hitPoint = other.getHitpoints();
	_energyPoint = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap <" << _name << "> high fived!" << std::endl;
}