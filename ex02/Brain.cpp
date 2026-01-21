#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& b)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->_ideas[i] = b._ideas[i];
    }
}

Brain &Brain::operator=(const Brain& b)
{
    std::cout << "Brain operator = called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->_ideas[i] = b._ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string *Brain::getIdeas(void)
{
    return (this->_ideas);
}

void    Brain::setIdeas(std::string ideas[100])
{
    for(int i = 0; i < 100; i++)
    {
        this->_ideas[i] = ideas[i];
    }
}
