#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_knowledge[4];
        unsigned int _idx;
    public:
        MateriaSource();
        MateriaSource(MateriaSource const& m);
        MateriaSource& operator=(MateriaSource const& m);
        ~MateriaSource();

        void learnMateria(AMateria* mat);
        AMateria* createMateria(std::string const& type);
};

#endif