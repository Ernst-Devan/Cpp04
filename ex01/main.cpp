#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>


void alloc_check()
{

    std::cout <<std::endl << "ALLOC CHECK" << std::endl << std::endl;

    Animal *list[10];

    std::cout << std::endl << std::endl;

    for (int i = 0; i < 5; i++)
    {
        list[i] =  new Dog();
    }

    std::cout << std::endl << std::endl;

    for (int i = 5; i < 10; i++)
    {
        list[i] = new Cat();
    }

    std::cout << std::endl << std::endl;

    for (int i = 0; i < 10; i++)
    {
        list[i]->makeSound();
    }

    std::cout << std::endl << std::endl;


    for (int i = 0; i < 10; i++)
    {
        delete list[i];
    }
}

void deep_copy()
{

    std::cout <<std::endl << "DEEP COPY" << std::endl << std::endl;

    std::string idea[100];

    Dog *a = new Dog();
    Dog *b = new Dog();

    for (int i = 0; i < 100; i++)
    {
        idea[i].append("a");
    }

    a->getBrain()->setIdeas(idea);

    for (int i = 0; i < 100; i++)
    {
        idea[i][0] = 'b';
    }

    b->getBrain()->setIdeas(idea);

    std::cout << std::endl;

    std::cout << "a idea :"<< a->getBrain()->getIdeas()[0] << std::endl << std::endl;
    std::cout << "b idea :"<< b->getBrain()->getIdeas()[0] << std::endl << std::endl;

    delete a;
    delete b;
    return;
}

void    copy_brain()
{

     std::cout <<std::endl << "Copy Brain" << std::endl << std::endl;
     
    Cat *one = new Cat();

    std::string idea[100];

    for (int i = 0; i < 100; i++)
    {
        idea[i].append("a");
    }
    Cat *two = new Cat(*one);
    one->getBrain()->setIdeas(idea);

      for (int i = 0; i < 100; i++)
    {
        idea[i].append("b");
    }
    two->getBrain()->setIdeas(idea);
    

    std::cout << std::endl << std::endl << one->getBrain()->getIdeas()[0] << std::endl << std::endl;
    std::cout << std::endl << std::endl << two->getBrain()->getIdeas()[0] << std::endl << std::endl;

    delete one;
    delete two;
}

int main()
{
    copy_brain();
    deep_copy();
    alloc_check();
    return 0;
}
