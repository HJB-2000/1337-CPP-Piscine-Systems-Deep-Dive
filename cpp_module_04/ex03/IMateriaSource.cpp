#include "IMateriaSource.hpp"


MateriaSource::MateriaSource() {
    std::cout << "MateriaSource Default constructor is called !!" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj){
    std::cout << "MateriaSource Paramitirized constructor is called !!" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (obj.inventory[i])
            this->inventory[i] = obj.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj){
    std::cout << "MateriaSource assignemt operator is called !!" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
            {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (obj.inventory[i])
                this->inventory[i] = obj.inventory[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource destructor is called !!" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            return ;
        }
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++)
    {
        if(this->inventory[i] && this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}