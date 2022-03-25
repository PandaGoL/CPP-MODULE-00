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
            void setName(std::string newName);
    private:
            std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif