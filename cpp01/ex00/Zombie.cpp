#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void    Zombie::announce()
{
	std::cout << name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << " is destroyed" << std::endl;
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}
