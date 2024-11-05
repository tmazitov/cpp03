#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public: 
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& other);
		FragTrap& operator=(FragTrap& other);
		~FragTrap();

		// Abilities
		
		void highFivesGuys(void);
};

#endif