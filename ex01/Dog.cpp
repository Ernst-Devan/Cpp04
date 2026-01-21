#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->_Brain = new Brain();
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
};

Dog::Dog(const Dog& a)
{
    this->_type = a._type;
    this->_Brain = new Brain();
    this->_Brain->setIdeas(a.getBrain()->getIdeas());
    std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog& a)
{
    std::cout << "Dog operator = called" << std::endl;
    if (this == &a)
        return (*this);
    this->_Brain->setIdeas(a.getBrain()->getIdeas());
    this->_type = a._type;
    return (*this);
}

Dog::~Dog()
{
    delete this->_Brain;
    std::cout << "Dog destructor called" << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->_Brain);
}

std::string Dog::getType() const
{
    return (this->_type);
}


void Dog::makeSound(void) const
{
    std::cout << "BARK BARK !" << std::endl;
}
