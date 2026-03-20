#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "ScavTrap Default constructor is called !!!" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap Parmetrized constructor is called !!!" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {
    std::cout << "ScavTrap copy constructor is called !!!" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
    std::cout << "ScavTrap assignement is called !!!" << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap deconstructor is called !!!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (!this->Energy_point || !this->Hit_point)
    {
        std::cout << "ScavTrap " << this->name << " can't attack, not enought energy or hit point" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "ScavTrap " << this->name << " attacks " << target <<  " causing "
         << this->attack_damage << " point of damage" << std::endl;
    return ;

}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
    return ;
}
