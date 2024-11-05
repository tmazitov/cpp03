#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "Default";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << BLUE << "FT: " << RESET << name << " has been created by default values" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << BLUE << "FT: " << RESET << name << " has been created by name" << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{	
	std::cout << BLUE << "FT: " << RESET << name << " has been created by copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << BLUE << "FT: " << RESET << name << " copy assignment operator overload called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "FT: " << RESET << name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FT: " << RESET << name << " high fives guys!" << std::endl;
}