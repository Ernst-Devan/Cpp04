#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    public:

        Dog();
        Dog(const Dog& c);
        Dog &operator=(const Dog& a);
        ~Dog();

        std::string getType() const;
        void        makeSound(void) const;
};

#endif
