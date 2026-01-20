#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int main()
{
    Dog *golden = new Dog();
    std::cout << std::endl;
    Animal *siamois = new Cat();
    std::cout << std::endl;

    //Animal *abstract = new Animal();
    //Animal abstract2;

    delete golden;
    std::cout << std::endl;
    delete siamois;

    return 0;
}
