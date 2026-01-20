#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    testVirtual()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    animal->makeSound();

    std::cout << std::endl << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl << std::endl;
}

void    testWithout()
{
    const WrongAnimal* wAnimal = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();

    std::cout << std::endl;

    std::cout << wAnimal->getType() << " " << std::endl;
    std::cout << wCat->getType() << " " << std::endl;
    wAnimal->makeSound();
    wCat->makeSound();

    std::cout << std::endl << std::endl;

    delete wAnimal;
    delete wCat;
    
    std::cout << std::endl << std::endl;
}

int main()
{
    testVirtual();
    testWithout();
    return 0;
}