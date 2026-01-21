#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->_idx = 0;
    for(int i = 0; i < 4; i++)
    {
        this->_knowledge[i] = NULL;
    }
    // std::cout << "[MateriaSource] Default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_knowledge[i])
            delete this->_knowledge[i];
    }
    // std::cout << "[MateriaSource] Destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& m)
{
    this->_idx = 0;
    for(int i = 0; i < 4; i++)
    {
        delete this->_knowledge[i];
        if(m._knowledge[i])
            this->_knowledge[i] = m._knowledge[i]->clone();
        else
            this->_knowledge[i] = NULL;
    }
    // std::cout << "[MateriaSource] Copy Constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& m)
{
    if (this == &m)
        return (*this);
    this->_idx = 0;
    for(int i = 0; i< 4; i++)
    {
        delete this->_knowledge[i];
        if(m._knowledge[i])
            this->_knowledge[i] = m._knowledge[i]->clone();
        else
            this->_knowledge[i] = NULL;
    }
    // std::cout << "[MateriaSource] Operator = called" << std::endl;
    return (*this);
}

void MateriaSource::learnMateria(AMateria* mat)
{
    if (this->_idx >= 4)
    {
        std::cout << "[Debug] We can't learn more Materia" << std::endl;
        delete mat;
        return;
    }
    std::cout << "[Debug] Learn a new Materia" << std::endl;
    this->_knowledge[this->_idx++] = mat;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_knowledge[i]->getType() == type)
        {
            std::cout << "[Debug] Create a new Materia" << std::endl;
            return (this->_knowledge[i]->clone());
        }
    }
    std::cout << "[Debug] New material not find" << std::endl;
    return 0;
}
