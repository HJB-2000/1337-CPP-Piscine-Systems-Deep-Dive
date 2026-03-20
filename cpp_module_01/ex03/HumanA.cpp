#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(const std::string n, Weapon& weapon): name(n), w(weapon){
    
}
HumanA::~HumanA(){}
void HumanA::attack() const
{
    std::cout << HumanA::name << " attacks with their " << w.getType() << std::endl;
}
