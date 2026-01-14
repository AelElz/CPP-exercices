#include "Zombie.hpp"

Zombie::Zombie() {}

void    Zombie::announce()
{
	std::cout << name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << " is destroyed" << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}
