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
	// test attack override + chaining
	scav.attack("Ayoub");

	// test special ability
	scav.guardGate();

	// test damage + repair
	scav.takeDamage(30);
	scav.beRepaired(10);

	// test energy or HP dead
	scav.takeDamage(200);
	scav.attack("enemy");
	scav.beRepaired(5);

	return (0);
}
