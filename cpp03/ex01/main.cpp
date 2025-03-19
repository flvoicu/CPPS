#include "ScavTrap.hpp"
#include <string>

class ScavTrap;

int main() {
    ScavTrap ScavTrap1("pepe");
    ScavTrap ScavTrap2("juan");

    ScavTrap1.attack("Uno");
    ScavTrap2.attack("Dos");

    ScavTrap1.takeDamage(30);
    ScavTrap2.takeDamage(50);

    ScavTrap1.beRepaired(20);
    ScavTrap2.beRepaired(30);

    ScavTrap1.guardGate();
    ScavTrap2.guardGate();

    return 0;
}