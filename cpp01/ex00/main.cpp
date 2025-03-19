#include "Zombie.hpp"

void testZombieCreation() {
    Zombie* z = newZombie("TestZombie");
	z->display();
	delete z;
}

void testSetName() {
    Zombie z("OldName");
    z.display();
    z.setName("NewName");
	z.display();
}

void testRandomChump() {
    randomChump("RandomZombie");
}

void runTests() {
	std::cout << "-------------------------------" << std::endl;

    testZombieCreation();
    std::cout << " testZombieCreation passed" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	testSetName();
    std::cout << " testSetName passed" << std::endl;
	std::cout << "-------------------------------" << std::endl;
   
	testRandomChump();
    std::cout << " testRandomChump passed" << std::endl;
	std::cout << "-------------------------------" << std::endl;\
}

int main() {
    runTests();
    return 0;
}