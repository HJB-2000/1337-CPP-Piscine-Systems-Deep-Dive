#include "ClapTrap.hpp"


ClapTrap::ClapTrap(): name("Default"), Hit_point(10), Energy_point(10), attack_damage(0){
    std::cout << "ClapTrap Default constructor is called !!!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name):name(name), Hit_point(10),
Energy_point(10), attack_damage(0){
    std::cout << "ClapTrap Parmetrized constructor is called !!!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
:name(obj.name), Hit_point(obj.Hit_point),
Energy_point(obj.Energy_point),
attack_damage(obj.attack_damage){
    std::cout << "ClapTrap copy constructor is called !!!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
    std::cout << "ClapTrap assignement is called !!!" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->Hit_point = obj.Hit_point;
        this->Energy_point = obj.Energy_point;
        this->attack_damage = obj.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap deconstructor is called !!!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (!this->Energy_point || !this->Hit_point)
    {
        std::cout << "ClapTrap " << this->name << " can't attack, not enought energy or hit point" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "ClapTrap " << this->name << " attacks " << target <<  " causing "
         << this->attack_damage << " point of damage" << std::endl;
    return ;

}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->Hit_point < amount)
        this->Hit_point = 0;
    else
        this->Hit_point -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " point of damage" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (!this->Energy_point || !this->Hit_point)
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired not enghout energy or hit points"
         << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points! "
    << "Remaining HP: " << this->Hit_point << ", Energy: " << this->Energy_point << std::endl;
    return ;
}
