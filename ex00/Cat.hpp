#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& c);
        Cat &operator=(const Cat& a);
        ~Cat();

        std::string getType() const;
        void        makeSound(void) const;
};

#endif
