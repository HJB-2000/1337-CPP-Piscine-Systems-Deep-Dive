#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& obj);
        AAnimal& operator=(const AAnimal& obj);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        virtual void animal_think();
        virtual void animal_talk();
        std::string getType() const;

};

class Dog : public AAnimal
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

class Cat : public AAnimal
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
