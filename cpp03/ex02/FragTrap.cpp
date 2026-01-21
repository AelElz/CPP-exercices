#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap attacks differently!" << std::endl;
    ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " wants a high five!" << std::endl;
}
