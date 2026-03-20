#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <ostream>


int main() {
    std::cout << "--- TEST 1: FragTrap Construction ---" << std::endl;
    {
        FragTrap f("01");
        f.highFivesGuys();
    }
    std::cout << "\n--- TEST 2: Battle of the Robots ---" << std::endl;
    {
        ScavTrap s("02_s");
        FragTrap f("02_f");
        std::cout << "\n[ScavTrap Action]" << std::endl;
        s.attack("the floor");
        s.guardGate();
        std::cout << "\n[FragTrap Action]" << std::endl;
        f.attack("the ceiling");
        f.highFivesGuys();
        std::cout << "\n[Common Actions]" << std::endl;
        s.takeDamage(30);
        f.takeDamage(20);
        s.beRepaired(10);
        f.beRepaired(10);
    }
    std::cout << "\n--- TEST 3" << std::endl;
    FragTrap t1("test1");
    FragTrap t2;
    t2 = t1;
    return 0;
}