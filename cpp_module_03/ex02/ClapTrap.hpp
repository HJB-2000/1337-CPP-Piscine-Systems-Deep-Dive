#pragma once
#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int attack_damage;  
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
