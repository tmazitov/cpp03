#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	FragTrap f("FF");

	f.attack("enemy");
	f.takeDamage(10);
	f.beRepaired(5);
	f.highFivesGuys();

	return 0;
}
