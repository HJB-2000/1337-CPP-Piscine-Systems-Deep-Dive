#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): index(0), count(0){};
PhoneBook::~PhoneBook(){};

bool PhoneBook::add_contact()
{
    if (!contacts[index].create_contact())
        return false;
    if (count < 8)
        count++;
    index = (index + 1) % 8;
    return true;
}
void PhoneBook::search_contact()
{
    if (count == 0)
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "│" << std::setw(10) << "Index" << "│" 
         << std::setw(10) << "First Name" << "│"
         << std::setw(10) << "Last Name" << "│"
         << std::setw(10) << "Nickname" << "│" << std::endl;
    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    
    for (int i = 0; i < count; i++)
    {
        std::cout << "│" << std::setw(10) << i << "│";
        contacts[i].display_contact(0, false);
        std::cout << "│";
        contacts[i].display_contact(1, false);
        std::cout << "│";
        contacts[i].display_contact(2, false);
        std::cout << "│" << std::endl;
    }
    std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
    std::string input;
    int pos = -1;
    std::cin.clear();
    std::cout << "Enter contact index: ";
    while (true)
    {
        if (!getline(std::cin, input))
        {
            if (std::cin.eof())
                return;
            std::cin.clear();
            std::cout << "Input error. Try again" << std::endl;
            continue;
        }        
        if (input.empty())
        {
            std::cout << "Empty input. Enter index (0-" << count-1 << ")" << std::endl;
            continue;
        }
        bool is_all_digits = false;
        if(input.length() <= 2)
        {
            for (size_t i = 0; i < input.length(); i++)
            {
                if (!isdigit((unsigned char)input[i]))
                {
                    is_all_digits = false;
                    break;
                }
                else
                    is_all_digits = true;
            }
        }
        if (!is_all_digits)
        {
            std::cout << "Invalid! Enter only digits (0-" << count-1 << "): ";
            continue;
        }
        pos = 0;
        for (size_t i = 0; i < input.length(); i++)
        {
            pos = pos * 10 + (input[i] - '0');
        }
        if (pos < 0 || pos >= count)
        {
            std::cout << "Invalid range! Enter (0-" << count-1 << "): ";
            continue;
        }
        break;
    }
    std::cout << "\n══════════════════════════════════════════════════════════════" << std::endl;
    std::cout << "Contact #" << pos << " details:" << std::endl;
    std::cout << "══════════════════════════════════════════════════════════════" << std::endl;
    std::cout << "First name: "; contacts[pos].display_contact(0, true); std::cout << std::endl;
    std::cout << "Last name: "; contacts[pos].display_contact(1, true); std::cout << std::endl;
    std::cout << "Nick name: "; contacts[pos].display_contact(2, true); std::cout << std::endl;
    std::cout << "Phone number: "; contacts[pos].display_contact(3, true); std::cout << std::endl;
    std::cout << "Dark secret: "; contacts[pos].display_contact(4, true); std::cout << std::endl;
    std::cout << "══════════════════════════════════════════════════════════════" << std::endl;
}