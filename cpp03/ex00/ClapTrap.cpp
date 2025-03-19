#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) { 
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}


void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << name << " attacks " << target << ", causing " 
                  << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << name << " can't attack! Not enough energy or hit points!" << std::endl;
    }
}

void ClapTrap::takeDamage(int damage) {
    hitPoints -= damage;
    if (hitPoints < 0) {
        hitPoints = 0;
    }
    std::cout << name << " takes " << damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(int amount) {
    if (energyPoints > 0) {
        hitPoints += amount;
        if (hitPoints > 100) {
            hitPoints = 100; 
        }
        energyPoints--;
        std::cout << name << " is repaired by " << amount << " points!" << std::endl;
    } else {
        std::cout << name << " can't repair! Not enough energy!" << std::endl;
    }
}