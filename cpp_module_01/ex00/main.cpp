#include "Zombie.hpp"

int main()
{
    Zombie a("stack");
    a.announce();
    Zombie *b = newZombie("heap");
    b->announce();
    randomChump("random");
    delete(b);
}
