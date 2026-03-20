#include "Animal.hpp"

AAnimal::AAnimal():type("Default") {
    std::cout << "Baseclass AAnimal default constructor is called!!!" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type) {
    std::cout << "Baseclass AAnimal Parmitrized constructor is called!!!" << std::endl;

}

AAnimal::AAnimal(const AAnimal& obj): type(obj.type) {
    std::cout << "Baseclass AAnimal copy constructor is called!!!" << std::endl;
    return ;
}
AAnimal& AAnimal::operator=(const AAnimal& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "Baseclass AAnimal deconstructor is called!!!" << std::endl;
}

std::string AAnimal::getType()const {
    return this->type;
}

void AAnimal::animal_think() {
    std::cout << "we dont know the animal so no thinking LOL!!!" << std::endl;
}

void AAnimal::animal_talk() {
    std::cout << "we dont know the animal so no taking LOL!!!" << std::endl;
}  

/***************************************************************************** */

Dog::Dog() : AAnimal("Dog"), brain(new Brain()) {
    std::cout << "subclass Dog default constructor is called!!!" << std::endl;
}

Dog::Dog(const Dog& obj): AAnimal(obj), brain(new Brain(*obj.brain)) {
    std::cout << "subclass Dog copy constructor is called!!!" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "subclass Dog deconstructor is called!!!" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Animal:" + this->type + " bark " << std::endl;    
}

void Dog::animal_think() {
    brain->set_ideas();
}  

void Dog::animal_talk() {
    brain->revil_ideas();
} 
/***************************************************************************** */


Cat::Cat() : AAnimal("Cat"), brain(new Brain()){
    std::cout << "subclass Cat default constructor is called!!!" << std::endl;
}

Cat::Cat(const Cat& obj): AAnimal(obj), brain(new Brain(*obj.brain)){
    std::cout << "subclass Cat copy constructor is called!!!" << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "subclass Cat deconstructor is called!!!" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Animal:" + this->type + " Meow" << std::endl;    
}

void Cat::animal_think() {
    brain->set_ideas();
} 

void Cat::animal_talk() {
    brain->revil_ideas();
} 