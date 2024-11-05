#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		// Abilities
		void attack(const std::string& target);
		void guardGate();
};

#endif