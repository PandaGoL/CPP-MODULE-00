#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap A;
	ScavTrap B("Another");

	A.attack("target");
	B.attack("Another targer");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.guardGate();
	B.guardGate();

	return (0);
}