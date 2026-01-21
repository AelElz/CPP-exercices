#include "ClapTrap.hpp"

int main()
{
	ClapTrap player("Ayoub");

	player.attack("enemy");
	player.takeDamage(5);
	player.beRepaired(3);
	player.takeDamage(20);
	player.attack("enemy");
	player.beRepaired(5);

	return (0);
}
