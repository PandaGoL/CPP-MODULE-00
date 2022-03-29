#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap const &other);
            ~FragTrap();

            FragTrap const & operator = (FragTrap const &other);

            void highFivesGuys();
};

#endif
