#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        ~Cat();
        void makeSound() const;
};



#endif
