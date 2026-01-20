#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(Cure const& c);
        Cure &operator=(Cure const& c);
        ~Cure();

        std::string const& getType() const;
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif
