#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "../weapon/Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;

public:
	HumanB(const std::string &humanName);
	~HumanB();

    void setWeapon(Weapon& humanWeapon);
    void attack() ;};

#endif