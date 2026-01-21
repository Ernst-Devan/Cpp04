#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal 
{
    public:

        Animal();
        Animal(const Animal& c);
        Animal &operator=(const Animal& a);
        virtual ~Animal();

        std::string getType() const;
        virtual void        makeSound(void) const;

    protected:
        std::string _type;
};

#endif
