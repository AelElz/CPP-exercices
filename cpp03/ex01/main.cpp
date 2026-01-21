#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "---- TEST 1: ClapTrap ----" << std::endl;

	ClapTrap clap("Ayoub");
	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.takeDamage(20);
	clap.attack("enemy");
	clap.beRepaired(5);

	std::cout << "\n---- TEST 2: ScavTrap ----" << std::endl;

	ScavTrap scav("Gard");
	scav.attack("Ayoub");
	scav.guardGate();

	scav.takeDamage(30);
	scav.beRepaired(10);

	scav.takeDamage(200);
	scav.attack("enemy");
	scav.beRepaired(5);
	return (0);
}
