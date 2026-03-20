#pragma once 
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"


class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & obj);
    AMateria& operator=(AMateria const & obj);
    virtual ~AMateria();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
    public:
    Ice();
    Ice(Ice const & obj);
    Ice& operator=(Ice const & obj);
    virtual ~Ice();
    AMateria *clone() const;
    void use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
    Cure();
    Cure(Cure const & obj);
    Cure& operator=(Cure const & obj);
    virtual ~Cure();
    AMateria *clone() const;
    void use(ICharacter& target);
};
#endif