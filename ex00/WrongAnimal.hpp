#ifndef WrongAnimal_H
#define WrongAnimal_H

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& c);
        WrongAnimal &operator=(const WrongAnimal& a);
        virtual ~WrongAnimal();

        std::string getType() const;
        void        makeSound(void) const;

    protected:
        std::string _type;
};

#endif
