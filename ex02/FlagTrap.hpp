#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap{
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public: 
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();

		// Abilities
		
		void highFivesGuys(void);
};

#endif