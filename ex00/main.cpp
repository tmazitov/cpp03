#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2;

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	return 0;
}
