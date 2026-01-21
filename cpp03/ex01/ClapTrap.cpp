#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks "
			  << target << ", causing "
			  << attackDamage << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes "
			  << amount << " points of damage!"
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair" << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for "
			  << amount << " hit points!"
			  << std::endl;
}
