#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog& c);
        Dog &operator=(const Dog& a);
        ~Dog();

        Brain *getBrain(void);
        std::string getType() const;
        void        makeSound(void) const;
        void        test(void);

    private:
        Brain *_Brain;
};

#endif
