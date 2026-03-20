#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("wrongAnimalDefault") {
    std::cout << "Baseclass WrongAnimal default constructor is called!!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "Baseclass WrongAnimal Parmitrized constructor is called!!!" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &obj): type(obj.type) {
    std::cout << "Baseclass WrongAnimal copy constructor is called!!!" << std::endl;
    this->type = obj.type;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal  & obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Baseclass WrongAnimal deconstructor is called!!!" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal  :" + this->type + " make sounds" << std::endl;    
}

std::string WrongAnimal::getType()const
{
    return this->type;
}

/***************************************************************************** */

WrongDog::WrongDog(): WrongAnimal("WrongDog") {
    std::cout << "subclass WrongDog default constructor is called!!!" << std::endl;
}

WrongDog::WrongDog(const WrongDog& obj): WrongAnimal(obj) {
    std::cout << "subclass WrongDog copy constructor is called!!!" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

WrongDog::~WrongDog(){
    std::cout << "subclass WrongDog deconstructor is called!!!" << std::endl;
}
void WrongDog::makeSound() const
{
    std::cout << "WrongAnimal  :" + this->type + " bark " << std::endl;    
}

/***************************************************************************** */


WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "subclass WrongCat default constructor is called!!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj) {
    std::cout << "subclass WrongCat copy constructor is called!!!" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "subclass WrongCat deconstructor is called!!!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongAnimal  :" + this->type + " Meow" << std::endl;    
}
