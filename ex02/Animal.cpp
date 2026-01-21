#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
};

Animal::Animal(const Animal& a): _type(a._type)
{
    std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal& a)
{
    std::cout << "Animal operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}
