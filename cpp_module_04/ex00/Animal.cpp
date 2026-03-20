#include "Animal.hpp"

Animal::Animal():type("Default") {
    std::cout << "Baseclass Animal default constructor is called!!!" << std::endl;
}

Animal::Animal(std::string type):type(type) {
    std::cout << "Baseclass Animal Parmitrized constructor is called!!!" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type) {
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

std::string Animal::getType() const
{
    return this->type;
}

/***************************************************************************** */

Dog::Dog() : Animal("Dog") {
    std::cout << "subclass Dog default constructor is called!!!" << std::endl;
}


Dog::Dog(const Dog& obj): Animal(obj) {
    std::cout << "subclass Dog copy constructor is called!!!" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "subclass Dog deconstructor is called!!!" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Animal:" + this->type + " bark " << std::endl;    
}

/***************************************************************************** */


Cat::Cat() : Animal("Cat") {
    std::cout << "subclass Cat default constructor is called!!!" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj){
    std::cout << "subclass Cat copy constructor is called!!!" << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "subclass Cat deconstructor is called!!!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Animal:" + this->type + " Meow" << std::endl;    
}
