#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& c);
        Cat &operator=(const Cat& a);
        ~Cat();

        Brain *getBrain(void) const;
        std::string getType() const;
        void        makeSound(void) const;
        
    private:
        Brain *_Brain;

};

#endif
