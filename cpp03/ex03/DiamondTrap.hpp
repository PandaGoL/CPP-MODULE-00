#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap( ClapTrap const &other);
            ~DiamondTrap();

            DiamondTrap &operator = ( DiamondTrap const &other);
            void WhoAmI();

    private:
	        std::string		_name;
};

#endif