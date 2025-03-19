#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
        
    public:
        FragTrap();
        FragTrap(const std::string &name);
        
        virtual ~FragTrap();

        FragTrap(const FragTrap &other);

        FragTrap &operator=(const FragTrap &other);

        void highFivesGuys();
};

#endif