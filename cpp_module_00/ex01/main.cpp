#include "PhoneBook.hpp"
#include <limits>

int main()
{
    PhoneBook contact_list;
    std::string task;
    int i = 0;
    for (;;)
    {
        if (std::cin.eof())
        {
            std::cout << "\nEOF detected\n";
            return 1;
        }
        std::cout << "entre a task : {ADD / SEARCH/ EXIT}: ";
        if (!(std::cin >> task))
        {
            std::cin.clear();
            std::cin.ignore();
            task.clear();
            std::cout << "\nInvalid input\n";
            return 1;
        }
        i = (task == "ADD")? 0: (task == "SEARCH")? 1 : (task == "EXIT") ? 2: 3;
        switch(i)
        {
            case 0:
            {
                if (!contact_list.add_contact())
                {
                    std::cout << "\nInvalid contact\n";
                    break ;
                }
                break;
            }
            case 1:
            {
                contact_list.search_contact();
                break;
            }
            case 2:
            {
                return 0;
            }
            default :
                break;
        } 
    }
}