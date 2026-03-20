#pragma once 
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource {
    private:
        AMateria* inventory[4];
    public:
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource& operator=(const MateriaSource &obj);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};



#endif