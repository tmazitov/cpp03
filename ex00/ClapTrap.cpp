#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << GREEN << "CT: " << RESET << name << " has been created by default values" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << GREEN << "CT: " << RESET << name << " has been created by name" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "CT: " << RESET << name << " has been destroyed" << std::endl;
}	

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << GREEN << "CT: " << RESET << name << std::endl \
			<< "\t- is already dead" << std::endl;
		return ;		
	}

	this->energyPoints -= 1;

	std::cout << GREEN << "CT: " << RESET << name << std::endl \
			<< "\t- attack "<< target << std::endl \
			<< "\t- causing damage " << YELLOW << attackDamage << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << GREEN << "CT: " << RESET << name << std::endl \
			<< "\t- is already dead" << std::endl;
		return ;
	}

	this->hitPoints = std::max(0, (int)this->hitPoints - (int)amount);

	std::cout << GREEN << "CT: " << RESET << name << std::endl \
			<< "\t- take damage " << RED << amount << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << GREEN << "CT: " << RESET << name << std::endl \
			<< "\t- is already dead" << std::endl;
		return ;		
	}

	this->hitPoints += amount;
	this->energyPoints -= 1;
	
	std::cout << "ClapTrap" << name << std::endl \
			<< "\t- be repaired " << BLUE << amount << RESET << std::endl;
}