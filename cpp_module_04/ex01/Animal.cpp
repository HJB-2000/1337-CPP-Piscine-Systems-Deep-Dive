#include "Animal.hpp"

Animal::Animal(): type("Default") {
    std::cout << "Baseclass Animal default constructor is called!!!" << std::endl;
}

Animal::Animal(std::string type): type(type) {
    std::cout << "Baseclass Animal Parmitrized constructor is called!!!" << std::endl;
}

Animal::Animal(const Animal& obj): type(obj.type) {
    std::cout << "Baseclass Animal copy constructor is called!!!" << std::endl;
    return ;
}

Animal& Animal::operator=(const Animal& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Baseclass Animal deconstructor is called!!!" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Animal:" + this->type + " make sounds" << std::endl;    
}
std::string Animal::getType()const
{
    return this->type;
}

void Animal::animal_think() {
    std::cout << "we dont know the animal so no thinking LOL!!!" << std::endl;
}

void Animal::animal_talk() {
    std::cout << "we dont know the animal so no taking LOL!!!" << std::endl;
}  


/***************************************************************************** */

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "subclass Dog default constructor is called!!!" << std::endl;
}

Dog::Dog(const Dog& obj): Animal(obj), brain(new Brain(*obj.brain)) {
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


Cat::Cat() : Animal("Cat"), brain(new Brain()){
    std::cout << "subclass Cat default constructor is called!!!" << std::endl;
}

Cat::Cat(const Cat& obj): Animal(obj), brain(new Brain(*obj.brain)){
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
