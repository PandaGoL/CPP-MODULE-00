#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap <" << _name << "> was created;" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other )
{
	std::cout << "ScavTrap <" << _name << "> was created;" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap <" << _name << "> destructor called;" << std::endl;
}

ScavTrap const	&ScavTrap::operator=( ScavTrap const &other )
{
	_name = other.getName();
	_hitPoint = other.getHitpoints();
	_energyPoint = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap <" << _name << "> have enterred in Gate keeper mode." << std::endl;
}
