#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }
    Harl harl;
    std::string option = argv[1];
    int i = (option == "DEBUG") ? 0: (option == "INFO") ? 1: (option == "WARNING") ? 2: (option == "ERROR") ? 3: -1;
    switch (i)
    {
        case 0:
        {
            harl.complain("DEBUG");
            
        }
        case 1:
        {
            harl.complain("INFO");
            
        }
        case 2:
        {
            harl.complain("WARNING");
            
        }
        case 3:
        {
            harl.complain("ERROR");
            break;
        }
        default:
        {
            std::cout << "[ we are not listening to harl ]" << std::endl;
            break;
        }
    }
    return 0;
}