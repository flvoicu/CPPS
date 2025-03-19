#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() 
    : ClapTrap("Default_clap_name"), name("Default") 
{
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) 
    : ClapTrap(name + "_clap_name")
{
    this->name = name;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name)
{
    *this = other;
    std::cout << "DiamondTrap " << name << " copied!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap " << name << " assigned!" << std::endl;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
