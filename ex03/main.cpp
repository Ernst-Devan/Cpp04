#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void limits_test()
{

    std::cout << std::endl << std::endl << "------------LIMITS TEST------------" << std::endl << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("dede");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);


    delete me;
    delete src;
}

void constructor_test()
{
    ICharacter* me = new Character("me");
    ICharacter* you = new Character("you");

    AMateria* cure = new Cure();
    me->equip(cure);
    cure = new Cure();
    me->equip(cure);
     cure = new Cure();
    me->equip(cure);
     cure = new Cure();
    me->equip(cure);
    me->unequip(0);
    *me = *you;
    
    delete me;
    delete you;
}

void other_test()
{
    std::cout << std::endl << std::endl << "------------OTHER TEST------------" << std::endl << std::endl;

    ICharacter* me = new Character("me");
    AMateria* ice = new Ice();
    me->equip(ice);
     ice = new Ice();
    me->equip(ice);
    ice = new Ice();
     me->equip(ice);
    ice = new Ice();
    me->equip(ice);
    me->unequip(150);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
     ice = new Ice();
    me->equip(ice);
     ice = new Ice();
    me->equip(ice);
     ice = new Ice();
    me->equip(ice);
     ice = new Ice();
    me->equip(ice);

    delete me;
}

void subject_test()
{

     std::cout << std::endl << std::endl << "------------SUBJECT TEST------------" << std::endl << std::endl;
  IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}


int main()
{
    constructor_test();
    other_test();
    subject_test();
    limits_test();
    return 0;
}