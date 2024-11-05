#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>
# include "color.hpp"
# include <algorithm>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public: 
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		// Abilities

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif