#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

#include "Brain.hpp"

class AWrongAnimal
{
    protected:
        std::string type;
    public:
        AWrongAnimal();
        AWrongAnimal(std::string type);
        AWrongAnimal(const AWrongAnimal& obj);
        AWrongAnimal& operator=(const AWrongAnimal& obj);
        ~AWrongAnimal();
        virtual void makeSound() const = 0;
        virtual void animal_think();
        virtual void animal_talk();
        std::string getType() const;

};

class WrongDog : public AWrongAnimal
{
    private:
        Brain *brain;
    public:
        WrongDog();
        WrongDog(const WrongDog& obj);
        WrongDog& operator=(const WrongDog& obj);
        ~WrongDog();
        void makeSound() const;
        void Wronganimal_think();
        void Wronganimal_talk();
};

class WrongCat : public AWrongAnimal
{
    private:
        Brain *brain;
    public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        ~WrongCat();
        void makeSound() const;
        void Wronganimal_think();
        void Wronganimal_talk();
}; 

#endif