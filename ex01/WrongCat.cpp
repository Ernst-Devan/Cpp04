#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& a)
{
    this->_type = a._type;
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& a)
{
    std::cout << "WrongCat operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->_type);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Maouuu !" << std::endl;
}
