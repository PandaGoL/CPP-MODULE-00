#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    horde = zombieHorde(5, "Proud member of the horde");
    delete [] horde;
    return (0);
}