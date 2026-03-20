#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default") {
    std::cout << "Baseclass WrongAnimal default constructor is called!!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "Baseclass WrongAnimal Parmitrized constructor is called!!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj): type(obj.type) {
    std::cout << "Baseclass WrongAnimal copy constructor is called!!!" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Baseclass WrongAnimal deconstructor is called!!!" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal:" + this->type + " make sounds" << std::endl;    
}
std::string WrongAnimal::getType()const
{
    return this->type;
}

void WrongAnimal::Wronganimal_think() {
    std::cout << "we dont know the Wronganimal so no thinking LOL!!!" << std::endl;
}

void WrongAnimal::Wronganimal_talk() {
    std::cout << "we dont know the Wronganimal so no taking LOL!!!" << std::endl;
}  


/***************************************************************************** */

WrongDog::WrongDog() : WrongAnimal("WrongDog"), brain(new Brain()) {
    std::cout << "subclass WrongDog default constructor is called!!!" << std::endl;
}

WrongDog::WrongDog(const WrongDog& obj): WrongAnimal(obj.type), brain(new Brain(*obj.brain)) {
    std::cout << "subclass WrongDog copy constructor is called!!!" << std::endl;
    return ;
}

WrongDog& WrongDog::operator=(const WrongDog& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = obj.brain;
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


WrongCat::WrongCat() : WrongAnimal("WrongCat"), brain(new Brain()){
    std::cout << "subclass WrongCat default constructor is called!!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj.type), brain(new Brain(*obj.brain)) {
    std::cout << "subclass WrongCat copy constructor is called!!!" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = obj.brain;
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
