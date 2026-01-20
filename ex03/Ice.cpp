#include <iostream>
#include "Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
    // std::cout << "[Ice] Default constructor called" << std::endl;
}

Ice::Ice(Ice const& i)
{
    this->_type = i._type;
    // std::cout << "[Ice] Copy Constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const& i)
{
    this->_type = i._type;
    // std::cout << "[Ice] Operator = called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    // std::cout << "[Ice] Destructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


AMateria* Ice::clone() const
{
    return (new Ice(*this));
}
