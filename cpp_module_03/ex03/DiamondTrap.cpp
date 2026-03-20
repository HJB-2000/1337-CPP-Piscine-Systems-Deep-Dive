#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
    std::cout << "DiamondTrap Default constructor is called!" << std::endl;
    this->name = "Unnamed_clap_name";
    this->Hit_point = FragTrap::Hit_point;
    this->Energy_point = ScavTrap::Energy_point;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Parameterized constructor is called for " << name << "!" << std::endl;
    this->name = name;
    this->Hit_point = FragTrap::Hit_point;
    this->Energy_point = ScavTrap::Energy_point;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) 
    : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    std::cout << "DiamondTrap Copy constructor is called!" << std::endl;
    this->name = obj.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) {
    std::cout << "DiamondTrap Assignment operator is called!" << std::endl;
    if (this != &obj) {
        ClapTrap::operator=(obj);
        ScavTrap::operator=(obj);
        FragTrap::operator=(obj);
        this->name = obj.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor is called for " << this->name << "!" << std::endl;
}
void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}