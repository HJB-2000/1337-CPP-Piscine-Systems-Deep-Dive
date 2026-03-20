#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "--- TEST 1: Construction/Destruction Chaining ---" << std::endl;
    {
        ScavTrap s("01");
        std::cout << "ScavTrap is ready." << std::endl;
    } 

    std::cout << "\n--- TEST 2: ScavTrap Capabilities ---" << std::endl;
    {
        ScavTrap s("02");
        s.attack("a training dummy");
        s.takeDamage(50);
        s.beRepaired(25);
        s.guardGate();
    }

    std::cout << "\n--- TEST 3: Resource Depletion ---" << std::endl;
    {
        ScavTrap s("03");
        for (int i = 0; i < 51; i++) {
            s.attack("the air");
        }
        s.guardGate();
    }
    return 0;
}
