#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character(): name("default") {
    std::cout << "Character Default constructor is called !!" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventoy[i] = NULL;
}

Character::Character(std::string const &_name): name(_name) {
    std::cout << "Character Parametrized constructor called !!" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventoy[i] = NULL;
}

Character::Character(const Character& obj):name(obj.name){
    std::cout << "Character copy constructor is called !!" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (obj.inventoy[i])
            this->inventoy[i] = obj.inventoy[i]->clone();
        else
            this->inventoy[i] = NULL;
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& obj) {
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventoy[i])
            {
                delete this->inventoy[i];
                this->inventoy[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (obj.inventoy[i])
                this->inventoy[i] = obj.inventoy[i]->clone();
        }
    }
    return *this;
}

Character::~Character(){
    std::cout << "Character destroctor is called !!" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->inventoy[i])
            delete this->inventoy[i];
}

std::string const& Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventoy[i])
        {
            this->inventoy[i] = m;
            return ;
        }
    }
    return ;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3)
        return ;
    if (this->inventoy[idx])
        this->inventoy[idx] = NULL;
    return ;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && this->inventoy[idx]) {
        this->inventoy[idx]->use(target);
    }
}

