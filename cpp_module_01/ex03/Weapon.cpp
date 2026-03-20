#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type): type(weapon_type){}
Weapon::~Weapon(){}
const std::string Weapon::getType()
{
    return Weapon::type;
}
void Weapon::setType(std::string weapon_type)
{
    Weapon::type = weapon_type;
}
