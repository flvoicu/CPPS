#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    public:

        WrongCat();
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        virtual ~WrongCat();      

        void makeSound() const;
};

#endif