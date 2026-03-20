#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

#include "Brain.hpp"

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
        virtual void animal_think();
        virtual void animal_talk();
        std::string getType() const;

};

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        ~Dog();
        void makeSound() const;
        void animal_think();
        void animal_talk();
};

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        ~Cat();
        void makeSound() const;
        void animal_think();
        void animal_talk();
}; 

#endif
