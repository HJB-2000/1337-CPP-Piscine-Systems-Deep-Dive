#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap Default constructor is called !!!" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->attack_damage = 30;
    return ;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << "FragTrap Parmetrized constructor is called !!!" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->attack_damage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap& obj):ClapTrap(obj) {
    std::cout << "FragTrap copy constructor is called !!!" << std::endl;
    this->name = obj.name;
    this->Hit_point = obj.Hit_point;
    this->Energy_point = obj.Energy_point;
    this->attack_damage = obj.attack_damage;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
    std::cout << "FragTrap assignement is called !!!" << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap deconstructor is called !!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!this->Energy_point || !this->Hit_point)
    {
        std::cout << "FragTrap " << this->name << " can't attack, not enought energy or hit point" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "FragTrap " << this->name << " attacks " << target <<  " causing "
         << this->attack_damage << " point of damage" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " is requesting a high five !" << std::endl;
}