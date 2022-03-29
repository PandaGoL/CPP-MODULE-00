// #include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), _name("Default")
// {
//     this->ClapTrap::_hitPoint = 100;
//     _energyPoint = 100;
//     _attackDamage = 30;
// 	std::cout << "DiamondTrap <" << _name << "> constructor called ." << std::endl;
// }

// DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap(), _name(name)
// {
//     this->ClapTrap::_name = name + "_clap_name";
//     _hitPoint = 100;
//     _energyPoint = 100;
//     _attackDamage = 30;
//     std::cout << "FragTrap <" << _name << "> Init constructor called ." << std::endl; 
// }

// FragTrap::FragTrap( FragTrap const &other )
// {
// 	std::cout << "FragTrap <" << _name << "> was created;" << std::endl;
//     *this = other;
// }

// FragTrap::~FragTrap()
// {
// 	std::cout << "FragTrap <" << _name << "> destructor called;" << std::endl;
// }

// FragTrap const	&FragTrap::operator=( FragTrap const &other )
// {
// 	_name = other.getName();
// 	_hitPoint = other.getHitpoints();
// 	_energyPoint = other.getEnergyPoints();
// 	_attackDamage = other.getAttackDamage();
// 	std::cout << "Operator overload called;" << std::endl;
// 	return (*this);
// }