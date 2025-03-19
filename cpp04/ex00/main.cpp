#include "./Animal/Animal.hpp"
#include "./WrongAnimal/WrongAnimal.hpp"
#include "./Cat/Cat.hpp"
#include "./WrongCat/WrongCat.hpp"
#include "./Dog/Dog.hpp"
#include <string>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* metaW = new WrongAnimal();
    const WrongAnimal* h = new WrongCat();
    std::cout << h->getType() << " " << std::endl;
    h->makeSound();
    metaW->makeSound();
    delete metaW;
    delete h;
    
    return 0;
}