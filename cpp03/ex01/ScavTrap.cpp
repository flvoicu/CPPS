#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << name << " copied!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << name << " assigned!" << std::endl;
    return *this;
}


void ScavTrap::guardGate() {
    std::cout << name << "  is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << name << " attacks " << target << " with a basic attack, causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << name << " can't attack! Not enough energy or hit points!" << std::endl;
    }
}
