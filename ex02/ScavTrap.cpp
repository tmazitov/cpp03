#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	name = "Default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << YELLOW << "SC: " << RESET << name << " has been created by default values" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << YELLOW << "SC: " << RESET << name << " has been created by name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{	
	std::cout << YELLOW << "SC: " << RESET << name << " has been created copy constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);

	std::cout << YELLOW << "SC: " << RESET << name << "copy assignment operator overload has been called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "SC: " << RESET << name << " has been destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "SC: " << RESET << name << std::endl \
			<< "\t- have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << YELLOW << "SC: " << RESET << name << std::endl \
			<< "\t- is already dead" << std::endl;
		return ;		
	}

	this->energyPoints -= 1;

	std::cout << YELLOW << "SC: " << RESET << name << std::endl \
			<< "\t- attack "<< target << std::endl \
			<< "\t- causing damage " << YELLOW << attackDamage << RESET << std::endl;
}