#include "WrongAnimal.hpp"

AWrongAnimal::AWrongAnimal():type("Default") {
    std::cout << "Baseclass AWrongAnimal default constructor is called!!!" << std::endl;
}

AWrongAnimal::AWrongAnimal(std::string type): type(type) {
    std::cout << "Baseclass AWrongAnimal Parmitrized constructor is called!!!" << std::endl;

}

AWrongAnimal::AWrongAnimal(const AWrongAnimal& obj): type(obj.type) {
    std::cout << "Baseclass AWrongAnimal copy constructor is called!!!" << std::endl;
    return ;
}
AWrongAnimal& AWrongAnimal::operator=(const AWrongAnimal& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

AWrongAnimal::~AWrongAnimal() {
    std::cout << "Baseclass AWrongAnimal deconstructor is called!!!" << std::endl;
}

std::string AWrongAnimal::getType()const {
    return this->type;
}

void AWrongAnimal::animal_think() {
    std::cout << "we dont know the animal so no thinking LOL!!!" << std::endl;
}

void AWrongAnimal::animal_talk() {
    std::cout << "we dont know the animal so no taking LOL!!!" << std::endl;
}  

/***************************************************************************** */

WrongDog::WrongDog() : AWrongAnimal("WrongDog"), brain(new Brain()) {
    std::cout << "subclass WrongDog default constructor is called!!!" << std::endl;
}

WrongDog::WrongDog(const WrongDog& obj): AWrongAnimal(obj), brain(new Brain(*obj.brain)) {
    std::cout << "subclass WrongDog copy constructor is called!!!" << std::endl;
    return ;
}

WrongDog& WrongDog::operator=(const WrongDog& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return *this;
}

WrongDog::~WrongDog(){
    std::cout << "subclass WrongDog deconstructor is called!!!" << std::endl;
    delete brain;
}

void WrongDog::makeSound() const {
    std::cout << "Animal:" + this->type + " bark " << std::endl;    
}

void WrongDog::Wronganimal_think() {
    brain->set_ideas();
}  

void WrongDog::Wronganimal_talk() {
    brain->revil_ideas();
} 
/***************************************************************************** */


WrongCat::WrongCat() : AWrongAnimal("WrongCat"), brain(new Brain()){
    std::cout << "subclass WrongCat default constructor is called!!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj): AWrongAnimal(obj.type), brain(new Brain(*obj.brain)) {
    std::cout << "subclass WrongCat copy constructor is called!!!" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "subclass WrongCat deconstructor is called!!!" << std::endl;
    delete brain;
}

void WrongCat::makeSound() const
{
    std::cout << "Animal:" + this->type + " Meow" << std::endl;    
}

void WrongCat::Wronganimal_think() {
    brain->set_ideas();
} 

void WrongCat::Wronganimal_talk() {
    brain->revil_ideas();
} 
