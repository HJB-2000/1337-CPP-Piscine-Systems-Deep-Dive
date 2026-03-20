#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

#include "Brain.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        ~WrongAnimal();
        void makeSound() const;
        void Wronganimal_think();
        void Wronganimal_talk();
        std::string getType() const;

};

class WrongDog : public WrongAnimal
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

class WrongCat : public WrongAnimal
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