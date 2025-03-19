#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./FragTrap/FragTrap.hpp"
#include "./ScavTrap/ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap {

private:
    std::string name;

public:

    DiamondTrap();
    DiamondTrap(const std::string &name);

    ~DiamondTrap();

    DiamondTrap(const DiamondTrap &other);

    DiamondTrap &operator=(const DiamondTrap &other);

    void whoAmI();
};

#endif