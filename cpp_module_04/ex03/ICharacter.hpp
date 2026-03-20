#pragma once
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <iostream>
class AMateria;

class ICharacter
{
    public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
    private :
        AMateria *inventoy[4];
        std::string name;
    public :
    Character();
    Character(std::string const &_name);
    Character(const Character& obj);
    Character& operator=(const Character& obj);
    virtual ~Character();
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};
 

#endif
