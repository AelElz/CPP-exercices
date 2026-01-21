#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "----TEST 1: ClapTrap----" << std::endl;
	ClapTrap a("Ayoub");
	a.attack("enemy");
	a.takeDamage(5);
	a.beRepaired(3);
	a.takeDamage(20);
	a.attack("enemy");
	a.beRepaired(3);

	std::cout << std::endl << "----TEST 2: ScavTrap----" << std::endl;
	ScavTrap b("Gard");
	b.attack("Ayoub");
	b.guardGate();
	b.takeDamage(30);
	b.beRepaired(10);
	b.takeDamage(200);
	b.attack("Ayoub");
	b.beRepaired(10);

	std::cout << std::endl << "----TEST 3: FragTrap----" << std::endl;
	FragTrap c("Fraggy");
	c.attack("enemy");
	c.highFivesGuys();
	c.takeDamage(50);
	c.beRepaired(20);
	c.attack("enemy");
	c.takeDamage(80);
	c.attack("enemy");

	return (0);
}
