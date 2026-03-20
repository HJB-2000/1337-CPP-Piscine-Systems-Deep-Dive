#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("Robot-1");
    ClapTrap robot2("Robot-2");
    ClapTrap robot3;
    ClapTrap robotCopy(robot1);
    ClapTrap robotAssigned;
    robotAssigned = robot2;
    robot1.attack("TargetDummy");
    robot2.attack("TrainingBot");
    robot1.takeDamage(3);
    robot1.takeDamage(2);
    robot1.beRepaired(2);
    robot1.beRepaired(1);
    for (int i = 0; i < 12; i++) {
        std::cout << "Attack " << i + 1 << ": ";
        robot2.attack("Target");
    }
    robot2.attack("Target");
    robot2.beRepaired(5);
    robot1.takeDamage(15);
    robot1.attack("Target");
    robot1.beRepaired(5);
    ClapTrap robot4("Robot-4");
    for (int i = 0; i < 10; i++) {
        robot4.attack("Dummy");
    }
    robot4.beRepaired(5);
    robot3.takeDamage(0);
    robot3.beRepaired(0);
    robot3.attack("");
    ClapTrap test("TestBot");
    test.attack("Dummy");
    return 0;
}