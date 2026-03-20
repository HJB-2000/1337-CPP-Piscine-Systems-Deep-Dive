#include "AMateria.hpp"

AMateria::AMateria(): type("default") {
    std::cout << "AMateria Default constructor is called !!" << std::endl;
}
AMateria::AMateria(std::string const &type): type(type){
    std::cout << "AMateria Parmiterized constructor is called !!" << std::endl;
}

AMateria::AMateria(AMateria const &obj): type(obj.type){
    std::cout << "AMateria Parmiterized constructor is called !!" << std::endl;
}

AMateria& AMateria::operator=(AMateria const &obj) {
    std::cout << "AMateria assignement is called !!" << std::endl;
    (void)obj;
    return *this;
}

AMateria::~AMateria() {
    std::cout << "AMateria deconstructor is called !!" << std::endl;
}

std::string const & AMateria::getType() const{
    return this->type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}


/***********************************************************************/

Ice::Ice(): AMateria("ice") {
    std::cout << "ice Default constructor is called !!" << std::endl;
}

Ice::Ice(Ice const &obj): AMateria(obj){
    std::cout << "ice Parmiterized constructor is called !!" << std::endl;
    (void)obj;
}

Ice& Ice::operator=(Ice const &obj) {
    std::cout << "ice assignement is called !!" << std::endl;
    (void)obj;
    return *this;
}

Ice::~Ice() {
    std::cout << "ice deconstructor is called !!" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an Ice bolt at " + target.getName() + " *" << std::endl;
}

/***********************************************************************/

Cure::Cure(): AMateria("cure") {
    std::cout << "cure Default constructor is called !!" << std::endl;
}

Cure::Cure(Cure const &obj): AMateria(obj){
    std::cout << "cure Parmiterized constructor is called !!" << std::endl;
    (void)obj;
}

Cure& Cure::operator=(Cure const &obj) {
    std::cout << "cure assignement is called !!" << std::endl;
    (void)obj;
    return *this;
}

Cure::~Cure() {
    std::cout << "cure deconstructor is called !!" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}