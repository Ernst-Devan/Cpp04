#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat()
{
    this->_type = "Cat";
    this->_Brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
};

Cat::Cat(const std::string& type)
{
    this->_type = type;
    std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(const Cat& a)
{
    this->_type = a._type;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat& a)
{
    std::cout << "Cat operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return (*this);
}

Cat::~Cat()
{
    delete this->_Brain;
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}

void Cat::makeSound(void) const
{
    std::cout << "Maouuu !" << std::endl;
}
