#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << name << " assigned!" << std::endl;
    return *this;
}


void FragTrap::highFivesGuys() {
    std::cout << name << " positive high fives request on the standard output!" << std::endl;
}
