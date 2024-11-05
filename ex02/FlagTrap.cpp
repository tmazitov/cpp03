#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	name = "Default";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << BLUE << "FT: " << RESET << name << " has been created by default values" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << BLUE << "FT: " << RESET << name << " has been created by name" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << BLUE << "FT: " << RESET << name << " has been destroyed" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->name << " high fives guys!" << std::endl;
}