#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2;

	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2;

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);

	scavTrap.attack("target");
	scavTrap.guardGate();
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);

	return 0;
}
