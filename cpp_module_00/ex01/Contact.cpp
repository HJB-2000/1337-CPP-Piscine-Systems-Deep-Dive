#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

static bool read_input(std::string &str, int behivior)
{
    if (!getline(std::cin, str) || str.empty())
    {
        std::cin.clear();
        std::cin.ignore();
        return false;
    }
    if (behivior == 1)
    {
        for (unsigned long i = 0; i < str.length(); i++)
            if (!isdigit((unsigned char)str.at(i)))
                return false;
    }
    else
        for (unsigned long i = 0; i < str.length(); i++)
            if (!isalpha(str.at(i)))
                return false;
    return true;
}


bool Contact::create_contact()
{
    std::cout << "First name: ";
    std::cin.clear();
    std::cin.ignore();
    if(!read_input(first_name, 0))
            return false;
    std::cout << "Last name: ";    
    if(!read_input(last_name, 0))
        return false;
    std::cout << "Nick name: ";    
    if(!read_input(nick_name, 0))
        return false;
    std::cout << "Phone number: ";    
    if(!read_input(phone_number, true))
        return false;    
    std::cout << "Darkest secret: ";    
    if(!read_input(secrect, 0))
        return false;
    return true;
}

void Contact::display_contact(int field, bool style)
{
    std::string tmp;
    const std::string* source;
    
    switch (field)
    {
        case 0: source = &first_name;break;
        case 1: source = &last_name; break;
        case 2: source = &nick_name; break;
        case 3: source = &phone_number; break;
        case 4: source = &secrect; break;
        default: return;
    }
    
    if (style)
        std::cout << *source;
    else
    {
        if (source->length() > 10)
            tmp = source->substr(0, 9) + ".";
        else
            tmp = *source;
        std::cout.width(10);
        std::cout << std::right << tmp;
    }
}


