#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

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
        std::string getType() const;
};

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const WrongDog& obj);
        WrongDog& operator=(const WrongDog& obj);
        ~WrongDog();
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        ~WrongCat();
        void makeSound() const;
};



#endif