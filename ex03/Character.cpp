#include "Character.hpp"
#include <iostream>

Character::Character()
{
    this->_name = "Tomy";
    for (int i = 0; i < 100; i++)
    {
        _floor[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    // std::cout << "[Character] Default constructor called" << std::endl;
}

Character::Character(std::string const& name)
{
    this->_name = name;
    for (int i = 0; i < 100; i++)
    {
        this->_floor[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    // std::cout << "[Character] Construct by name called" << std::endl;
}

Character::Character(Character const& c)
{
    this->_name = c._name;
    for (int i = 0; i < 100; i++)
    {
        this->_floor[i] = NULL;
    }
    for(int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        if (c._inventory[i])
            this->_inventory[i] = c._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    // std::cout << "[Character] Copy constructor called" << std::endl;
}

Character& Character::operator=(Character const& c)
{
    this->_name = c._name;
    for (int i = 0; i < 100; i++)
    {
        delete _floor[i];
        _floor[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        if (c._inventory[i])
            this->_inventory[i] = c._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    std::cout << "[Character] Operator = called" << std::endl;
    return (*this);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    for(int i = 0; i < 100; i++)
    {
        if (this->_floor[i])
            delete this->_floor[i];
    }
    // std::cout << "[Character] Destructor called" << std::endl;
}

std::string const& Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria* m)
{
    if (m == 0)
    {
        std::cout << "[Debug] Can't equip a not valid Materia" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if(this->_inventory[i] == NULL)
        {
            std::cout << "[Debug] Equip a new Materia" << std::endl;
            this->_inventory[i] = m;
            return;
        }
    }
    std::cout << "[Debug] The inventory is full" << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "[Debug] You need to search inside the backpack" << std::endl;
        return;
    }
    if ( !this->_inventory[idx])
    {
        std::cout << "[Debug] No item on this slot" << std::endl;
        return;
    }
    for(int i = 0; i < 100; i++)
    {
        if (_floor[i] == NULL)
        {
            std::cout << "[Debug] Put an item on the floor" << std::endl;
            _floor[i] = this->_inventory[idx];
            this->_inventory[idx] = NULL;
            return;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "[Debug] You need to search inside the backpack" << std::endl;
        return;
    }
    if (!this->_inventory[idx])
    {
        std::cout << "[Debug] No item on this slot" << std::endl;
        return;
    }
    this->_inventory[idx]->use(target);
}

