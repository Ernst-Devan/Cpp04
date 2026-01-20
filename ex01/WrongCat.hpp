#ifndef WrongCat_H
#define WrongCat_H

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string& type);
        WrongCat(const WrongCat& c);
        WrongCat &operator=(const WrongCat& a);
        ~WrongCat();

        std::string getType() const;
        void        makeSound(void) const;
};

#endif
