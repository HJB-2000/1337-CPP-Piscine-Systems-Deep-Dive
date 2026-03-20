#include "Zombie.hpp"

void Zombie::setname(std::string name)
{
    Zombie::name = name;
    return ;    
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::Zombie()
{
    std::cout << "constructor: called"<< std::endl;
    return ;
}
Zombie::~Zombie()
{
    std::cout << "deconstructor: "+ name << std::endl;
    return ;
}
