#include "Zombie.hpp"

int main(void)
{
    srand(time(nullptr));
    Zombie stackZombie("Stack Zombie");
    Zombie *heapZombie = newZombie("Heap Zombie");

    randomChump();
    
    delete heapZombie;
   
    return (0);
}