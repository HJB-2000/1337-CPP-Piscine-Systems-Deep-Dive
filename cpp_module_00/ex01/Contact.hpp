#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string secrect;
public:
    Contact();
    ~Contact();
    bool create_contact();
    void    display_contact(int feild, bool style);
};

#endif

