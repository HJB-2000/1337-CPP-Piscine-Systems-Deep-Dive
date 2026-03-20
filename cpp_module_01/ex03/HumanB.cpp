#include "HumanB.hpp"



HumanB::HumanB(const std::string n): name(n), w(NULL){}
HumanB::~HumanB(){}
void HumanB::attack() const
{
    if(w)
        std::cout << HumanB::name << " attacks with their " << w->getType() << std::endl;
    else
        std::cout << HumanB::name << " Have no weapon" << std::endl;
        
}   

void HumanB::setWeapon(Weapon &weapon)
{
    HumanB::w = &weapon;
}
