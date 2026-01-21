#include <iostream>
#include "Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    // std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::Cure(Cure const& c)
{
    this->_type = c._type;
    // std::cout << "[Cure] Copy constructor called" << std::endl;
}

Cure& Cure::operator=(Cure const& c)
{
    if (this == &c)
        return (*this);
    this->_type = c._type;
    // std::cout << "[Cure] Operator = called" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    // std::cout << "[Cure] Destructor called" << std::endl;
}

AMateria* Cure::clone() const 
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


