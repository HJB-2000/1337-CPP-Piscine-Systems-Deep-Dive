#include <iostream>
#include <string>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::cout << "-------test1----------Correct Animal---" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "\n-------test2----------Wrong Animal---" << std::endl;
    {
        const WrongAnimal *wrongmeta = new WrongAnimal();
        const WrongAnimal *d = new WrongDog();    
        const WrongAnimal *c = new WrongCat();
        std::cout << d->getType() << "" << std::endl;    
        std::cout << c->getType() << "" << std::endl;    
        wrongmeta->makeSound();
        d->makeSound();
        c->makeSound();
        delete wrongmeta;
        delete d;
        delete c;
    }
    return 0;
}
