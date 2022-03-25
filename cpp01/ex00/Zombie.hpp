#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
            Zombie(std::string name);
            Zombie();
            ~Zombie();
            void announce(void) const;
    private:
            const std::string _name;
};

void randomChump();
Zombie* newZombie(std::string name);

#endif