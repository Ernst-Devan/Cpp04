#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
};

Dog::Dog(const std::string& type)
{
    this->_type = type;
    std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(const Dog& a)
{
    this->_type = a._type;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog& a)
{
    std::cout << "Dog operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const
{
    return (this->_type);
}

void Dog::makeSound(void) const
{
    std::cout << "BARK BARK !" << std::endl;
}
