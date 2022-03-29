#include "FragTrap.hpp"

int main( void )
{
	FragTrap A;
	FragTrap B("Another");

	A.attack("target");
	B.attack("Another targer");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.highFivesGuys();
	B.highFivesGuys();

	return (0);
}