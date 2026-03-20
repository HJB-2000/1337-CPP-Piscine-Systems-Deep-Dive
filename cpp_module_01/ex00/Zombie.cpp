#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
    std::cout << "constructor: "+Zombie::name << std::endl;
    return ;
}
Zombie::~Zombie()
{
    std::cout << "deconstructor: "+Zombie::name << std::endl;
    return ;
}


