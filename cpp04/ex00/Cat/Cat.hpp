#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "../Animal/Animal.hpp"

class Cat : public Animal{

    public:

        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat();      

        void makeSound() const;
};

#endif