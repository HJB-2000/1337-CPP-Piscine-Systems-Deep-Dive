#include <iostream>
#include <string>
#include "Animal.hpp"
#include "WrongAnimal.hpp"


int main()
{
    std::cout << "-------------------test1--------------------------" << std::endl;
    {
        const Animal* a = new Dog();
        const Animal* b = new Cat();
        delete a;
        delete b;
    }
    std::cout << "-------------------test2--------------------------" << std::endl;
    {
        Animal* i = new Cat();
        std::cout << i->getType() + ": ";
        i->makeSound();
        std::cout << "\n" << i->getType() + " THINK\n" << std::endl;
        i->animal_think();  
        i->animal_talk();  
        delete i;
    }
    std::cout << "-------------------test2--------------------------" << std::endl;
    {
        Animal* j = new Dog();
        std::cout << j->getType() + ": ";
        j->makeSound();
        std::cout << "\n" << j->getType() + " THINK\n" << std::endl;
        j->animal_think();  
        j->animal_talk();
        delete j;
    }
    std::cout << "-------------------test3--------------------------" << std::endl;
    {
        Dog a;
        std::cout << a.getType() << std::endl;
        a.makeSound();
        Animal *ptr = new Cat();
        *ptr = a;
        std::cout << ptr->getType() << std::endl;
        ptr->animal_talk();
        ptr = (Dog *)ptr;
        ptr->makeSound();
        std::cout << ptr->getType() << std::endl;
        ptr->makeSound();

        delete ptr;
    }
    /*
        i made this test in commant section cause it going to cause a memory leak
        so if you want to test ativate the local block of the test 4
        and this is going to cause a memory leak and i'll explain to you why
        
        std::cout << "-------------------test4--------------------------" << std::endl;
        {
            WrongAnimal* a = new WrongCat();
            WrongAnimal* b = new WrongDog();
            
            delete a;
            delete b;
        }
    */
    std::cout << "-------------------test5--------------------------" << std::endl;
    {

        const int arraySize = 4;
        Animal* animals[arraySize];

        for (int i = 0; i < arraySize; i++) {
            if (i < arraySize / 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        std::cout << "\n--- Deleting the array ---" << std::endl;
        for (int i = 0; i < arraySize; i++) {
            delete animals[i];
        }
    }
    std::cout << "-------------------test6--------------------------" << std::endl;
    {
        Dog basic;
        {
            basic.animal_think();
            std::cout << "Basic Dog Ideas:" << std::endl;
            basic.animal_talk();
            Dog tmp = basic;
            std::cout << "Copy Dog Ideas:" << std::endl;
            tmp.animal_talk();
            
        }
        basic.animal_talk();
    }
    std::cout << "-------------------test7--------------------------" << std::endl;
    {
        Cat catA;
        Cat catB;
        
        catA.animal_think();
        catB = catA; // Tests Assignment Operator (Deep Copy)
        
        std::cout << "Cat B Ideas (should match Cat A):" << std::endl;
        catB.animal_talk();
    }
    return 0;
}
