#pragma once 
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"


class HumanB{
    private:
        const std::string name;
        Weapon *w;
    public:
        HumanB(const std::string n);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon &weapon);
};



#endif