#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
};


WrongAnimal::WrongAnimal(const WrongAnimal& a): _type(a._type)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& a)
{
    std::cout << "WrongAnimal operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "ANIMAL SOUND !" << std::endl;
}