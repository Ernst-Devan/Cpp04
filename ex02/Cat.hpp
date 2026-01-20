#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat& c);
        Cat &operator=(const Cat& a);
        ~Cat();

        std::string getType() const;
        void        makeSound(void) const;
    private:
        Brain *_Brain;

};

#endif
