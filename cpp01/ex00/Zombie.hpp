#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(const std::string& zombieName);
    ~Zombie();

	void announce (void);
    void display(void) const;
    std::string getName(void) const;
    void setName(const std::string& zombieName);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif