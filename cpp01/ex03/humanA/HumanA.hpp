#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "../weapon/Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon &weapon;

public:

    HumanA(const std::string &humanName, Weapon &humanWeapon);
	~HumanA();

    void setWeapon(Weapon &humanWeapon);
    void attack();};

#endif