#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "--- TEST 1: The Diamond Construction ---" << std::endl;
    {
        DiamondTrap D("test1");
        D.whoAmI();
    }
    std::cout << "\n--- TEST 2: Hybrid Capabilities ---" << std::endl;
    {
        DiamondTrap D("X");
        D.attack("test");
        D.guardGate();
        D.highFivesGuys();
        D.whoAmI();
        std::cout << "\n[Taking Damage]" << std::endl;
        D.takeDamage(40);
        D.beRepaired(20);
    }

    return 0;
}