#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap( ClapTrap const &other);
	~ClapTrap();

	ClapTrap &operator = ( ClapTrap const &other);

	std::string	getName( void ) const;
	unsigned int		getHitpoints( void ) const;
	unsigned int		getEnergyPoints( void ) const;
	unsigned int		getAttackDamage( void ) const;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
};

#endif
