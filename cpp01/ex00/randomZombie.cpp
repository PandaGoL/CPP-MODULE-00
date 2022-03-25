#include "Zombie.hpp"

void randomChump(void)
{
    std::string randomName[5] = {"Vasya", "Petya", "GulDan", "Chaky", "Elene"};
    Zombie* randomZombie = newZombie(randomName[rand() % 5]);
    delete(randomZombie);
}