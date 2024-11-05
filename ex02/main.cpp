#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main( void ) {
	FlagTrap flagTrap("FF");

	flagTrap.attack("enemy");
	flagTrap.takeDamage(10);
	flagTrap.beRepaired(5);

	return 0;
}
