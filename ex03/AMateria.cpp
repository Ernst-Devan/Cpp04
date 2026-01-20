#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(): _type("")
{
    // std::cout << "[AMateria] Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type): _type(type)
{
    // std::cout << "[AMateria] Constructor by type called" << std::endl;
}

AMateria::AMateria(AMateria const& a): _type(a._type)
{
    // std::cout <<"[AMateria] Constructor by copy" << std::endl;
}

AMateria& AMateria::operator=(AMateria const& a)
{
    this->_type = a._type;
    // std::cout <<"[AMateria] Operator = called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    // std::cout << "[AMateria] Destructor called" << std::endl;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    return;
}

std::string const& AMateria::getType() const
{
    return (this->_type);
}

