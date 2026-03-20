#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private:
        const std::string name;
        Weapon &w;
    public:
        HumanA(const std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};

#endif