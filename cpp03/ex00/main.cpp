#include "ClapTrap.hpp"
#include <string>

class ClapTrap;

int main() {
    ClapTrap clapTrap1("pepe");
    ClapTrap clapTrap2("juan");

    clapTrap1.attack("Uno");
    clapTrap2.attack("Dos");

    clapTrap1.takeDamage(30);
    clapTrap2.takeDamage(50);

    clapTrap1.beRepaired(20);
    clapTrap2.beRepaired(30);

    return 0;
}